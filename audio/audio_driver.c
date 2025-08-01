/**
 *  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2014 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2025 - Daniel De Matteis
 *  Copyright (C) 2023-2025 - Jesse Talavera-Greenberg
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under
 *  the terms of the GNU General Public License as published by the Free
 *  Software Foundation, either version 3 of the License, or (at your option)
 *  any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT
 *  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 *  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 *  more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with RetroArch. If not, see <http://www.gnu.org/licenses/>.
 **/

#include <math.h>
#include <memalign.h>

#include "audio_driver.h"

#include <retro_assert.h>
#include <string/stdstring.h>
#include <encodings/utf.h>
#include <retro_miscellaneous.h>
#include <clamping.h>
#include <memalign.h>
#include <audio/conversion/float_to_s16.h>
#include <audio/conversion/s16_to_float.h>
#include <audio/conversion/dual_mono.h>
#ifdef HAVE_AUDIOMIXER
#include <audio/audio_mixer.h>
#include "../tasks/task_audio_mixer.h"
#endif
#ifdef HAVE_DSP_FILTER
#include <audio/dsp_filter.h>
#endif
#include <lists/string_list.h>
#include <lists/dir_list.h>

#ifdef HAVE_THREADS
#include "audio_thread_wrapper.h"
#endif

#ifdef HAVE_MENU
#include "../menu/menu_driver.h"
#endif

#ifdef HAVE_NETWORKING
#include "../network/netplay/netplay.h"
#endif

#ifdef HAVE_MICROPHONE
#include "microphone_driver.h"
#endif

#include "../configuration.h"
#include "../driver.h"
#include "../frontend/frontend_driver.h"
#include "../retroarch.h"
#include "../list_special.h"
#include "../file_path_special.h"
#include "../record/record_driver.h"
#include "../tasks/task_content.h"
#include "../runloop.h"
#include "../verbosity.h"

#define AUDIO_CHUNK_SIZE_BLOCKING      512

/* So we don't get complete line-noise when fast-forwarding audio. */
#define AUDIO_CHUNK_SIZE_NONBLOCKING   2048

#define AUDIO_MAX_RATIO                16
#define AUDIO_MIN_RATIO                0.0625

/* Fastforward timing calculations running average samples. Helps with
 * a consistent pitch when fast-forwarding. */
#define AUDIO_FF_EXP_AVG_SAMPLES       16

#define MENU_SOUND_FORMATS "ogg|mod|xm|s3m|mp3|flac|wav"

 /* Converts decibels to voltage gain. Returns voltage gain value. */
#define DB_TO_GAIN(db) (powf(10.0f, (db) / 20.0f))

audio_driver_t audio_null = {
   NULL, /* init */
   NULL, /* write */
   NULL, /* stop */
   NULL, /* start */
   NULL, /* alive */
   NULL, /* set_nonblock_state */
   NULL, /* free */
   NULL, /* use_float */
   "null",
   NULL,
   NULL,
   NULL, /* write_avail */
   NULL  /* buffer_size */
};

audio_driver_t *audio_drivers[] = {
#ifdef HAVE_ALSA
   &audio_alsa,
#if !defined(__QNX__) && !defined(MIYOO) && defined(HAVE_THREADS)
   &audio_alsathread,
#endif
#endif
#ifdef HAVE_TINYALSA
   &audio_tinyalsa,
#endif
#if defined(HAVE_AUDIOIO)
   &audio_audioio,
#endif
#if defined(HAVE_OSS) || defined(HAVE_OSS_BSD)
   &audio_oss,
#endif
#ifdef HAVE_RSOUND
   &audio_rsound,
#endif
#ifdef HAVE_COREAUDIO
   &audio_coreaudio,
#endif
#ifdef HAVE_COREAUDIO3
   &audio_coreaudio3,
#endif
#ifdef HAVE_AL
   &audio_openal,
#endif
#ifdef HAVE_SL
   &audio_opensl,
#endif
#ifdef HAVE_ROAR
   &audio_roar,
#endif
#ifdef HAVE_JACK
   &audio_jack,
#endif
#ifdef HAVE_WASAPI
   &audio_wasapi,
#endif
#ifdef HAVE_XAUDIO
   &audio_xa,
#endif
#ifdef HAVE_DSOUND
   &audio_dsound,
#endif
#if defined(HAVE_SDL) || defined(HAVE_SDL2)
   &audio_sdl,
#endif
#ifdef HAVE_PULSE
   &audio_pulse,
#endif
#ifdef HAVE_PIPEWIRE
   &audio_pipewire,
#endif
#if defined(__PSL1GHT__) || defined(__PS3__)
   &audio_ps3,
#endif
#ifdef XENON
   &audio_xenon360,
#endif
#ifdef GEKKO
   &audio_gx,
#endif
#ifdef WIIU
   &audio_ax,
#endif
#if defined(HAVE_RWEBAUDIO)
   &audio_rwebaudio,
#endif
#if defined(HAVE_AUDIOWORKLET)
   &audio_audioworklet,
#endif
#if defined(PSP) || defined(VITA) || defined(ORBIS)
  &audio_psp,
#endif
#if defined(PS2)
  &audio_ps2,
#endif
#ifdef _3DS
   &audio_ctr_csnd,
   &audio_ctr_dsp,
#ifdef HAVE_THREADS
   &audio_ctr_dsp_thread,
#endif
#endif
#ifdef SWITCH
   &audio_switch,
   &audio_switch_thread,
#ifdef HAVE_LIBNX
   &audio_switch_libnx_audren,
   &audio_switch_libnx_audren_thread,
#endif
#endif
   &audio_null,
   NULL,
};

#ifdef HAVE_MICROPHONE
static microphone_driver_state_t mic_driver_st;

microphone_driver_t microphone_null = {
      NULL,
      NULL,
      NULL,
      NULL,
      "null",
      NULL,
      NULL,
      NULL,
      NULL
};

microphone_driver_t *microphone_drivers[] = {
#ifdef HAVE_ALSA
      &microphone_alsa,
#if !defined(__QNX__) && !defined(MIYOO) && defined(HAVE_THREADS)
   &microphone_alsathread,
#endif
#endif
#ifdef HAVE_WASAPI
      &microphone_wasapi,
#endif
#ifdef HAVE_SDL2
      &microphone_sdl, /* Microphones are not supported in SDL 1 */
#endif
#ifdef HAVE_PIPEWIRE
      &microphone_pipewire,
#endif
#if defined(HAVE_COREAUDIO) && IOS
      &microphone_coreaudio,
#endif
      &microphone_null,
      NULL,
};
#endif

static audio_driver_state_t audio_driver_st = {0}; /* double alignment */

/**************************************/

audio_driver_state_t *audio_state_get_ptr(void)
{
   return &audio_driver_st;
}

/**
 * config_get_audio_driver_options:
 *
 * Get an enumerated list of all audio driver names, separated by '|'.
 *
 * Returns: string listing of all audio driver names, separated by '|'.
 **/
const char *config_get_audio_driver_options(void)
{
   return char_list_new_special(STRING_LIST_AUDIO_DRIVERS, NULL);
}

#ifdef HAVE_TRANSLATE
/* TODO/FIXME - Doesn't currently work.  Fix this. */
bool audio_driver_is_ai_service_speech_running(void)
{
#ifdef HAVE_AUDIOMIXER
   enum audio_mixer_state res = audio_driver_mixer_get_stream_state(10);
   if (!((res == AUDIO_STREAM_STATE_NONE) || (res == AUDIO_STREAM_STATE_STOPPED)))
      return true;
#endif
   return false;
}
#endif

static bool audio_driver_free_devices_list(void)
{
   audio_driver_state_t *audio_st = &audio_driver_st;
   if (
            !audio_st->current_audio
         || !audio_st->current_audio->device_list_free
         || !audio_st->context_audio_data)
      return false;
   audio_st->current_audio->device_list_free(
         audio_st->context_audio_data,
         audio_st->devices_list);
   audio_st->devices_list = NULL;
   return true;
}

#ifdef DEBUG
static void audio_driver_report_audio_buffer_statistics(void)
{
   audio_statistics_t audio_stats;
   audio_stats.samples                   = 0;
   audio_stats.average_buffer_saturation = 0.0f;
   audio_stats.std_deviation_percentage  = 0.0f;
   audio_stats.close_to_underrun         = 0.0f;
   audio_stats.close_to_blocking         = 0.0f;

   if (!audio_compute_buffer_statistics(&audio_stats))
      return;

   RARCH_LOG("[Audio] Average audio buffer saturation: %.2f %%,"
         " standard deviation (percentage points): %.2f %%.\n"
         "[Audio] Amount of time spent close to underrun: %.2f %%."
         " Close to blocking: %.2f %%.\n",
         audio_stats.average_buffer_saturation,
         audio_stats.std_deviation_percentage,
         audio_stats.close_to_underrun,
         audio_stats.close_to_blocking);
}
#endif

static void audio_driver_deinit_resampler(void)
{
   audio_driver_state_t *audio_st = &audio_driver_st;
   if (audio_st->resampler && audio_st->resampler_data)
      audio_st->resampler->free(audio_st->resampler_data);
   audio_st->resampler          = NULL;
   audio_st->resampler_data     = NULL;
   audio_st->resampler_ident[0] = '\0';
   audio_st->resampler_quality  = RESAMPLER_QUALITY_DONTCARE;
}

static bool audio_driver_deinit_internal(bool audio_enable)
{
   audio_driver_state_t *audio_st = &audio_driver_st;
   if (     audio_st->current_audio
         && audio_st->current_audio->free)
   {
      if (audio_st->context_audio_data)
         audio_st->current_audio->free(audio_st->context_audio_data);
      audio_st->context_audio_data = NULL;
   }

   if (audio_st->output_samples_conv_buf)
      memalign_free(audio_st->output_samples_conv_buf);
   audio_st->output_samples_conv_buf     = NULL;

   if (audio_st->input_data)
      memalign_free(audio_st->input_data);

   audio_st->input_data = NULL;
   audio_st->data_ptr   = 0;

#ifdef HAVE_REWIND
   if (audio_st->rewind_buf)
      memalign_free(audio_st->rewind_buf);
   audio_st->rewind_buf  = NULL;
   audio_st->rewind_size = 0;
#endif

   if (!audio_enable)
   {
      audio_st->flags   &= ~AUDIO_FLAG_ACTIVE;
      return false;
   }

   audio_driver_deinit_resampler();

   if (audio_st->output_samples_buf)
      memalign_free(audio_st->output_samples_buf);
   audio_st->output_samples_buf = NULL;

#ifdef HAVE_DSP_FILTER
   audio_driver_dsp_filter_free();
#endif
#ifdef DEBUG
   audio_driver_report_audio_buffer_statistics();
#endif

   return true;
}

#ifdef HAVE_AUDIOMIXER
static void audio_driver_mixer_deinit(void)
{
   unsigned i;

   audio_driver_st.flags &= ~AUDIO_FLAG_MIXER_ACTIVE;

   for (i = 0; i < AUDIO_MIXER_MAX_SYSTEM_STREAMS; i++)
   {
      audio_driver_mixer_stop_stream(i);
      audio_driver_mixer_remove_stream(i);
   }

   audio_mixer_done();
}
#endif

bool audio_driver_deinit(void)
{
#ifdef HAVE_AUDIOMIXER
   audio_driver_mixer_deinit();
#endif
   audio_driver_free_devices_list();
   return audio_driver_deinit_internal(config_get_ptr()->bools.audio_enable);
}

bool audio_driver_find_driver(const char *audio_drv,
      const char *prefix, bool verbosity_enabled)
{
   int i = (int)driver_find_index("audio_driver", audio_drv);

   if (i >= 0)
      audio_driver_st.current_audio = (const audio_driver_t*)
         audio_drivers[i];
   else
   {
      const audio_driver_t *tmp = NULL;
      if (verbosity_enabled)
      {
         unsigned d;
         RARCH_ERR("Couldn't find any %s named \"%s\"\n", prefix, audio_drv);
         RARCH_LOG_OUTPUT("Available %ss are:\n", prefix);
         for (d = 0; audio_drivers[d]; d++)
         {
            if (audio_drivers[d])
               RARCH_LOG_OUTPUT("\t%s\n", audio_drivers[d]->ident);
         }
         RARCH_WARN("Going to default to first %s...\n", prefix);
      }

      tmp = (const audio_driver_t*)audio_drivers[0];

      if (!tmp)
         return false;
      audio_driver_st.current_audio = tmp;
   }

   return true;
}

