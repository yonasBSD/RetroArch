/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2014-2018 - Ali Bouhlel
 *
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _D3D11_DEFINES_H_
#define _D3D11_DEFINES_H_

#include <retro_inline.h>

#include "dxgi_common.h"
#ifdef CINTERFACE
#define D3D11_NO_HELPERS
#endif
#include <d3d11.h>

#include <boolean.h>
#include <libretro_d3d.h>

#include "../drivers_shader/slang_process.h"

#define D3D11_MAX_GPU_COUNT 16

enum d3d11_state_flags
{
   D3D11_ST_FLAG_VSYNC               = (1 << 0),
   D3D11_ST_FLAG_WAITABLE_SWAPCHAINS = (1 << 1),
   D3D11_ST_FLAG_RESIZE_CHAIN        = (1 << 2),
   D3D11_ST_FLAG_KEEP_ASPECT         = (1 << 3),
   D3D11_ST_FLAG_RESIZE_VIEWPORT     = (1 << 4),
   D3D11_ST_FLAG_RESIZE_RTS          = (1 << 5), /* RT = Render Target */
   D3D11_ST_FLAG_INIT_HISTORY        = (1 << 6),
   D3D11_ST_FLAG_HAS_FLIP_MODEL      = (1 << 7),
   D3D11_ST_FLAG_HAS_ALLOW_TEARING   = (1 << 8),
   D3D11_ST_FLAG_HW_IFACE_ENABLE     = (1 << 9),
   D3D11_ST_FLAG_HDR_SUPPORT         = (1 << 10),
   D3D11_ST_FLAG_HDR_ENABLE          = (1 << 11),
   D3D11_ST_FLAG_SPRITES_ENABLE      = (1 << 12),
   D3D11_ST_FLAG_OVERLAYS_ENABLE     = (1 << 13),
   D3D11_ST_FLAG_OVERLAYS_FULLSCREEN = (1 << 14),
   D3D11_ST_FLAG_MENU_ENABLE         = (1 << 15),
   D3D11_ST_FLAG_MENU_FULLSCREEN     = (1 << 16),
   D3D11_ST_FLAG_FRAME_DUPE_LOCK     = (1 << 17)
};

enum d3d11_feature_level_hint
{
   D3D11_FEATURE_LEVEL_HINT_DONTCARE,
   D3D11_FEATURE_LEVEL_HINT_1_0_CORE,
   D3D11_FEATURE_LEVEL_HINT_9_1,
   D3D11_FEATURE_LEVEL_HINT_9_2,
   D3D11_FEATURE_LEVEL_HINT_9_3,
   D3D11_FEATURE_LEVEL_HINT_10_0,
   D3D11_FEATURE_LEVEL_HINT_10_1,
   D3D11_FEATURE_LEVEL_HINT_11_0,
   D3D11_FEATURE_LEVEL_HINT_11_1,
   D3D11_FEATURE_LEVEL_HINT_12_0,
   D3D11_FEATURE_LEVEL_HINT_12_1,
   D3D11_FEATURE_LEVEL_HINT_12_2
};

typedef const ID3D11ShaderResourceView* D3D11ShaderResourceViewRef;
typedef const ID3D11SamplerState*       D3D11SamplerStateRef;
typedef const ID3D11BlendState*         D3D11BlendStateRef;

typedef ID3D11InputLayout*              D3D11InputLayout;
typedef ID3D11RasterizerState*          D3D11RasterizerState;
typedef ID3D11DepthStencilState*        D3D11DepthStencilState;
typedef ID3D11BlendState*               D3D11BlendState;
typedef ID3D11PixelShader*              D3D11PixelShader;
typedef ID3D11SamplerState*             D3D11SamplerState;
typedef ID3D11VertexShader*             D3D11VertexShader;
typedef ID3D11DomainShader*             D3D11DomainShader;
typedef ID3D11HullShader*               D3D11HullShader;
typedef ID3D11ComputeShader*            D3D11ComputeShader;
typedef ID3D11GeometryShader*           D3D11GeometryShader;

/* auto-generated */

typedef ID3D11Resource*                 D3D11Resource;
typedef ID3D11Buffer*                   D3D11Buffer;
typedef ID3D11Texture1D*                D3D11Texture1D;
typedef ID3D11Texture2D*                D3D11Texture2D;
typedef ID3D11Texture3D*                D3D11Texture3D;
typedef ID3D11View*                     D3D11View;
typedef ID3D11ShaderResourceView*       D3D11ShaderResourceView;
typedef ID3D11RenderTargetView*         D3D11RenderTargetView;
typedef ID3D11DepthStencilView*         D3D11DepthStencilView;
typedef ID3D11UnorderedAccessView*      D3D11UnorderedAccessView;
typedef ID3D11Asynchronous*             D3D11Asynchronous;
typedef ID3D11Query*                    D3D11Query;
typedef ID3D11Predicate*                D3D11Predicate;
typedef ID3D11Counter*                  D3D11Counter;
typedef ID3D11ClassInstance*            D3D11ClassInstance;
typedef ID3D11ClassLinkage*             D3D11ClassLinkage;
typedef ID3D11CommandList*              D3D11CommandList;
typedef ID3D11DeviceContext*            D3D11DeviceContext;
typedef ID3D11VideoDecoder*             D3D11VideoDecoder;
typedef ID3D11VideoProcessorEnumerator* D3D11VideoProcessorEnumerator;
typedef ID3D11VideoProcessor*           D3D11VideoProcessor;
typedef ID3D11AuthenticatedChannel*     D3D11AuthenticatedChannel;
typedef ID3D11CryptoSession*            D3D11CryptoSession;
typedef ID3D11VideoDecoderOutputView*   D3D11VideoDecoderOutputView;
typedef ID3D11VideoProcessorInputView*  D3D11VideoProcessorInputView;
typedef ID3D11VideoProcessorOutputView* D3D11VideoProcessorOutputView;
typedef ID3D11VideoContext*             D3D11VideoContext;
typedef ID3D11VideoDevice*              D3D11VideoDevice;
typedef ID3D11Device*                   D3D11Device;
#ifdef DEBUG
typedef ID3D11Debug*                    D3D11Debug;
#endif
typedef ID3D11SwitchToRef*              D3D11SwitchToRef;
typedef ID3D11TracingDevice*            D3D11TracingDevice;
typedef ID3D11InfoQueue*                D3D11InfoQueue;

#ifndef ALIGN
#ifdef _MSC_VER
#define ALIGN(x) __declspec(align(x))
#else
#define ALIGN(x) __attribute__((aligned(x)))
#endif
#endif

#endif