/**
 * Writes audio samples to audio driver's output.
 * Will first perform DSP processing (if enabled) and resampling.
 *
 * @param audio_st The overall state of the audio driver.
 * @param slowmotion_ratio The factor by which slow motion extends the core's runtime
 * (e.g. a value of 2 means the core is running at half speed).
 * @param data Audio output data that was most recently provided by the core.
 * @param samples The size of \c data, in samples.
 * @param is_slowmotion True if the core is currently running in slow motion.
 * @param is_fastmotion True if the core is currently running in fast-forward.
 **/
static void audio_driver_flush(audio_driver_state_t *audio_st,
      float slowmotion_ratio,
      const int16_t *data, size_t samples,
      bool is_slowmotion, bool is_fastforward)
{
   struct resampler_data src_data;
   float audio_volume_gain           =
         (audio_st->mute_enable || audio_st->flags & AUDIO_FLAG_MUTED)
               ? 0.0f
               : audio_st->volume_gain;

   src_data.data_out                 = NULL;
   src_data.output_frames            = 0;
   /* We'll assign a proper output to the resampler later in this function */

   convert_s16_to_float(audio_st->input_data, data, samples,
         audio_volume_gain);

   /* The resampler operates on floating-point frames,
    * so we have to convert the input first */
   src_data.data_in                  = audio_st->input_data;
   src_data.input_frames             = samples >> 1;

   /* Remember, we allocated buffers that are twice as big as needed.
    * (see audio_driver_init) */

#ifdef HAVE_DSP_FILTER
   /* If we want to process our audio for reasons besides resampling... */
   if (audio_st->dsp)
   {
      struct retro_dsp_data dsp_data;

      dsp_data.input                 = audio_st->input_data;
      dsp_data.input_frames          = (unsigned)(samples >> 1);
      dsp_data.output                = NULL;
      dsp_data.output_frames         = 0;

      /* Initialize the DSP input/output.
       * Our DSP implementations generally operate directly on the
       * input buffer, so the output/output_frames attributes here are zero;
       * the DSP filter will set them to useful values, most likely to be
       * the same as the inputs. */

      retro_dsp_filter_process(audio_st->dsp, &dsp_data);

      /* If the DSP filter succeeded... */
      if (dsp_data.output)
      {
         /* Then let's pass the DSP's output to the resampler's input */
         src_data.data_in            = dsp_data.output;
         src_data.input_frames       = dsp_data.output_frames;
      }
   }
#endif

   src_data.data_out                 = audio_st->output_samples_buf;

   /* Now the resampler will write to the driver state's scratch buffer */

   /* Count samples. */
   {
      unsigned write_idx             =
            audio_st->free_samples_count++ & (AUDIO_BUFFER_FREE_SAMPLES_COUNT - 1);

      /* Readjust the audio input rate. */
      if (audio_st->flags & AUDIO_FLAG_CONTROL)
      {
         int avail                   = (int)audio_st->current_audio->write_avail(
               audio_st->context_audio_data);
         int half_size               = (int)(audio_st->buffer_size / 2);
         int delta_mid               = avail - half_size;
         double direction            = (double)delta_mid / half_size;
         double adjust               = 1.0 + audio_st->rate_control_delta * direction;

         audio_st->free_samples_buf[write_idx] = avail;
         audio_st->src_ratio_curr = audio_st->src_ratio_orig * adjust;

#if 0
         if (verbosity_is_enabled())
         {
            RARCH_LOG_OUTPUT("[Audio] Audio buffer is %u%% full\n",
                  (unsigned)(100 - (avail * 100) /
                     audio_st->buffer_size));
            RARCH_LOG_OUTPUT("[Audio] New rate: %lf, Orig rate: %lf\n",
                  audio_st->src_ratio_curr,
                  audio_st->src_ratio_orig);
         }
#endif
      }
   }

   src_data.ratio           = audio_st->src_ratio_curr;

   if (is_slowmotion)
      src_data.ratio       *= slowmotion_ratio;

   if (is_fastforward && config_get_ptr()->bools.audio_fastforward_speedup)
   {
      const retro_time_t flush_time = cpu_features_get_time_usec();

      if (audio_st->last_flush_time > 0)
      {
         /* What we should see if the speed was 1.0x, converted to microsecs */
         const double expected_flush_delta =
            (src_data.input_frames / audio_st->input * 1000000);
         /* Exponential moving average of the last AUDIO_FF_EXP_AVG_SAMPLES
            samples. This helps make sure pitches are recognizable by avoiding
            too much variance flush-to-flush.

            It's not needed to avoid crackling (the generated waves are going to
            be continuous either way), but it's important to avoid time
            compression and decompression every single frame, which would make
            sounds irrecognizable.

            https://en.wikipedia.org/wiki/Moving_average#Exponential_moving_average
          */
         const retro_time_t n      = AUDIO_FF_EXP_AVG_SAMPLES;
         audio_st->avg_flush_delta = audio_st->avg_flush_delta * (n - 1) / n +
            (flush_time - audio_st->last_flush_time) / n;

         /* How much does the avg_flush_delta deviate
          * from the delta at 1.0x speed? */
         src_data.ratio *=
            MAX(AUDIO_MIN_RATIO,
                  MIN(AUDIO_MAX_RATIO,
                     audio_st->avg_flush_delta / expected_flush_delta));
      }

      audio_st->last_flush_time = flush_time;
   }

   audio_st->resampler->process(audio_st->resampler_data, &src_data);

#ifdef HAVE_AUDIOMIXER
   if (audio_st->flags & AUDIO_FLAG_MIXER_ACTIVE)
   {
      bool override                       = true;
      float mixer_gain                    = 0.0f;
      bool audio_driver_mixer_mute_enable = audio_st->mixer_mute_enable;

      if (!audio_driver_mixer_mute_enable)
      {
         if (audio_st->mixer_volume_gain == 1.0f)
            override                      = false;
         mixer_gain                       = audio_st->mixer_volume_gain;

      }
      audio_mixer_mix(audio_st->output_samples_buf,
            src_data.output_frames, mixer_gain, override);
   }
#endif

   /* Now we write our processed audio output to the driver.
    * It may not be played immediately, depending on
    * the driver implementation. */
   {
      const void *output_data = audio_st->output_samples_buf;
      unsigned output_frames  = (unsigned)src_data.output_frames; /* Unit: frames */

      /* If the audio driver supports float samples,
       * we don't have to do conversion */
      if (audio_st->flags & AUDIO_FLAG_USE_FLOAT)
         output_frames       *= sizeof(float); /* Unit: bytes */
      else
      {
         convert_float_to_s16(audio_st->output_samples_conv_buf,
               (const float*)output_data, output_frames * 2);

         output_data          = audio_st->output_samples_conv_buf;
         output_frames       *= sizeof(int16_t);  /* Unit: bytes */
      }

      audio_st->current_audio->write(audio_st->context_audio_data,
            output_data, output_frames * 2);
   }
}

#ifdef HAVE_AUDIOMIXER
audio_mixer_stream_t *audio_driver_mixer_get_stream(unsigned i)
{
   if (i > (AUDIO_MIXER_MAX_SYSTEM_STREAMS-1))
      return NULL;
   return &audio_driver_st.mixer_streams[i];
}

const char *audio_driver_mixer_get_stream_name(unsigned i)
{
   if (i > (AUDIO_MIXER_MAX_SYSTEM_STREAMS-1))
      return msg_hash_to_str(MENU_ENUM_LABEL_VALUE_NOT_AVAILABLE);
   if (!string_is_empty(audio_driver_st.mixer_streams[i].name))
      return audio_driver_st.mixer_streams[i].name;
   return msg_hash_to_str(MENU_ENUM_LABEL_VALUE_NOT_AVAILABLE);
}

#endif

bool audio_driver_init_internal(void *settings_data, bool audio_cb_inited)
{
   unsigned new_rate              = 0;
   float  *out_samples_buf        = NULL;
   settings_t *settings           = (settings_t*)settings_data;
   bool audio_enable              = settings->bools.audio_enable;
   bool audio_sync                = settings->bools.audio_sync;
   bool audio_rate_control        = settings->bools.audio_rate_control;
   float slowmotion_ratio         = settings->floats.slowmotion_ratio;
   unsigned setting_audio_latency = settings->uints.audio_latency;
   unsigned runloop_audio_latency = runloop_state_get_ptr()->audio_latency;
   unsigned audio_latency         = (runloop_audio_latency > setting_audio_latency)
         ? runloop_audio_latency : setting_audio_latency;
   size_t max_buffer_samples      = AUDIO_CHUNK_SIZE_NONBLOCKING * 2;
   /* Accommodate rewind since at some point we might have two full buffers. */
   size_t outsamples_max          = max_buffer_samples * AUDIO_MAX_RATIO * slowmotion_ratio;
   int16_t *out_conv_buf          = (int16_t*)memalign_alloc(64, outsamples_max * sizeof(int16_t));
   size_t audio_buf_length        = max_buffer_samples * sizeof(float);
   float *audio_buf               = (float*)memalign_alloc(64, audio_buf_length);
   bool verbosity_enabled         = verbosity_is_enabled();
#ifdef HAVE_REWIND
   int16_t *rewind_buf            = NULL;
   /* Needs to be able to hold full content of a full max_buffer_samples
    * in addition to its own. */
   if (!(rewind_buf = (int16_t*)memalign_alloc(64, max_buffer_samples * sizeof(int16_t))))
      goto error;

   audio_driver_st.rewind_buf    = rewind_buf;
   audio_driver_st.rewind_size   = max_buffer_samples;
#endif

   convert_s16_to_float_init_simd();
   convert_float_to_s16_init_simd();

   if (!out_conv_buf || !audio_buf)
      goto error;

   memset(audio_buf, 0, audio_buf_length);

   audio_driver_st.input_data                     = audio_buf;
   audio_driver_st.input_data_length              = audio_buf_length;
   audio_driver_st.output_samples_conv_buf        = out_conv_buf;
   audio_driver_st.output_samples_conv_buf_length = outsamples_max * sizeof(int16_t);
   audio_driver_st.chunk_block_size               = AUDIO_CHUNK_SIZE_BLOCKING;
   audio_driver_st.chunk_nonblock_size            = AUDIO_CHUNK_SIZE_NONBLOCKING;
   audio_driver_st.chunk_size                     = audio_driver_st.chunk_block_size;

   if (!audio_enable)
   {
      audio_driver_st.flags     &= ~AUDIO_FLAG_ACTIVE;
      return false;
   }

   audio_driver_st.flags     |= AUDIO_FLAG_ACTIVE;

   if (!(audio_driver_find_driver(settings->arrays.audio_driver,
         "audio driver", verbosity_enabled)))
   {
      RARCH_ERR("Failed to initialize audio driver.\n");
      return false;
   }

   if (!audio_driver_st.current_audio || !audio_driver_st.current_audio->init)
   {
      RARCH_ERR("Failed to initialize audio driver. Will continue without audio.\n");
      audio_driver_st.flags &= ~AUDIO_FLAG_ACTIVE;
      return false;
   }

#ifdef HAVE_THREADS
   if (audio_cb_inited)
   {
      RARCH_LOG("[Audio] Starting threaded audio driver...\n");
      if (!audio_init_thread(
               &audio_driver_st.current_audio,
               &audio_driver_st.context_audio_data,
                *settings->arrays.audio_device
               ? settings->arrays.audio_device : NULL,
               settings->uints.audio_output_sample_rate, &new_rate,
               audio_latency,
               settings->uints.audio_block_frames,
               audio_driver_st.current_audio))
      {
         RARCH_ERR("[Audio] Cannot open threaded audio driver. Exiting...\n");
         return false;
      }
   }
   else
#endif
   {
      audio_driver_st.context_audio_data =
         audio_driver_st.current_audio->init(*settings->arrays.audio_device
               ? settings->arrays.audio_device : NULL,
               settings->uints.audio_output_sample_rate,
               audio_latency,
               settings->uints.audio_block_frames,
               &new_rate);
      RARCH_LOG("[Audio] Started synchronous audio driver.\n");
   }

   if (new_rate != 0)
      configuration_set_int(settings,
            settings->uints.audio_output_sample_rate, new_rate);

   if (!audio_driver_st.context_audio_data)
   {
      RARCH_ERR("Failed to initialize audio driver. Will continue without audio.\n");
      audio_driver_st.flags &= ~AUDIO_FLAG_ACTIVE;
   }

   audio_driver_st.flags    &= ~AUDIO_FLAG_USE_FLOAT;
   if (     (audio_driver_st.flags & AUDIO_FLAG_ACTIVE)
         && audio_driver_st.current_audio->use_float(
            audio_driver_st.context_audio_data))
      audio_driver_st.flags |=  AUDIO_FLAG_USE_FLOAT;

   if (     !audio_sync
         && (audio_driver_st.flags & AUDIO_FLAG_ACTIVE))
   {
      if (     (audio_driver_st.flags & AUDIO_FLAG_ACTIVE)
            && audio_driver_st.context_audio_data)
         audio_driver_st.current_audio->set_nonblock_state(
               audio_driver_st.context_audio_data, true);

      audio_driver_st.chunk_size =
         audio_driver_st.chunk_nonblock_size;
   }

   if (audio_driver_st.input <= 0.0f)
   {
      /* Should never happen. */
      RARCH_WARN("[Audio] Input rate is invalid (%.3f Hz)."
            " Using output rate (%u Hz).\n",
            audio_driver_st.input,
            settings->uints.audio_output_sample_rate);

      audio_driver_st.input = settings->uints.audio_output_sample_rate;
   }

   audio_driver_st.src_ratio_orig    =
      audio_driver_st.src_ratio_curr =
      (double)settings->uints.audio_output_sample_rate / audio_driver_st.input;

   if (!string_is_empty(settings->arrays.audio_resampler))
      strlcpy(audio_driver_st.resampler_ident,
            settings->arrays.audio_resampler,
            sizeof(audio_driver_st.resampler_ident));
   else
      audio_driver_st.resampler_ident[0] = '\0';

   audio_driver_st.resampler_quality = (enum resampler_quality)settings->uints.audio_resampler_quality;

   if (!retro_resampler_realloc(
            &audio_driver_st.resampler_data,
            &audio_driver_st.resampler,
            audio_driver_st.resampler_ident,
            audio_driver_st.resampler_quality,
            audio_driver_st.src_ratio_orig))
   {
      RARCH_ERR("Failed to initialize resampler \"%s\".\n",
            audio_driver_st.resampler_ident);
      audio_driver_st.flags &= ~AUDIO_FLAG_ACTIVE;
   }

   audio_driver_st.data_ptr = 0;

   out_samples_buf = (float*)memalign_alloc(64, outsamples_max * sizeof(float));

   if (!out_samples_buf)
      goto error;

   audio_driver_st.output_samples_buf        = (float*)out_samples_buf;
   audio_driver_st.output_samples_buf_length = outsamples_max * sizeof(float);
   audio_driver_st.flags                    &= ~AUDIO_FLAG_CONTROL;

   if (
            !audio_cb_inited
         && (audio_driver_st.flags & AUDIO_FLAG_ACTIVE)
         && (audio_rate_control)
         )
   {
      /* Audio rate control requires write_avail
       * and buffer_size to be implemented. */
      if (audio_driver_st.current_audio->buffer_size)
      {
         audio_driver_st.buffer_size =
            audio_driver_st.current_audio->buffer_size(
                  audio_driver_st.context_audio_data);
         audio_driver_st.flags |= AUDIO_FLAG_CONTROL;
      }
      else
         RARCH_WARN("[Audio] Rate control was desired, but driver does not support needed features.\n");
   }

   command_event(CMD_EVENT_DSP_FILTER_INIT, NULL);

   audio_driver_st.free_samples_count = 0;

#ifdef HAVE_AUDIOMIXER
   audio_mixer_init(settings->uints.audio_output_sample_rate);
#endif

   /* Threaded driver is initially stopped. */
   if (     (audio_driver_st.flags & AUDIO_FLAG_ACTIVE)
         &&  audio_cb_inited)
      audio_driver_start(false);

   return true;

error:
   return audio_driver_deinit();
}

void audio_driver_sample(int16_t left, int16_t right)
{
   uint32_t runloop_flags;
   audio_driver_state_t *audio_st  = &audio_driver_st;
   recording_state_t *recording_st = NULL;
   if (!audio_st || !audio_st->output_samples_conv_buf)
      return;
   if (audio_st->flags & AUDIO_FLAG_SUSPENDED)
      return;
   audio_st->output_samples_conv_buf[audio_st->data_ptr++] = left;
   audio_st->output_samples_conv_buf[audio_st->data_ptr++] = right;

   if (audio_st->data_ptr < audio_st->chunk_size)
      return;

   runloop_flags                   = runloop_get_flags();
   recording_st                    = recording_state_get_ptr();

   if (     recording_st->data
         && recording_st->driver
         && recording_st->driver->push_audio)
   {
      struct record_audio_data ffemu_data;

      ffemu_data.data               = audio_st->output_samples_conv_buf;
      ffemu_data.frames             = audio_st->data_ptr / 2;

      recording_st->driver->push_audio(recording_st->data, &ffemu_data);
   }

   if (!(    (runloop_flags   & RUNLOOP_FLAG_PAUSED)
         || !(audio_st->flags & AUDIO_FLAG_ACTIVE)
         || !(audio_st->output_samples_buf)))
      audio_driver_flush(audio_st,
            config_get_ptr()->floats.slowmotion_ratio,
            audio_st->output_samples_conv_buf,
            audio_st->data_ptr,
            (runloop_flags & RUNLOOP_FLAG_SLOWMOTION) ? true : false,
            (runloop_flags & RUNLOOP_FLAG_FASTMOTION) ? true : false);

   audio_st->data_ptr = 0;
}

size_t audio_driver_sample_batch(const int16_t *data, size_t frames)
{
   uint32_t runloop_flags;
   bool recording_push_audio      = false;
   bool flush_audio               = false;
   size_t frames_remaining        = frames;
   recording_state_t *record_st   = recording_state_get_ptr();
   audio_driver_state_t *audio_st = &audio_driver_st;
   float slowmotion_ratio         = config_get_ptr()->floats.slowmotion_ratio;

   if ((audio_st->flags & AUDIO_FLAG_SUSPENDED) || (frames < 1))
      return frames;

   runloop_flags                  = runloop_get_flags();
   flush_audio                    = !((runloop_flags & RUNLOOP_FLAG_PAUSED)
            || !(audio_st->flags & AUDIO_FLAG_ACTIVE)
            || !(audio_st->output_samples_buf));
   recording_push_audio           = record_st->data
           && record_st->driver
           && record_st->driver->push_audio;

   /* We want to run this loop at least once, so use a
    * do...while (do...while has only a single conditional
    * jump, as opposed to for and while which have a
    * conditional jump and an unconditional jump). Note,
    * however, that this is only relevant for compilers
    * that are poor at optimisation... */

   do
   {
      size_t frames_to_write =
            (frames_remaining > (AUDIO_CHUNK_SIZE_NONBLOCKING >> 1))
                  ? (AUDIO_CHUNK_SIZE_NONBLOCKING >> 1)
                  : frames_remaining;

      if (recording_push_audio)
      {
         struct record_audio_data ffemu_data;

         ffemu_data.data   = data;
         ffemu_data.frames = frames_to_write;

         record_st->driver->push_audio(record_st->data, &ffemu_data);
      }

      if (flush_audio)
         audio_driver_flush(audio_st, slowmotion_ratio, data,
               frames_to_write << 1,
               (runloop_flags & RUNLOOP_FLAG_SLOWMOTION) ? true : false,
               (runloop_flags & RUNLOOP_FLAG_FASTMOTION) ? true : false);

      frames_remaining -= frames_to_write;
      data             += frames_to_write << 1;
   } while (frames_remaining > 0);

   return frames;
}

#ifdef HAVE_REWIND
void audio_driver_sample_rewind(int16_t left, int16_t right)
{
   audio_driver_state_t *audio_st  = &audio_driver_st;
   if (audio_st->rewind_ptr == 0)
      return;

   audio_st->rewind_buf[--audio_st->rewind_ptr] = right;
   audio_st->rewind_buf[--audio_st->rewind_ptr] = left;
}

size_t audio_driver_sample_batch_rewind(
      const int16_t *data, size_t frames)
{
   size_t i;
   audio_driver_state_t *audio_st  = &audio_driver_st;
   size_t              samples     = frames << 1;

   for (i = 0; i < samples; i++)
   {
      if (audio_st->rewind_ptr < 1)
         break;
      audio_st->rewind_buf[--audio_st->rewind_ptr] = data[i];
   }

   return frames;
}
#endif

#ifdef HAVE_DSP_FILTER
void audio_driver_dsp_filter_free(void)
{
   audio_driver_state_t *audio_st  = &audio_driver_st;
   if (audio_st->dsp)
      retro_dsp_filter_free(audio_st->dsp);
   audio_st->dsp = NULL;
}

bool audio_driver_dsp_filter_init(const char *device)
{
   retro_dsp_filter_t *audio_driver_dsp = NULL;
   struct string_list *plugs            = NULL;
#if defined(HAVE_DYLIB) && !defined(HAVE_FILTERS_BUILTIN)
   char ext_name[16];
   char basedir[NAME_MAX_LENGTH];
   fill_pathname_basedir(basedir, device, sizeof(basedir));
   if (!frontend_driver_get_core_extension(ext_name, sizeof(ext_name)))
      return false;
   if (!(plugs = dir_list_new(basedir, ext_name, false, true, false, false)))
      return false;
#endif
   audio_driver_dsp = retro_dsp_filter_new(
         device, plugs, audio_driver_st.input);
   if (!audio_driver_dsp)
      return false;

   audio_driver_st.dsp = audio_driver_dsp;

   return true;
}
#endif

void audio_driver_set_buffer_size(size_t bufsize)
{
   audio_driver_st.buffer_size = bufsize;
}

#ifdef HAVE_REWIND
void audio_driver_setup_rewind(void)
{
   unsigned i;
   audio_driver_state_t *audio_st  = &audio_driver_st;

   /* Push audio ready to be played. */
   audio_st->rewind_ptr = audio_st->rewind_size;

   for (i = 0; i < audio_st->data_ptr; i += 2)
   {
      if (audio_st->rewind_ptr > 0)
         audio_st->rewind_buf[--audio_st->rewind_ptr] =
            audio_st->output_samples_conv_buf[i + 1];

      if (audio_st->rewind_ptr > 0)
         audio_st->rewind_buf[--audio_st->rewind_ptr] =
            audio_st->output_samples_conv_buf[i + 0];
   }

   audio_st->data_ptr = 0;
}
#endif

bool audio_driver_get_devices_list(void **data)
{
   struct string_list**ptr     = (struct string_list**)data;
   if (!ptr)
      return false;
   *ptr = audio_driver_st.devices_list;
   return true;
}

#ifdef HAVE_AUDIOMIXER
bool audio_driver_mixer_extension_supported(const char *ext)
{
#ifdef HAVE_STB_VORBIS
   if (string_is_equal_noncase("ogg", ext))
      return true;
#endif
#ifdef HAVE_IBXM
   if (string_is_equal_noncase("mod", ext))
      return true;
   if (string_is_equal_noncase("s3m", ext))
      return true;
   if (string_is_equal_noncase("xm", ext))
      return true;
#endif
#ifdef HAVE_DR_FLAC
   if (string_is_equal_noncase("flac", ext))
      return true;
#endif
#ifdef HAVE_DR_MP3
   if (string_is_equal_noncase("mp3", ext))
      return true;
#endif
   if (string_is_equal_noncase("wav", ext))
      return true;
   return false;
}

static int audio_mixer_find_index(
      audio_mixer_sound_t *sound)
{
   unsigned i;

   for (i = 0; i < AUDIO_MIXER_MAX_SYSTEM_STREAMS; i++)
   {
      audio_mixer_sound_t *handle = audio_driver_st.mixer_streams[i].handle;
      if (handle == sound)
         return i;
   }
   return -1;
}

static void audio_mixer_play_stop_cb(
      audio_mixer_sound_t *sound, unsigned reason)
{
   int idx = audio_mixer_find_index(sound);

   switch (reason)
   {
      case AUDIO_MIXER_SOUND_FINISHED:
         audio_mixer_destroy(sound);

         if (idx >= 0)
         {
            unsigned i = (unsigned)idx;

            if (!string_is_empty(audio_driver_st.mixer_streams[i].name))
               free(audio_driver_st.mixer_streams[i].name);

            audio_driver_st.mixer_streams[i].name    = NULL;
            audio_driver_st.mixer_streams[i].state   = AUDIO_STREAM_STATE_NONE;
            audio_driver_st.mixer_streams[i].volume  = 0.0f;
            audio_driver_st.mixer_streams[i].buf     = NULL;
            audio_driver_st.mixer_streams[i].stop_cb = NULL;
            audio_driver_st.mixer_streams[i].handle  = NULL;
            audio_driver_st.mixer_streams[i].voice   = NULL;
         }
         break;
      case AUDIO_MIXER_SOUND_STOPPED:
         break;
      case AUDIO_MIXER_SOUND_REPEATED:
         break;
   }
}

static void audio_mixer_menu_stop_cb(
      audio_mixer_sound_t *sound, unsigned reason)
{
   int idx = audio_mixer_find_index(sound);

   switch (reason)
   {
      case AUDIO_MIXER_SOUND_FINISHED:
         if (idx >= 0)
         {
            unsigned i                              = (unsigned)idx;
            audio_driver_st.mixer_streams[i].state   = AUDIO_STREAM_STATE_STOPPED;
            audio_driver_st.mixer_streams[i].volume  = 0.0f;
         }
         break;
      case AUDIO_MIXER_SOUND_STOPPED:
      case AUDIO_MIXER_SOUND_REPEATED:
         break;
   }
}

static void audio_mixer_play_stop_sequential_cb(
      audio_mixer_sound_t *sound, unsigned reason)
{
   int idx = audio_mixer_find_index(sound);

   switch (reason)
   {
      case AUDIO_MIXER_SOUND_FINISHED:
         audio_mixer_destroy(sound);

         if (idx >= 0)
         {
            unsigned i = (unsigned)idx;

            if (!string_is_empty(audio_driver_st.mixer_streams[i].name))
               free(audio_driver_st.mixer_streams[i].name);

            if (i < AUDIO_MIXER_MAX_STREAMS)
               audio_driver_st.mixer_streams[i].stream_type = AUDIO_STREAM_TYPE_USER;
            else
               audio_driver_st.mixer_streams[i].stream_type = AUDIO_STREAM_TYPE_SYSTEM;

            audio_driver_st.mixer_streams[i].name           = NULL;
            audio_driver_st.mixer_streams[i].state          = AUDIO_STREAM_STATE_NONE;
            audio_driver_st.mixer_streams[i].volume         = 0.0f;
            audio_driver_st.mixer_streams[i].buf            = NULL;
            audio_driver_st.mixer_streams[i].stop_cb        = NULL;
            audio_driver_st.mixer_streams[i].handle         = NULL;
            audio_driver_st.mixer_streams[i].voice          = NULL;

            i++;

            for (; i < AUDIO_MIXER_MAX_SYSTEM_STREAMS; i++)
            {
               if (audio_driver_st.mixer_streams[i].state
                     == AUDIO_STREAM_STATE_STOPPED)
               {
                  audio_driver_mixer_play_stream_sequential(i);
                  break;
               }
            }
         }
         break;
      case AUDIO_MIXER_SOUND_STOPPED:
      case AUDIO_MIXER_SOUND_REPEATED:
         break;
   }
}

static bool audio_driver_mixer_get_free_stream_slot(
      unsigned *id, enum audio_mixer_stream_type type)
{
   unsigned     i = AUDIO_MIXER_MAX_STREAMS;
   unsigned count = AUDIO_MIXER_MAX_SYSTEM_STREAMS;

   if (type == AUDIO_STREAM_TYPE_USER)
   {
      i           = 0;
      count       = AUDIO_MIXER_MAX_STREAMS;
   }

   for (; i < count; i++)
   {
      if (audio_driver_st.mixer_streams[i].state == AUDIO_STREAM_STATE_NONE)
      {
         *id = i;
         return true;
      }
   }

   return false;
}

bool audio_driver_mixer_add_stream(audio_mixer_stream_params_t *params)
{
   unsigned free_slot            = 0;
   audio_mixer_voice_t *voice    = NULL;
   audio_mixer_sound_t *handle   = NULL;
   audio_mixer_stop_cb_t stop_cb = audio_mixer_play_stop_cb;
   bool looped                   = (params->state == AUDIO_STREAM_STATE_PLAYING_LOOPED);
   void *buf                     = NULL;

   if (params->stream_type == AUDIO_STREAM_TYPE_NONE)
      return false;

   switch (params->slot_selection_type)
   {
      case AUDIO_MIXER_SLOT_SELECTION_MANUAL:
         free_slot = params->slot_selection_idx;

         /* If we are using a manually specified
          * slot, must free any existing stream
          * before assigning the new one */
         audio_driver_mixer_stop_stream(free_slot);
         audio_driver_mixer_remove_stream(free_slot);
         break;
      case AUDIO_MIXER_SLOT_SELECTION_AUTOMATIC:
      default:
         if (!audio_driver_mixer_get_free_stream_slot(
                  &free_slot, params->stream_type))
            return false;
         break;
   }

   if (params->state == AUDIO_STREAM_STATE_NONE)
      return false;

   if (!(buf = malloc(params->bufsize)))
      return false;

   memcpy(buf, params->buf, params->bufsize);

   switch (params->type)
   {
      case AUDIO_MIXER_TYPE_WAV:
         handle = audio_mixer_load_wav(buf, (int32_t)params->bufsize,
               audio_driver_st.resampler_ident,
               audio_driver_st.resampler_quality);
         /* WAV is a special case - input buffer is not
          * free()'d when sound playback is complete (it is
          * converted to a PCM buffer, which is free()'d instead),
          * so have to do it here */
         free(buf);
         buf = NULL;
         break;
      case AUDIO_MIXER_TYPE_OGG:
         handle = audio_mixer_load_ogg(buf, (int32_t)params->bufsize);
         break;
      case AUDIO_MIXER_TYPE_MOD:
         handle = audio_mixer_load_mod(buf, (int32_t)params->bufsize);
         break;
      case AUDIO_MIXER_TYPE_FLAC:
#ifdef HAVE_DR_FLAC
         handle = audio_mixer_load_flac(buf, (int32_t)params->bufsize);
#endif
         break;
      case AUDIO_MIXER_TYPE_MP3:
#ifdef HAVE_DR_MP3
         handle = audio_mixer_load_mp3(buf, (int32_t)params->bufsize);
#endif
         break;
      case AUDIO_MIXER_TYPE_NONE:
         break;
   }

   if (!handle)
   {
      free(buf);
      return false;
   }

   switch (params->state)
   {
      case AUDIO_STREAM_STATE_PLAYING_SEQUENTIAL:
         stop_cb = audio_mixer_play_stop_sequential_cb;
         /* fall-through */
      case AUDIO_STREAM_STATE_PLAYING_LOOPED:
      case AUDIO_STREAM_STATE_PLAYING:
         voice = audio_mixer_play(handle, looped, params->volume,
               audio_driver_st.resampler_ident,
               audio_driver_st.resampler_quality, stop_cb);
         break;
      default:
         break;
   }

   audio_driver_st.flags |= AUDIO_FLAG_MIXER_ACTIVE;

   audio_driver_st.mixer_streams[free_slot].name        =
      !string_is_empty(params->basename) ? strdup(params->basename) : NULL;
   audio_driver_st.mixer_streams[free_slot].buf         = buf;
   audio_driver_st.mixer_streams[free_slot].handle      = handle;
   audio_driver_st.mixer_streams[free_slot].voice       = voice;
   audio_driver_st.mixer_streams[free_slot].stream_type = params->stream_type;
   audio_driver_st.mixer_streams[free_slot].type        = params->type;
   audio_driver_st.mixer_streams[free_slot].state       = params->state;
   audio_driver_st.mixer_streams[free_slot].volume      = params->volume;
   audio_driver_st.mixer_streams[free_slot].stop_cb     = stop_cb;

   return true;
}

enum audio_mixer_state audio_driver_mixer_get_stream_state(unsigned i)
{
   if (i >= AUDIO_MIXER_MAX_SYSTEM_STREAMS)
      return AUDIO_STREAM_STATE_NONE;

   return audio_driver_st.mixer_streams[i].state;
}

static void audio_driver_mixer_play_stream_internal(
      unsigned i, unsigned type)
{
   if (i >= AUDIO_MIXER_MAX_SYSTEM_STREAMS)
      return;

   switch (audio_driver_st.mixer_streams[i].state)
   {
      case AUDIO_STREAM_STATE_STOPPED:
         audio_driver_st.mixer_streams[i].voice =
            audio_mixer_play(audio_driver_st.mixer_streams[i].handle,
               (type == AUDIO_STREAM_STATE_PLAYING_LOOPED) ? true : false,
               1.0f, audio_driver_st.resampler_ident,
               audio_driver_st.resampler_quality,
               audio_driver_st.mixer_streams[i].stop_cb);
         audio_driver_st.mixer_streams[i].state = (enum audio_mixer_state)type;
         break;
      case AUDIO_STREAM_STATE_PLAYING:
      case AUDIO_STREAM_STATE_PLAYING_LOOPED:
      case AUDIO_STREAM_STATE_PLAYING_SEQUENTIAL:
      case AUDIO_STREAM_STATE_NONE:
         break;
   }
}

#if defined(HAVE_MENU)
static void audio_driver_load_menu_bgm_callback(retro_task_t *task,
      void *task_data, void *user_data, const char *error)
{
   if (menu_state_get_ptr()->flags & MENU_ST_FLAG_ALIVE)
      audio_driver_mixer_play_menu_sound_looped(AUDIO_MIXER_SYSTEM_SLOT_BGM);
}
#endif

void audio_driver_load_system_sounds(void)
{
   char basename_noext[NAME_MAX_LENGTH];
   char sounds_path[PATH_MAX_LENGTH];
   char sounds_fallback_path[PATH_MAX_LENGTH];
   settings_t *settings                  = config_get_ptr();
   const char *dir_assets                = settings->paths.directory_assets;
   const bool audio_enable_menu          = settings->bools.audio_enable_menu;
   const bool audio_enable_menu_ok       = audio_enable_menu && settings->bools.audio_enable_menu_ok;
   const bool audio_enable_menu_cancel   = audio_enable_menu && settings->bools.audio_enable_menu_cancel;
   const bool audio_enable_menu_notice   = audio_enable_menu && settings->bools.audio_enable_menu_notice;
   const bool audio_enable_menu_bgm      = audio_enable_menu && settings->bools.audio_enable_menu_bgm;
   const bool audio_enable_menu_scroll   = audio_enable_menu && settings->bools.audio_enable_menu_scroll;
   const bool audio_enable_cheevo_unlock = settings->bools.cheevos_unlock_sound_enable;
   const char *path_ok                   = NULL;
   const char *path_cancel               = NULL;
   const char *path_notice               = NULL;
   const char *path_notice_back          = NULL;
   const char *path_bgm                  = NULL;
   const char *path_cheevo_unlock        = NULL;
   const char *path_up                   = NULL;
   const char *path_down                 = NULL;
   struct string_list *list              = NULL;
   struct string_list *list_fallback     = NULL;
   unsigned i                            = 0;

   if (!audio_enable_menu && !audio_enable_cheevo_unlock)
      goto end;

   sounds_path[0] = basename_noext[0] ='\0';

   fill_pathname_join_special(
         sounds_fallback_path,
         dir_assets,
         "sounds",
         sizeof(sounds_fallback_path));

   fill_pathname_application_special(
         sounds_path,
         sizeof(sounds_path),
         APPLICATION_SPECIAL_DIRECTORY_ASSETS_SOUNDS);

   list          = dir_list_new(sounds_path, MENU_SOUND_FORMATS, false, false, false, false);
   list_fallback = dir_list_new(sounds_fallback_path, MENU_SOUND_FORMATS, false, false, false, false);

   if (!list)
   {
      list          = list_fallback;
      list_fallback = NULL;
   }

   if (!list || list->size == 0)
      goto end;

   if (list_fallback && list_fallback->size > 0)
   {
      for (i = 0; i < list_fallback->size; i++)
      {
         if (list->size == 0 || !string_list_find_elem(list, list_fallback->elems[i].data))
         {
            union string_list_elem_attr attr = {0};
            string_list_append(list, list_fallback->elems[i].data, attr);
         }
      }
   }

   for (i = 0; i < list->size; i++)
   {
      const char *path = list->elems[i].data;
      const char *ext  = path_get_extension(path);

      if (audio_driver_mixer_extension_supported(ext))
      {
         basename_noext[0] = '\0';
         fill_pathname(basename_noext, path_basename(path), "",
               sizeof(basename_noext));

         if (string_is_equal_noncase(basename_noext, "ok"))
            path_ok = path;
         else if (string_is_equal_noncase(basename_noext, "cancel"))
            path_cancel = path;
         else if (string_is_equal_noncase(basename_noext, "notice"))
            path_notice = path;
         else if (string_is_equal_noncase(basename_noext, "notice_back"))
            path_notice_back = path;
         else if (string_is_equal_noncase(basename_noext, "bgm"))
            path_bgm = path;
         else if (string_is_equal_noncase(basename_noext, "unlock"))
            path_cheevo_unlock = path;
         else if (string_is_equal_noncase(basename_noext, "up"))
            path_up = path;
         else if (string_is_equal_noncase(basename_noext, "down"))
            path_down = path;
      }
   }

   if (path_ok && audio_enable_menu_ok)
      task_push_audio_mixer_load(path_ok, NULL, NULL, true, AUDIO_MIXER_SLOT_SELECTION_MANUAL, AUDIO_MIXER_SYSTEM_SLOT_OK);
   if (path_cancel && audio_enable_menu_cancel)
      task_push_audio_mixer_load(path_cancel, NULL, NULL, true, AUDIO_MIXER_SLOT_SELECTION_MANUAL, AUDIO_MIXER_SYSTEM_SLOT_CANCEL);
   if (audio_enable_menu_notice)
   {
      if (path_notice)
         task_push_audio_mixer_load(path_notice, NULL, NULL, true, AUDIO_MIXER_SLOT_SELECTION_MANUAL, AUDIO_MIXER_SYSTEM_SLOT_NOTICE);
      if (path_notice_back)
          task_push_audio_mixer_load(path_notice_back, NULL, NULL, true, AUDIO_MIXER_SLOT_SELECTION_MANUAL, AUDIO_MIXER_SYSTEM_SLOT_NOTICE_BACK);
   }

#if defined(HAVE_MENU)
   if (path_bgm && audio_enable_menu_bgm)
      task_push_audio_mixer_load(path_bgm, audio_driver_load_menu_bgm_callback, NULL, true, AUDIO_MIXER_SLOT_SELECTION_MANUAL, AUDIO_MIXER_SYSTEM_SLOT_BGM);
#endif

   if (path_cheevo_unlock && audio_enable_cheevo_unlock)
      task_push_audio_mixer_load(path_cheevo_unlock, NULL, NULL, true, AUDIO_MIXER_SLOT_SELECTION_MANUAL, AUDIO_MIXER_SYSTEM_SLOT_ACHIEVEMENT_UNLOCK);

   if (audio_enable_menu_scroll)
   {
      if (path_up)
         task_push_audio_mixer_load(path_up, NULL, NULL, true, AUDIO_MIXER_SLOT_SELECTION_MANUAL, AUDIO_MIXER_SYSTEM_SLOT_UP);
      if (path_down)
         task_push_audio_mixer_load(path_down, NULL, NULL, true, AUDIO_MIXER_SLOT_SELECTION_MANUAL, AUDIO_MIXER_SYSTEM_SLOT_DOWN);
   }

end:
   if (list)
      string_list_free(list);
   if (list_fallback)
      string_list_free(list_fallback);
}

void audio_driver_mixer_play_stream(unsigned i)
{
   audio_driver_st.mixer_streams[i].stop_cb = audio_mixer_play_stop_cb;
   audio_driver_mixer_play_stream_internal(i, AUDIO_STREAM_STATE_PLAYING);
}

void audio_driver_mixer_play_menu_sound_looped(unsigned i)
{
   audio_driver_st.mixer_streams[i].stop_cb = audio_mixer_menu_stop_cb;
   audio_driver_mixer_play_stream_internal(i, AUDIO_STREAM_STATE_PLAYING_LOOPED);
}

void audio_driver_mixer_play_menu_sound(unsigned i)
{
   audio_driver_st.mixer_streams[i].stop_cb = audio_mixer_menu_stop_cb;
   audio_driver_mixer_stop_stream(i);
   audio_driver_mixer_play_stream_internal(i, AUDIO_STREAM_STATE_PLAYING);
}

void audio_driver_mixer_play_scroll_sound(bool direction_up)
{
   settings_t *settings          = config_get_ptr();
   bool        audio_enable_menu = settings->bools.audio_enable_menu;
   bool audio_enable_menu_scroll = settings->bools.audio_enable_menu_scroll;
   if (audio_enable_menu && audio_enable_menu_scroll)
      audio_driver_mixer_play_menu_sound(direction_up
            ? AUDIO_MIXER_SYSTEM_SLOT_UP : AUDIO_MIXER_SYSTEM_SLOT_DOWN);
}

void audio_driver_mixer_play_stream_looped(unsigned i)
{
   audio_driver_st.mixer_streams[i].stop_cb = audio_mixer_play_stop_cb;
   audio_driver_mixer_play_stream_internal(i, AUDIO_STREAM_STATE_PLAYING_LOOPED);
}

void audio_driver_mixer_play_stream_sequential(unsigned i)
{
   audio_driver_st.mixer_streams[i].stop_cb = audio_mixer_play_stop_sequential_cb;
   audio_driver_mixer_play_stream_internal(i, AUDIO_STREAM_STATE_PLAYING_SEQUENTIAL);
}

float audio_driver_mixer_get_stream_volume(unsigned i)
{
   if (i >= AUDIO_MIXER_MAX_SYSTEM_STREAMS)
      return 0.0f;

   return audio_driver_st.mixer_streams[i].volume;
}

void audio_driver_mixer_set_stream_volume(unsigned i, float vol)
{
   audio_mixer_voice_t *voice             = NULL;

   if (i >= AUDIO_MIXER_MAX_SYSTEM_STREAMS)
      return;

   audio_driver_st.mixer_streams[i].volume = vol;

   voice                                  =
      audio_driver_st.mixer_streams[i].voice;

   if (voice)
      audio_mixer_voice_set_volume(voice, DB_TO_GAIN(vol));
}

void audio_driver_mixer_stop_stream(unsigned i)
{
   if (i >= AUDIO_MIXER_MAX_SYSTEM_STREAMS)
      return;

   switch (audio_driver_st.mixer_streams[i].state)
   {
      case AUDIO_STREAM_STATE_PLAYING:
      case AUDIO_STREAM_STATE_PLAYING_LOOPED:
      case AUDIO_STREAM_STATE_PLAYING_SEQUENTIAL:
         {
            audio_mixer_voice_t *voice     = audio_driver_st.mixer_streams[i].voice;

            if (voice)
               audio_mixer_stop(voice);
            audio_driver_st.mixer_streams[i].state   = AUDIO_STREAM_STATE_STOPPED;
            audio_driver_st.mixer_streams[i].volume  = 1.0f;
         }
         break;
      case AUDIO_STREAM_STATE_STOPPED:
      case AUDIO_STREAM_STATE_NONE:
         break;
   }
}

void audio_driver_mixer_remove_stream(unsigned i)
{
   if (i >= AUDIO_MIXER_MAX_SYSTEM_STREAMS)
      return;

   switch (audio_driver_st.mixer_streams[i].state)
   {
      case AUDIO_STREAM_STATE_PLAYING:
      case AUDIO_STREAM_STATE_PLAYING_LOOPED:
      case AUDIO_STREAM_STATE_PLAYING_SEQUENTIAL:
         audio_driver_mixer_stop_stream(i);
         /* fall-through */
      case AUDIO_STREAM_STATE_STOPPED:
         {
            audio_mixer_sound_t *handle = audio_driver_st.mixer_streams[i].handle;
            if (handle)
               audio_mixer_destroy(handle);

            if (!string_is_empty(audio_driver_st.mixer_streams[i].name))
               free(audio_driver_st.mixer_streams[i].name);

            audio_driver_st.mixer_streams[i].state   = AUDIO_STREAM_STATE_NONE;
            audio_driver_st.mixer_streams[i].stop_cb = NULL;
            audio_driver_st.mixer_streams[i].volume  = 0.0f;
            audio_driver_st.mixer_streams[i].handle  = NULL;
            audio_driver_st.mixer_streams[i].voice   = NULL;
            audio_driver_st.mixer_streams[i].name    = NULL;
         }
         break;
      case AUDIO_STREAM_STATE_NONE:
         break;
   }

}

bool audio_driver_mixer_toggle_mute(void)
{
   audio_driver_st.mixer_mute_enable  =
      !audio_driver_st.mixer_mute_enable;
   return true;
}
#endif

bool audio_driver_enable_callback(void)
{
   if (!audio_driver_st.callback.callback)
      return false;
   if (audio_driver_st.callback.set_state)
      audio_driver_st.callback.set_state(true);
   return true;
}

bool audio_driver_disable_callback(void)
{
   if (!audio_driver_st.callback.callback)
      return false;

   if (audio_driver_st.callback.set_state)
      audio_driver_st.callback.set_state(false);
   return true;
}

bool audio_driver_callback(void)
{
   bool menu_pause_libretro    = config_get_ptr()->bools.menu_pause_libretro;
   uint32_t runloop_flags      = runloop_get_flags();
   bool runloop_paused         = (runloop_flags & RUNLOOP_FLAG_PAUSED) ? true : false;
#ifdef HAVE_MENU
#ifdef HAVE_NETWORKING
   bool core_paused            = runloop_paused
       || (menu_pause_libretro
       && (menu_state_get_ptr()->flags & MENU_ST_FLAG_ALIVE)
       &&  netplay_driver_ctl(RARCH_NETPLAY_CTL_ALLOW_PAUSE, NULL));
#else
   bool core_paused            = runloop_paused
      || (menu_pause_libretro
      && (menu_state_get_ptr()->flags & MENU_ST_FLAG_ALIVE));
#endif
#else
   bool core_paused            = runloop_paused;
#endif

   if (!audio_driver_st.callback.callback)
      return false;

   if (!core_paused && audio_driver_st.callback.callback)
      audio_driver_st.callback.callback();

   return true;
}

bool audio_driver_has_callback(void)
{
   return audio_driver_st.callback.callback != NULL;
}

static INLINE bool audio_driver_alive(void)
{
   audio_driver_state_t *audio_st = &audio_driver_st;
   if (     audio_st->current_audio
         && audio_st->current_audio->alive
         && audio_st->context_audio_data)
      return audio_st->current_audio->alive(audio_st->context_audio_data);
   return false;
}

bool audio_driver_start(bool is_shutdown)
{
   audio_driver_state_t *audio_st = &audio_driver_st;
   if (
            !audio_st->current_audio
         || !audio_st->current_audio->start
         || !audio_st->context_audio_data)
      goto error;
   if (!audio_st->current_audio->start(
            audio_st->context_audio_data, is_shutdown))
      goto error;

   RARCH_DBG("[Audio] Started audio driver \"%s\" (is_shutdown=%s)\n",
         audio_st->current_audio->ident,
         is_shutdown ? "true" : "false");

   return true;

error:
   RARCH_ERR("%s\n",
         msg_hash_to_str(MSG_FAILED_TO_START_AUDIO_DRIVER));
   audio_driver_st.flags &= ~AUDIO_FLAG_ACTIVE;
   return false;
}

const char *audio_driver_get_ident(void)
{
   audio_driver_state_t *audio_st  = &audio_driver_st;
   if (!audio_st->current_audio)
      return NULL;
   return audio_st->current_audio->ident;
}

bool audio_driver_stop(void)
{
   bool stopped;
   if (     !audio_driver_st.current_audio
         || !audio_driver_st.current_audio->stop
         || !audio_driver_st.context_audio_data
         || !audio_driver_alive()
      )
      return false;
   stopped = audio_driver_st.current_audio->stop(
         audio_driver_st.context_audio_data);

   if (stopped)
      RARCH_DBG("[Audio] Stopped audio driver \"%s\".\n", audio_driver_st.current_audio->ident);

   return stopped;
}

#ifdef HAVE_REWIND
void audio_driver_frame_is_reverse(void)
{
   audio_driver_state_t *audio_st  = &audio_driver_st;
   recording_state_t *recording_st = recording_state_get_ptr();
   uint32_t runloop_flags          = runloop_get_flags();

   /* We just rewound. Flush rewind audio buffer. */
   if (     recording_st->data
         && recording_st->driver
         && recording_st->driver->push_audio)
   {
      struct record_audio_data ffemu_data;

      ffemu_data.data              = audio_st->rewind_buf +
         audio_st->rewind_ptr;
      ffemu_data.frames            = (audio_st->rewind_size -
            audio_st->rewind_ptr) / 2;

      recording_st->driver->push_audio(
            recording_st->data,
            &ffemu_data);
   }

   if (!(
             (runloop_flags & RUNLOOP_FLAG_PAUSED)
         || !(audio_st->flags & AUDIO_FLAG_ACTIVE)
         || !(audio_st->output_samples_buf)))
      if (!(audio_st->flags & AUDIO_FLAG_SUSPENDED))
         audio_driver_flush(audio_st,
               config_get_ptr()->floats.slowmotion_ratio,
               audio_st->rewind_buf  + audio_st->rewind_ptr,
               audio_st->rewind_size - audio_st->rewind_ptr,
               (runloop_flags & RUNLOOP_FLAG_SLOWMOTION) ? true : false,
               (runloop_flags & RUNLOOP_FLAG_FASTMOTION) ? true : false);
}
#endif

void audio_set_float(enum audio_action action, float val)
{
   switch (action)
   {
      case AUDIO_ACTION_VOLUME_GAIN:
         audio_driver_st.volume_gain        = DB_TO_GAIN(val);
         break;
      case AUDIO_ACTION_MIXER_VOLUME_GAIN:
#ifdef HAVE_AUDIOMIXER
         audio_driver_st.mixer_volume_gain  = DB_TO_GAIN(val);
#endif
         break;
      case AUDIO_ACTION_RATE_CONTROL_DELTA:
         audio_driver_st.rate_control_delta = val;
         break;
      case AUDIO_ACTION_NONE:
      default:
         break;
   }
}

float *audio_get_float_ptr(enum audio_action action)
{
   switch (action)
   {
      case AUDIO_ACTION_RATE_CONTROL_DELTA:
         return &audio_driver_st.rate_control_delta;
      case AUDIO_ACTION_NONE:
      default:
         break;
   }

   return NULL;
}

bool *audio_get_bool_ptr(enum audio_action action)
{
   switch (action)
   {
      case AUDIO_ACTION_MIXER_MUTE_ENABLE:
#ifdef HAVE_AUDIOMIXER
         return &audio_driver_st.mixer_mute_enable;
#else
         break;
#endif
      case AUDIO_ACTION_MUTE_ENABLE:
         return &audio_driver_st.mute_enable;
      case AUDIO_ACTION_NONE:
      default:
         break;
   }

   return NULL;
}

bool audio_compute_buffer_statistics(audio_statistics_t *stats)
{
   unsigned i, low_water_size, high_water_size, avg, stddev;
   uint64_t accum                 = 0;
   uint64_t accum_var             = 0;
   unsigned low_water_count       = 0;
   unsigned high_water_count      = 0;
   audio_driver_state_t *audio_st = &audio_driver_st;
   unsigned samples               = MIN(
         (unsigned)audio_st->free_samples_count,
         AUDIO_BUFFER_FREE_SAMPLES_COUNT);

   if (samples < 3)
      return false;

   stats->samples                 = (unsigned)
      audio_st->free_samples_count;

   if (!(audio_st->flags & AUDIO_FLAG_CONTROL))
      return false;

#ifdef WARPUP
   /* uint64 to double not implemented, fair chance
    * signed int64 to double doesn't exist either */
   /* https://forums.libretro.com/t/unsupported-platform-help/13903/ */
   (void)stddev;
#elif defined(_MSC_VER) && _MSC_VER <= 1200
   /* FIXME: error C2520: conversion from unsigned __int64
    * to double not implemented, use signed __int64 */
   (void)stddev;
#else
   for (i = 1; i < samples; i++)
      accum += audio_st->free_samples_buf[i];

   avg = (unsigned)accum / (samples - 1);

   for (i = 1; i < samples; i++)
   {
      int diff     = avg - audio_st->free_samples_buf[i];
      accum_var   += diff * diff;
   }

   stddev                                = (unsigned)
      sqrt((double)accum_var / (samples - 2));

   stats->average_buffer_saturation      = (1.0f - (float)avg
         / audio_st->buffer_size) * 100.0;
   stats->std_deviation_percentage       = ((float)stddev
         / audio_st->buffer_size)  * 100.0;
#endif

   low_water_size  = (unsigned)(audio_st->buffer_size * 3 / 4);
   high_water_size = (unsigned)(audio_st->buffer_size     / 4);

   for (i = 1; i < samples; i++)
   {
      if (audio_st->free_samples_buf[i] >= low_water_size)
         low_water_count++;
      else if (audio_st->free_samples_buf[i] <= high_water_size)
         high_water_count++;
   }

   stats->close_to_underrun      = (100.0f * low_water_count)  / (samples - 1);
   stats->close_to_blocking      = (100.0f * high_water_count) / (samples - 1);

   return true;
}

#ifdef HAVE_MENU
void audio_driver_menu_sample(void)
{
   static int16_t samples_buf[1024]       = {0};
   settings_t *settings                   = config_get_ptr();
   float slowmotion_ratio                 = settings->floats.slowmotion_ratio;
   video_driver_state_t *video_st         = video_state_get_ptr();
   uint32_t runloop_flags                 = runloop_get_flags();
   recording_state_t *recording_st        = recording_state_get_ptr();
   struct retro_system_av_info *av_info   = &video_st->av_info;
   const struct retro_system_timing *info =
      (const struct retro_system_timing*)&av_info->timing;
   unsigned sample_count                  = floor(info->sample_rate / info->fps) * 2;
   audio_driver_state_t *audio_st         = &audio_driver_st;
   bool check_flush                       = !(
            !(audio_st->flags & AUDIO_FLAG_ACTIVE)
         || !audio_st->output_samples_buf);

   if ((audio_st->flags & AUDIO_FLAG_SUSPENDED))
      check_flush                         = false;

   while (sample_count > 1024)
   {
      if (  recording_st->data   &&
            recording_st->driver &&
            recording_st->driver->push_audio)
      {
         struct record_audio_data ffemu_data;

         ffemu_data.data                    = samples_buf;
         ffemu_data.frames                  = 1024 / 2;

         recording_st->driver->push_audio(
               recording_st->data, &ffemu_data);
      }
      if (check_flush)
         audio_driver_flush(audio_st,
               slowmotion_ratio,
               samples_buf,
               1024,
               (runloop_flags & RUNLOOP_FLAG_SLOWMOTION) ? true : false,
               (runloop_flags & RUNLOOP_FLAG_FASTMOTION) ? true : false);
      sample_count -= 1024;
   }

   if (     recording_st->data
         && recording_st->driver
         && recording_st->driver->push_audio)
   {
      struct record_audio_data ffemu_data;

      ffemu_data.data                    = samples_buf;
      ffemu_data.frames                  = sample_count / 2;

      recording_st->driver->push_audio(
            recording_st->data, &ffemu_data);
   }

   if (check_flush)
      audio_driver_flush(audio_st, slowmotion_ratio, samples_buf, sample_count,
            (runloop_flags & RUNLOOP_FLAG_SLOWMOTION) ? true : false,
            (runloop_flags & RUNLOOP_FLAG_FASTMOTION) ? true : false);
}
#endif

#ifdef HAVE_MICROPHONE
microphone_driver_state_t *microphone_state_get_ptr(void)
{
   return &mic_driver_st;
}

#define mic_driver_get_sample_size(microphone) \
   (((microphone)->flags & MICROPHONE_FLAG_USE_FLOAT) ? sizeof(float) : sizeof(int16_t))

static bool mic_driver_open_mic_internal(retro_microphone_t* microphone);
bool microphone_driver_start(void)
{
   microphone_driver_state_t *mic_st = &mic_driver_st;
   retro_microphone_t    *microphone = &mic_st->microphone;

   /* If there's an opened microphone that the core turned on... */
   if (microphone->flags & MICROPHONE_FLAG_ACTIVE)
   {
      /* If this microphone was requested before the driver was ready...*/
      if (microphone->flags & MICROPHONE_FLAG_PENDING)
      {
         retro_assert(microphone->microphone_context == NULL);
         /* The microphone context shouldn't have been created yet */

         /* Now that the driver and driver context are ready, let's initialize the mic */
         if (mic_driver_open_mic_internal(microphone))
         {
            /* open_mic_internal will start the microphone if it's enabled */
            RARCH_DBG("[Microphone] Initialized a previously-pending microphone.\n");
         }
         else
         {
            RARCH_ERR("[Microphone] Failed to initialize a previously pending microphone; microphone will not be used.\n");

            microphone_driver_close_mic(microphone);
            /* Not returning false because a mic failure shouldn't take down the driver;
             * what if the player just unplugged their mic? */
         }
      }
      /* The microphone was already created, so let's just unpause it */
      else
      {
         microphone_driver_set_mic_state(microphone, true);

         RARCH_DBG("[Microphone] Started a microphone that was enabled when the driver was last stopped.\n");
      }
   }

   return true;
}

bool microphone_driver_stop(void)
{
   microphone_driver_state_t *mic_st = &mic_driver_st;
   retro_microphone_t    *microphone = &mic_st->microphone;

   /* If there's an opened microphone that the core
    * turned on and received... */
   if (      (microphone->flags & MICROPHONE_FLAG_ACTIVE)
         &&  (microphone->flags & MICROPHONE_FLAG_ENABLED)
         && !(microphone->flags & MICROPHONE_FLAG_PENDING))
      return mic_st->driver->stop_mic(mic_st->driver_context,
               microphone->microphone_context);
   /* If the mic is pending, then we don't need to do anything. */
   return true;
}

/**
 * config_get_microphone_driver_options:
 *
 * Get an enumerated list of all microphone driver names, separated by '|'.
 *
 * Returns: string listing of all microphone driver names, separated by '|'.
 **/
const char *config_get_microphone_driver_options(void)
{
   return char_list_new_special(STRING_LIST_MICROPHONE_DRIVERS, NULL);
}

bool microphone_driver_find_driver(void *settings_data, const char *prefix,
      bool verbosity_enabled)
{
   settings_t *settings = (settings_t*)settings_data;
   int i                 = (int)driver_find_index(
         "microphone_driver",
         settings->arrays.microphone_driver);

   if (i >= 0)
      mic_driver_st.driver = (const microphone_driver_t *)
            microphone_drivers[i];
   else
   {
      const microphone_driver_t *tmp = NULL;
      if (verbosity_enabled)
      {
         unsigned d;
         RARCH_ERR("Couldn't find any %s named \"%s\".\n", prefix,
                   settings->arrays.microphone_driver);

         RARCH_LOG_OUTPUT("Available %ss are:\n", prefix);
         for (d = 0; microphone_drivers[d]; d++)
         {
            if (microphone_drivers[d])
               RARCH_LOG_OUTPUT("\t%s\n", microphone_drivers[d]->ident);
         }
         RARCH_WARN("Going to default to first %s...\n", prefix);
      }

      tmp = (const microphone_driver_t *)microphone_drivers[0];

      if (!tmp)
         return false;
      mic_driver_st.driver = tmp;
   }

   return true;
}

static void mic_driver_microphone_handle_init(retro_microphone_t *microphone,
      const retro_microphone_params_t *params)
{
   if (microphone)
   {
      const settings_t *settings        = config_get_ptr();
      unsigned microphone_sample_rate   = settings->uints.microphone_sample_rate;
      microphone->microphone_context    = NULL;
      microphone->flags                 = MICROPHONE_FLAG_ACTIVE;
      microphone->sample_buffer         = NULL;
      microphone->sample_buffer_length  = 0;

      microphone->requested_params.rate = params ? params->rate : microphone_sample_rate;
      microphone->actual_params.rate    = 0;
      /* We don't set the actual parameters until we actually open the mic.
       * (Remember, the core can request one before the driver is ready.) */
      microphone->effective_params.rate = params ? params->rate : microphone_sample_rate;
      /* We set the effective parameters because
       * the frontend has to do what it can
       * to give the core what it asks for. */
   }
}

static void mic_driver_microphone_handle_free(retro_microphone_t *microphone, bool is_reset)
{
   microphone_driver_state_t *mic_st     = &mic_driver_st;
   const microphone_driver_t *mic_driver = mic_st->driver;
   void *driver_context                  = mic_st->driver_context;

   if (!microphone)
      return;

   if (!driver_context)
      RARCH_WARN("[Microphone] Attempted to free a microphone without an active driver context.\n");

   if (microphone->microphone_context)
   {
      mic_driver->close_mic(driver_context, microphone->microphone_context);
      microphone->microphone_context = NULL;
   }

   if (microphone->sample_buffer)
   {
      memalign_free(microphone->sample_buffer);
      microphone->sample_buffer = NULL;
      microphone->sample_buffer_length = 0;
   }

   if (microphone->outgoing_samples)
   {
      fifo_free(microphone->outgoing_samples);
      microphone->outgoing_samples = NULL;
   }

   if (microphone->resampler && microphone->resampler->free && microphone->resampler_data)
      microphone->resampler->free(microphone->resampler_data);

   microphone->resampler      = NULL;
   microphone->resampler_data = NULL;

   /* If the mic driver is being reset and the microphone was already valid... */
   if ((microphone->flags & MICROPHONE_FLAG_ACTIVE) && is_reset)
      microphone->flags |= MICROPHONE_FLAG_PENDING;
      /* ...then we need to keep the handle itself valid
       * so it can be reinitialized.
       * Otherwise the core will lose mic input. */
   else
      memset(microphone, 0, sizeof(*microphone));
   /* Do NOT free the microphone handle itself! It's allocated statically! */
}

bool microphone_driver_init_internal(void *settings_data)
{
   settings_t *settings   = (settings_t*)settings_data;
   microphone_driver_state_t *mic_st = &mic_driver_st;
   bool verbosity_enabled = verbosity_is_enabled();
   size_t max_frames   = AUDIO_CHUNK_SIZE_NONBLOCKING * AUDIO_MAX_RATIO;

   /* If the user has mic support turned off... */
   if (!settings->bools.microphone_enable)
   {
      mic_st->flags &= ~MICROPHONE_DRIVER_FLAG_ACTIVE;
      return false;
   }

   convert_s16_to_float_init_simd();
   convert_float_to_s16_init_simd();

   if (!(microphone_driver_find_driver(settings,
               "microphone driver", verbosity_enabled)))
   {
      RARCH_ERR("[Microphone] Failed to initialize microphone driver. Will continue without mic input.\n");
      goto error;
   }

   mic_st->input_frames_length = max_frames * sizeof(float);
   mic_st->input_frames = (float*)memalign_alloc(64, mic_st->input_frames_length);
   if (!mic_st->input_frames)
      goto error;

   mic_st->converted_input_frames_length = max_frames * sizeof(float);
   mic_st->converted_input_frames = (float*)memalign_alloc(64, mic_st->converted_input_frames_length);
   if (!mic_st->converted_input_frames)
      goto error;

   /* Need room for dual-mono frames */
   mic_st->dual_mono_frames_length = max_frames * sizeof(float) * 2;
   mic_st->dual_mono_frames = (float*)memalign_alloc(64, mic_st->dual_mono_frames_length);
   if (!mic_st->dual_mono_frames)
      goto error;

   mic_st->resampled_frames_length = max_frames * sizeof(float) * 2;
   mic_st->resampled_frames = (float*) memalign_alloc(64, mic_st->resampled_frames_length);
   if (!mic_st->resampled_frames)
      goto error;

   mic_st->resampled_mono_frames_length = max_frames * sizeof(float);
   mic_st->resampled_mono_frames = (float*) memalign_alloc(64, mic_st->resampled_mono_frames_length);
   if (!mic_st->resampled_mono_frames)
      goto error;

   mic_st->final_frames_length = max_frames * sizeof(int16_t);
   mic_st->final_frames = (int16_t*) memalign_alloc(64, mic_st->final_frames_length);
   if (!mic_st->final_frames)
      goto error;

   if (!mic_st->driver || !mic_st->driver->init)
      goto error;

   if (!(mic_st->driver_context = mic_st->driver->init()))
      goto error;

   if (!string_is_empty(settings->arrays.microphone_resampler))
      strlcpy(mic_st->resampler_ident,
            settings->arrays.microphone_resampler,
            sizeof(mic_st->resampler_ident));
   else
      mic_st->resampler_ident[0] = '\0';

   mic_st->resampler_quality     = (enum resampler_quality)settings->uints.microphone_resampler_quality;

   RARCH_LOG("[Microphone] Initialized microphone driver.\n");

   /* The mic driver was initialized, now we're ready to open mics */
   mic_st->flags |= MICROPHONE_DRIVER_FLAG_ACTIVE;

   if (!microphone_driver_start())
      goto error;

   return true;

error:
   RARCH_ERR("[Microphone] Failed to start microphone driver. Will continue without audio input.\n");
   mic_st->flags &= ~MICROPHONE_DRIVER_FLAG_ACTIVE;
   return microphone_driver_deinit(false);
}

/**
 *
 * @param microphone Handle to the microphone to init with a context
 */
static bool mic_driver_open_mic_internal(retro_microphone_t* microphone)
{
   microphone_driver_state_t *mic_st     = &mic_driver_st;
   settings_t *settings                  = config_get_ptr();
   const microphone_driver_t *mic_driver = mic_st->driver;
   void *driver_context                  = mic_st->driver_context;
   unsigned runloop_audio_latency        = runloop_state_get_ptr()->audio_latency;
   unsigned setting_audio_latency        = settings->uints.microphone_latency;
   unsigned audio_latency                = MAX(runloop_audio_latency, setting_audio_latency);
   size_t max_samples                    = AUDIO_CHUNK_SIZE_NONBLOCKING * 1 * AUDIO_MAX_RATIO;

   if (!microphone || !mic_driver || !(mic_st->flags & MICROPHONE_DRIVER_FLAG_ACTIVE))
      return false;

   microphone->sample_buffer_length = max_samples * sizeof(int16_t);
   microphone->sample_buffer        =
         (int16_t*)memalign_alloc(64, microphone->sample_buffer_length);

   if (!microphone->sample_buffer)
      goto error;

   microphone->outgoing_samples = fifo_new(max_samples * sizeof(int16_t));
   if (!microphone->outgoing_samples)
      goto error;

   microphone->microphone_context = mic_driver->open_mic(driver_context,
      *settings->arrays.microphone_device ? settings->arrays.microphone_device : NULL,
      microphone->requested_params.rate,
      audio_latency,
      &microphone->actual_params.rate);

   if (!microphone->microphone_context)
      goto error;

   microphone_driver_set_mic_state(microphone, microphone->flags & MICROPHONE_FLAG_ENABLED);

   RARCH_LOG("[Microphone] Requested microphone sample rate of %uHz, got %uHz.\n",
             microphone->requested_params.rate,
             microphone->actual_params.rate
   );

   if (     mic_driver->mic_use_float
         && mic_driver->mic_use_float(mic_st->driver_context, microphone->microphone_context))
      microphone->flags      |= MICROPHONE_FLAG_USE_FLOAT;

   microphone->orig_ratio = (double)microphone->effective_params.rate / microphone->actual_params.rate;

   if (!retro_resampler_realloc(
         &microphone->resampler_data,
         &microphone->resampler,
         mic_st->resampler_ident,
         mic_st->resampler_quality,
         microphone->orig_ratio))
   {
      RARCH_ERR("[Microphone] Failed to initialize resampler \"%s\".\n", mic_st->resampler_ident);
      goto error;
   }

   microphone->flags &= ~MICROPHONE_FLAG_PENDING;
   RARCH_LOG("[Microphone] Initialized microphone.\n");
   return true;
error:
   mic_driver_microphone_handle_free(microphone, false);
   RARCH_ERR("[Microphone] Driver attempted to initialize the microphone but failed.\n");
   return false;
}

static void microphone_driver_close_mic_internal(retro_microphone_t *microphone, bool is_reset)
{
   microphone_driver_state_t *mic_st     = &mic_driver_st;
   const microphone_driver_t *mic_driver = mic_st->driver;
   void *driver_context                  = mic_st->driver_context;

   if (     microphone
         && driver_context
         && mic_driver
         && mic_driver->close_mic)
      mic_driver_microphone_handle_free(microphone, is_reset);
}

void microphone_driver_close_mic(retro_microphone_t *microphone)
{
   mic_driver_microphone_handle_free(microphone, false);
}

bool microphone_driver_set_mic_state(retro_microphone_t *microphone, bool state)
{
   microphone_driver_state_t *mic_st     = &mic_driver_st;
   const microphone_driver_t *mic_driver = mic_st->driver;
   void *driver_context                  = mic_st->driver_context;

   if (!microphone
         || !(microphone->flags & MICROPHONE_FLAG_ACTIVE)
         || !mic_driver
         || !mic_driver->start_mic
         || !mic_driver->stop_mic)
      return false;
   /* If the provided microphone was null or invalid, or the driver is incomplete, stop. */

   /* If the driver is initialized... */
   if (driver_context && microphone->microphone_context)
   {
      bool success;

      /* If we want to enable this mic... */
      if (state)
      {
         success = mic_driver->start_mic(driver_context, microphone->microphone_context);
         /* Enable the mic. (Enabling an active mic is a successful noop.) */

         if (success)
         {
            microphone->flags |= MICROPHONE_FLAG_ENABLED;
            RARCH_LOG("[Microphone] Enabled microphone.\n");
         }
         else
         {
            RARCH_ERR("[Microphone] Failed to enable microphone.\n");
         }
      }
      else
      { /* If we want to pause this mic... */
         success = mic_driver->stop_mic(driver_context, microphone->microphone_context);

         /* Disable the mic. (If the mic is already stopped, disabling it should still be successful.) */
         if (success)
         {
            microphone->flags &= ~MICROPHONE_FLAG_ENABLED;
            RARCH_LOG("[Microphone] Disabled microphone.\n");
         }
         else
         {
            RARCH_ERR("[Microphone] Failed to disable microphone.\n");
         }
      }

      return success;
   }
   else
   { /* The driver's not ready yet, so we'll make a note
      * of what the mic's state should be */
      if (state)
         microphone->flags |= MICROPHONE_FLAG_ENABLED;
      else
         microphone->flags &= ~MICROPHONE_FLAG_ENABLED;

      RARCH_DBG("[Microphone] Set pending state to %s.\n",
                state ? "enabled" : "disabled");
      return true;
      /* This isn't an error */
   }
}

bool microphone_driver_get_mic_state(const retro_microphone_t *microphone)
{
   if (!microphone || !(microphone->flags & MICROPHONE_FLAG_ACTIVE))
      return false;
   return microphone->flags & MICROPHONE_FLAG_ENABLED;
}

/**
 * Pull queued microphone samples from the driver
 * and copy them to the provided buffer(s).
 *
 * Note that microphone samples are provided in mono,
 * so a "sample" and a "frame" are equivalent here.
 *
 * @param mic_st The overall state of the audio driver.
 * @param[out] frames The buffer in which the core will receive microphone samples.
 * @param num_frames The size of \c frames, in samples.
 */
static size_t microphone_driver_flush(
      microphone_driver_state_t *mic_st,
      retro_microphone_t *microphone,
      size_t num_frames)
{
   struct resampler_data resampler_data;
   unsigned sample_size = mic_driver_get_sample_size(microphone);
   size_t bytes_to_read = MIN(mic_st->input_frames_length, num_frames * sample_size);
   size_t frames_to_enqueue;
   int bytes_read       = mic_st->driver->read(
         mic_st->driver_context,
         microphone->microphone_context,
         mic_st->input_frames,
         bytes_to_read);
   /* First, get the most recent mic data */

   if (bytes_read <= 0)
      return 0;

   resampler_data.input_frames = bytes_read / sample_size;
   /* This is in frames, not samples or bytes;
    * we're up-channeling the audio to stereo,
    * so this number still applies. */

   resampler_data.output_frames = 0;
   /* The resampler sets the value of output_frames */

   resampler_data.data_in  = mic_st->dual_mono_frames;
   resampler_data.data_out = mic_st->resampled_frames;
   /* The buffers that will be used for the resampler's input and output */

   resampler_data.ratio    = (double)microphone->effective_params.rate / (double)microphone->actual_params.rate;

   if (fabs(resampler_data.ratio - 1.0f) < 1e-8)
   { /* If the mic's native rate is practically the same as the requested one... */

      /* ...then skip the resampler, since it'll produce (more or less) identical results. */
      frames_to_enqueue = MIN(FIFO_WRITE_AVAIL(microphone->outgoing_samples), resampler_data.input_frames);

      /* If this mic provides floating-point samples... */
      if (microphone->flags & MICROPHONE_FLAG_USE_FLOAT)
      {
         convert_float_to_s16(mic_st->final_frames, (const float*)mic_st->input_frames, resampler_data.input_frames);
         fifo_write(microphone->outgoing_samples, mic_st->final_frames, frames_to_enqueue * sizeof(int16_t));
      }
      else
         fifo_write(microphone->outgoing_samples, mic_st->input_frames, frames_to_enqueue * sizeof(int16_t));

      return resampler_data.input_frames;
   }
   /* Couldn't take the fast path, so let's resample the mic input */

   /* First we need to format the input for the resampler. */
   /* If this mic provides floating-point samples... */
   if (microphone->flags & MICROPHONE_FLAG_USE_FLOAT)
      /* Samples are already in floating-point, so we just need to up-channel them. */
      convert_to_dual_mono_float(mic_st->dual_mono_frames,
            (const float*)mic_st->input_frames, resampler_data.input_frames);
   else
   {
      /* Samples are 16-bit, so we need to convert them first. */
      convert_s16_to_float(mic_st->converted_input_frames, (const int16_t*)mic_st->input_frames, resampler_data.input_frames, 1.0f);
      convert_to_dual_mono_float(mic_st->dual_mono_frames, mic_st->converted_input_frames, resampler_data.input_frames);
   }

   /* Now we resample the mic data. */
   microphone->resampler->process(microphone->resampler_data, &resampler_data);

   /* Next, we convert the resampled data back to mono... */
   convert_to_mono_float_left(mic_st->resampled_mono_frames, mic_st->resampled_frames, resampler_data.output_frames);
   /* Why the left channel? No particular reason.
    * Left and right channels are the same in this case anyway. */

   /* Finally, we convert the audio back to 16-bit ints, as the mic interface requires. */
   convert_float_to_s16(mic_st->final_frames, mic_st->resampled_mono_frames, resampler_data.output_frames);

   frames_to_enqueue = MIN(FIFO_WRITE_AVAIL(microphone->outgoing_samples), resampler_data.output_frames);
   fifo_write(microphone->outgoing_samples, mic_st->final_frames, frames_to_enqueue * sizeof(int16_t));
   return resampler_data.output_frames;
}

int microphone_driver_read(retro_microphone_t *microphone, int16_t* frames, size_t num_frames)
{
   uint32_t runloop_flags            = runloop_get_flags();
   size_t frames_remaining           = num_frames;
   microphone_driver_state_t *mic_st = &mic_driver_st;
   const microphone_driver_t *driver = mic_st->driver;
   bool core_paused                  = (runloop_flags & RUNLOOP_FLAG_PAUSED)           ? true : false;
   bool is_fastforward               = (runloop_flags & RUNLOOP_FLAG_FASTMOTION)       ? true : false;
   bool is_slowmo                    = (runloop_flags & RUNLOOP_FLAG_SLOWMOTION)       ? true : false;
   bool is_rewind                    = state_manager_frame_is_reversed();
   bool driver_active                = (mic_st->flags & MICROPHONE_DRIVER_FLAG_ACTIVE) ? true : false;

   /* If the provided arguments aren't valid... */
   if (!frames || !microphone)
      return -1;

   /* If the microphone or driver aren't active... */
   if (!driver_active || !(microphone->flags & MICROPHONE_FLAG_ACTIVE))
      return -1;

   /* If the driver is invalid or doesn't have the functions it needs... */
   if (!driver || !driver->read || !driver->mic_alive)
      return -1;

   /* If the core didn't actually ask for any frames... */
   if (num_frames == 0)
      return 0;

   if (   (microphone->flags & MICROPHONE_FLAG_PENDING)
      ||  (microphone->flags & MICROPHONE_FLAG_SUSPENDED)
      || !(microphone->flags & MICROPHONE_FLAG_ENABLED)
      || is_fastforward
      || is_slowmo
      || is_rewind
      )
   { /* If the microphone is pending, suspended, or disabled...
        ...or if the core is in fast-forward, slow-mo, or rewind...*/
      memset(frames, 0, num_frames * sizeof(*frames));
      return (int)num_frames;
      /* ...then copy silence to the provided buffer. Not an error if the mic is pending,
       * because the user might have requested a microphone
       * before the driver could provide it. */
   }

   /* Why mute the mic when the core isn't running at standard speed?
    * Because I couldn't think of anything useful for the mic to do.
    * If you can, send a PR! */

   /* If the driver or microphone's state haven't been allocated... */
   if (!mic_st->driver_context || !microphone->microphone_context)
      return -1;

   /* If the mic isn't active like it should be at this point... */
   if (!driver->mic_alive(mic_st->driver_context, microphone->microphone_context))
   {
      RARCH_ERR("[Microphone] Mic frontend has the mic enabled, but the backend has it disabled.\n");
      return -1;
   }

   /* If the core asked for more frames than we can fit... */
   if (num_frames > microphone->outgoing_samples->size)
      return -1;

   retro_assert(mic_st->input_frames != NULL);

   while (FIFO_READ_AVAIL(microphone->outgoing_samples) < num_frames * sizeof(int16_t))
   { /* Until we can give the core the frames it asked for... */
      size_t frames_to_read = MIN(AUDIO_CHUNK_SIZE_NONBLOCKING, frames_remaining);
      size_t frames_read    = 0;

      /* If the game is running and the mic driver is active... */
      if (!core_paused)
         frames_read = microphone_driver_flush(mic_st, microphone, frames_to_read);

      /* Otherwise, advance the counters. We're not gonna get new data,
       * but we still need to finish this loop */
      frames_remaining -= frames_read;
   } /* If the queue already has enough samples to give, the loop will be skipped */

   fifo_read(microphone->outgoing_samples, frames, num_frames * sizeof(int16_t));
   return (int)num_frames;
}

bool microphone_driver_get_effective_params(const retro_microphone_t *microphone, retro_microphone_params_t *params)
{
   /* If the arguments are null... */
   if (!microphone || !params)
      return false;
   /* If this isn't an opened microphone... */
   if (!(microphone->flags & MICROPHONE_FLAG_ACTIVE))
      return false;
   *params = microphone->effective_params;
   return true;
}

/* NOTE: The core may request a microphone before the driver is ready.
 * A pending handle will be provided in that case, and the frontend will
 * initialize the microphone when the time is right;
 * do not call this function twice on the same mic. */
retro_microphone_t *microphone_driver_open_mic(const retro_microphone_params_t *params)
{
   microphone_driver_state_t *mic_st     = &mic_driver_st;
   const settings_t *settings            = config_get_ptr();
   const microphone_driver_t *mic_driver = mic_st->driver;
   void *driver_context                  = mic_st->driver_context;

   if (!settings)
      return NULL;

   /* Not checking mic_st->flags because they might not be set yet;
    * don't forget, the core can ask for a mic
    * before the audio driver is ready to create one. */
   if (!settings->bools.microphone_enable)
   {
      RARCH_DBG("[Microphone] Refused to open microphone because it's disabled in the settings.\n");
      return NULL;
   }

   if (mic_driver == &microphone_null)
   {
      RARCH_WARN("[Microphone] Cannot open microphone, null driver is configured.\n");
      return NULL;
   }

   if (        !mic_driver
            && (string_is_equal(settings->arrays.microphone_driver, "null")
            || string_is_empty(settings->arrays.microphone_driver)))
   { /* If the mic driver hasn't been initialized, but it's not going to be... */
      RARCH_ERR("[Microphone] Cannot open microphone as the driver won't be initialized.\n");
      return NULL;
   }

   /* If the core has requested a second microphone... */
   if (mic_st->microphone.flags & MICROPHONE_FLAG_ACTIVE)
   {
      RARCH_ERR("[Microphone] Failed to open a second microphone, frontend only supports one at a time right now.\n");
      if (mic_st->microphone.flags & MICROPHONE_FLAG_PENDING)
         /* If that mic is pending... */
         RARCH_ERR("[Microphone] A microphone is pending initialization.\n");
      else
         /* That mic is initialized */
         RARCH_ERR("[Microphone] An initialized microphone exists.\n");

      return NULL;
   }

   /* Cores might ask for a microphone before the audio driver is ready to provide them;
    * if that happens, we have to initialize the microphones later.
    * But the user still wants a handle, so we'll give them one.
    */
   mic_driver_microphone_handle_init(&mic_st->microphone, params);

   /* If driver_context is NULL, the handle won't have
    * a valid microphone context (but we'll create one later) */
   if (driver_context)
   {
      /* If the microphone driver is ready to open a microphone... */
      if (mic_driver_open_mic_internal(&mic_st->microphone)) /* If the microphone was successfully initialized... */
         RARCH_LOG("[Microphone] Opened the requested microphone successfully.\n");
      else
         goto error;
   }
   else
   { /* If the driver isn't ready to create a microphone... */
      mic_st->microphone.flags |= MICROPHONE_FLAG_PENDING;
      RARCH_LOG("[Microphone] Microphone requested before driver context was ready; deferring initialization.\n");
   }

   return &mic_st->microphone;
error:
   mic_driver_microphone_handle_free(&mic_st->microphone, false);
   /* This function cleans up any resources and unsets all flags */

   return NULL;
}

static bool microphone_driver_free_devices_list(void)
{
   microphone_driver_state_t *mic_st = &mic_driver_st;
   if (
            !mic_st->driver
         || !mic_st->driver->device_list_free
         || !mic_st->driver_context
         || !mic_st->devices_list)
      return false;

   mic_st->driver->device_list_free(mic_st->driver_context, mic_st->devices_list);
   mic_st->devices_list = NULL;
   return true;
}

bool microphone_driver_deinit(bool is_reset)
{
   microphone_driver_state_t *mic_st = &mic_driver_st;
   const microphone_driver_t *driver = mic_st->driver;

   microphone_driver_free_devices_list();
   microphone_driver_close_mic_internal(&mic_st->microphone, is_reset);

   if (driver && driver->free)
   {
      if (mic_st->driver_context)
         driver->free(mic_st->driver_context);

      mic_st->driver_context = NULL;
   }

   if (mic_st->input_frames)
      memalign_free(mic_st->input_frames);
   mic_st->input_frames        = NULL;
   mic_st->input_frames_length = 0;

   if (mic_st->converted_input_frames)
      memalign_free(mic_st->converted_input_frames);
   mic_st->converted_input_frames        = NULL;
   mic_st->converted_input_frames_length = 0;

   if (mic_st->dual_mono_frames)
      memalign_free(mic_st->dual_mono_frames);
   mic_st->dual_mono_frames        = NULL;
   mic_st->dual_mono_frames_length = 0;

   if (mic_st->resampled_frames)
      memalign_free(mic_st->resampled_frames);
   mic_st->resampled_frames        = NULL;
   mic_st->resampled_frames_length = 0;

   if (mic_st->resampled_mono_frames)
      memalign_free(mic_st->resampled_mono_frames);
   mic_st->resampled_mono_frames        = NULL;
   mic_st->resampled_mono_frames_length = 0;

   if (mic_st->final_frames)
      memalign_free(mic_st->final_frames);
   mic_st->final_frames        = NULL;
   mic_st->final_frames_length = 0;

   mic_st->resampler_quality  = RESAMPLER_QUALITY_DONTCARE;
   mic_st->flags             &= ~MICROPHONE_DRIVER_FLAG_ACTIVE;
   memset(mic_st->resampler_ident, '\0', sizeof(mic_st->resampler_ident));

   return true;
}

bool microphone_driver_get_devices_list(void **data)
{
   struct string_list**ptr     = (struct string_list**)data;
   if (!ptr)
      return false;
   *ptr = mic_driver_st.devices_list;
   return true;
}
#endif
