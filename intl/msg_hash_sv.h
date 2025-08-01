#if defined(_MSC_VER) && !defined(_XBOX) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
#if (_MSC_VER >= 1700)
/* https://support.microsoft.com/en-us/kb/980263 */
#pragma execution_character_set("utf-8")
#endif
#pragma warning(disable:4566)
#endif

/* Top-Level Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MAIN_MENU,
   "Huvudmeny"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_TAB,
   "Inställningar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES_TAB,
   "Favoriter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HISTORY_TAB,
   "Historik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_IMAGES_TAB,
   "Bilder"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MUSIC_TAB,
   "Musik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_TAB,
   "Videor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_TAB,
   "Utforska"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENTLESS_CORES_TAB,
   "Innehållslösa kärnor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TAB,
   "Importera innehåll"
   )

/* Main Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SETTINGS,
   "Snabbmeny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SETTINGS,
   "Snabbåtkomst till alla relevanta spelinställningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_LIST,
   "Läs in kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_LIST,
   "Välj vilken kärna som ska användas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_LIST_UNLOAD,
   "Läs ur kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_LIST_UNLOAD,
   "Frigör inläst kärna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_CORE_LIST,
   "Bläddra efter en libretro-kärnimplementation. Var webbläsaren startar beror på sökvägen till dina kärnor. Om den är tom, börjar den i rotmappen.\nOm kärnmappen är en katalog, kommer menyn att använda den som översta mapp. Om sökvägen till kärnmappen är en fullständig sökväg, börjar den i mappen där filen finns."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_LIST,
   "Läs in innehåll"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_CONTENT_LIST,
   "Välj vilket innehåll som ska startas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_LOAD_CONTENT_LIST,
   "Bläddra efter innehåll. För att ladda innehåll behöver du en 'Kärna' att använda och en innehållsfil.\nFör att styra var filhanteraren börjar söka efter innehåll, ställ in 'Filhanterarkatalog'. Om den inte är inställd kommer den att starta i root.\nFilhanteraren kommer att filtrera ut tillägg för den senaste Kärnan i 'Ladda Kärna' och använda den Kärnan när innehåll laddas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_DISC,
   "Läs in skiva"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_DISC,
   "Läs in en fysisk medieskiva. Välj först kärnan (Läs in kärna) att använda med skivan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DUMP_DISC,
   "Dumpa skiva"
   )
MSG_HASH( /* FIXME Is a specific image format used? Is it determined automatically? User choice? */
   MENU_ENUM_SUBLABEL_DUMP_DISC,
   "Dumpar den fysiska medieskivan till intern lagring. Den kommer att sparas som en skivavbildningsfil."
   )
#ifdef HAVE_LAKKA
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EJECT_DISC,
   "Mata ut skiva"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_EJECT_DISC,
   "Matar ut skivan från fysisk CD/DVD-enhet."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLISTS_TAB,
   "Spellistor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLISTS_TAB,
   "Visar spellistor med skannat innehåll som matchar databasen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_CONTENT_LIST,
   "Importera innehåll"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_CONTENT_LIST,
   "Skapa eller uppdatera spellistor genom att skanna Innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_WIMP,
   "Visa skrivbordsmeny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_WIMP,
   "Öppna traditionell skrivbordsmeny."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_DISABLE_KIOSK_MODE,
   "Inaktivera kioskläge (omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_DISABLE_KIOSK_MODE,
   "Visar även dolda konfigurationsrelaterade inställningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONLINE_UPDATER,
   "Online-uppdaterare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONLINE_UPDATER,
   "Hämtar ner tillägg, komponenter och innehåll för RetroArch."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY,
   "Gå med i eller bli värd för Netplay-session."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS,
   "Inställningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS,
   "Konfigurera programmet."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INFORMATION_LIST_LIST,
   "Visar lista med systeminformation."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATIONS_LIST,
   "Konfigurationsfil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIGURATIONS_LIST,
   "Hantera och skapa konfigurationsfiler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LIST,
   "Hjälp"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HELP_LIST,
   "Läs mer om hur programmet fungerar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESTART_RETROARCH,
   "Starta om"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESTART_RETROARCH,
   "Starta om RetroArch-programmet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_RETROARCH,
   "Avsluta"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_RETROARCH,
   "Avsluta RetroArch-programmet. Konfiguration sparas vid avslut är aktiverat."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_RETROARCH_NOSAVE,
   "Avsluta RetroArch-programmet. Konfiguration sparas vid avslut är inaktiverat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_QUIT_RETROARCH,
   "Avsluta RetroArch. Döda programmet på ett hårt sätt (SIGKILL, etc.) kommer att terminera RetroArch utan att spara konfigurationen i något fall. På Unix-liknande system tillåter SIGINT/SIGTERM en ren deinitiering som inkluderar att konfigurationen sparas om aktiverad."
   )

/* Main Menu > Load Core */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE,
   "Hämta ner en kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_CORE,
   "Hämtar ner och installerar kärna från online-uppdateraren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_LIST,
   "Installera/Återställ kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SIDELOAD_CORE_LIST,
   "Installera eller återställ en kärna från 'Hämtningar'-katalogen."
   )
MSG_HASH( /* FIXME Maybe add a description? */
   MENU_ENUM_LABEL_VALUE_START_VIDEO_PROCESSOR,
   "Starta videoprocessor"
   )
MSG_HASH( /* FIXME Maybe add a description? */
   MENU_ENUM_LABEL_VALUE_START_NET_RETROPAD,
   "Starta fjärrstyrd RetroPad"
   )

/* Main Menu > Load Content */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FAVORITES,
   "Start katalog"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOADED_FILE_DETECT_CORE_LIST,
   "Hämtningar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OPEN_ARCHIVE,
   "Bläddra i arkiv"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_ARCHIVE,
   "Läs in arkiv"
   )

/* Main Menu > Load Content > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_FAVORITES,
   "Favoriter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_FAVORITES,
   "Visar innehåll som lagts till i 'Favoriter'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_MUSIC,
   "Musik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_MUSIC,
   "Visar musik som tidigare har spelats."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_IMAGES,
   "Bilder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_IMAGES,
   "Visar bilder som tidigare har blivit sedd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_VIDEO,
   "Videor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_VIDEO,
   "Visar videor som tidigare har spelats."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_EXPLORE,
   "Utforska"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_EXPLORE,
   "Bläddra bland alla innehålls-filer som matchar databasen via ett kategoriserat sökgränssnitt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GOTO_CONTENTLESS_CORES,
   "Innehållslösa kärnor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GOTO_CONTENTLESS_CORES,
   "Installerade kärnor som kan fungera utan att läsa in innehåll visas här."
   )

/* Main Menu > Online Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_LIST,
   "Hämta kärnor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_INSTALLED_CORES,
   "Uppdatera installerade kärnor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UPDATE_INSTALLED_CORES,
   "Uppdaterar alla installerade kärnor till den senaste tillgängliga versionen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_INSTALLED_CORES_PFD,
   "Byt kärnor till Play-butiksversioner"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_INSTALLED_CORES_PFD,
   "Ersätt alla äldre och manuellt installerade kärnor med de senaste versionerna från Play-butik, om möjligt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_UPDATER_LIST,
   "Uppdatera miniatyrer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_UPDATER_LIST,
   "Hämtar ner en komplett miniatyrsamling för valt system."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PL_THUMBNAILS_UPDATER_LIST,
   "Uppdatera spellisteminiatyrer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PL_THUMBNAILS_UPDATER_LIST,
   "Hämtar ner miniatyrer för poster i den valda spellistan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE_CONTENT,
   "Hämta ner innehåll"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_CORE_CONTENT,
   "Hämta ner gratis innehåll för vald kärna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_CORE_SYSTEM_FILES,
   "Hämta ner kärnsystemfiler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_CORE_SYSTEM_FILES,
   "Hämta ner hjälpfiler som system kräver för en korrekt/optimal kärndrift."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CORE_INFO_FILES,
   "Uppdatera kärninfofiler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_ASSETS,
   "Uppdatera resurser"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_AUTOCONFIG_PROFILES,
   "Uppdatera spelkontrollsprofiler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CHEATS,
   "Uppdatera fusk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_DATABASES,
   "Uppdatera databaser"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_OVERLAYS,
   "Uppdatera överlager"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_GLSL_SHADERS,
   "Uppdatera GLSL-shaders"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_CG_SHADERS,
   "Uppdatera Cg-shaders"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_SLANG_SHADERS,
   "Uppdatera Slang-shaders"
   )

/* Main Menu > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFORMATION,
   "Kärninformation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INFORMATION,
   "Visa information om applikationen/kärnan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISC_INFORMATION,
   "Skivinformation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISC_INFORMATION,
   "Visa information om inmatade skivor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_INFORMATION,
   "Nätverksinformation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_INFORMATION,
   "Visa nätverksgränssnitt och tillhörande IP-adresser."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFORMATION,
   "Systeminformation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SYSTEM_INFORMATION,
   "Visa information som är specifik för enheten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_MANAGER,
   "Databashanterare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DATABASE_MANAGER,
   "Visa databaser."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CURSOR_MANAGER,
   "Markörhanterare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CURSOR_MANAGER,
   "Visa tidigare sökningar."
   )

/* Main Menu > Information > Core Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_NAME,
   "Kärnnamn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_LABEL,
   "Kärnetikett"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_VERSION,
   "Kärnversion"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_NAME,
   "Systemets namn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SYSTEM_MANUFACTURER,
   "Systemtillverkare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CATEGORIES,
   "Kategorier"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_AUTHORS,
   "Upphovsperson"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_PERMISSIONS,
   "Behörigheter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_LICENSES,
   "Licens"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SUPPORTED_EXTENSIONS,
   "Filformat som stöds"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_REQUIRED_HW_API,
   "Kräver grafik-API"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_CORE_PATH,
   "Fullständig sökväg"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SAVESTATE_SUPPORT_LEVEL,
   "Spara tillstånd-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SAVESTATE_DISABLED,
   "Ingen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SAVESTATE_BASIC,
   "Grundläggande (Spara/Läs in)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SAVESTATE_SERIALIZED,
   "Serialiserad (Spara/Läs in, Spola tillbaka)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SAVESTATE_DETERMINISTIC,
   "Deterministisk (Spara/Läs in, Spola tillbaka, Run-Ahead, Netplay)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_FIRMWARE_IN_CONTENT_DIRECTORY,
   "- Observera: 'Systemfiler är i innehållskatalog' är för närvarande aktiverat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_FIRMWARE_PATH,
   "- Letar i: %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MISSING_REQUIRED,
   "Saknas, krävs:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MISSING_OPTIONAL,
   "Saknas, valfri:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PRESENT_REQUIRED,
   "Finns, krävs:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PRESENT_OPTIONAL,
   "Finns, valfri:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_LOCK,
   "Lås installerad kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_LOCK,
   "Förhindrar modifiering av den nuvarande installerade kärnan. Kan användas för att undvika oönskade uppdateringar när innehållet kräver en specifik kärnversion (t.ex. Arcade ROM-uppsättningar) eller när kärnans eget format för sparning ändras."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SET_STANDALONE_EXEMPT,
   "Uteslut från 'Innehållslösa kärnor'-menyn"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_SET_STANDALONE_EXEMPT,
   "Förhindra att denna kärna visas i fliken/menyn 'Innehållslösa kärnor'. Gäller endast när visningsläget är inställt på 'Anpassat'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_DELETE,
   "Ta bort kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_DELETE,
   "Ta bort denna kärna från disken."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_CREATE_BACKUP,
   "Säkerhetskopiera kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_CREATE_BACKUP,
   "Spara en säkerhetskopia av den aktuella installerade kärnan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_RESTORE_BACKUP_LIST,
   "Återställ säkerhetskopia"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_RESTORE_BACKUP_LIST,
   "Installera en tidigare version av kärnan från en lista över sparade säkerhetskopior."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_DELETE_BACKUP_LIST,
   "Ta bort säkerhetskopia"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_DELETE_BACKUP_LIST,
   "Ta bort en fil från listan över sparade säkerhetskopior."
   )

/* Main Menu > Information > System Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_BUILD_DATE,
   "Kompileringsdatum"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RETROARCH_VERSION,
   "RetroArch-version"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_GIT_VERSION,
   "Git-version"
   )
MSG_HASH( /* FIXME Should be MENU_LABEL_VALUE */
   MSG_COMPILER,
   "Kompilator"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CPU_MODEL,
   "CPU-modell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CPU_FEATURES,
   "CPU-funktioner"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_ARCHITECTURE,
   "CPU-arkitektur"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_CORES,
   "CPU-kärnor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_JIT_AVAILABLE,
   "JIT tillgänglig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BUNDLE_IDENTIFIER,
   "Bundle-identifierare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_IDENTIFIER,
   "Frontend-identifierare"
   )
MSG_HASH( /* FIXME Maybe add a description? */
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RETRORATING_LEVEL,
   "RetroRating-nivå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE,
   "Energikälla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_VIDEO_CONTEXT_DRIVER,
   "Drivrutin för videokontext"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_MM_WIDTH,
   "Skärmbredd (mm)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_MM_HEIGHT,
   "Skärmhöjd (mm)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DISPLAY_METRIC_DPI,
   "Skärmens DPI"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LIBRETRODB_SUPPORT,
   "LibretroDB-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OVERLAY_SUPPORT,
   "Överlager-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COMMAND_IFACE_SUPPORT,
   "Kommandoradsgränssnittsstöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETWORK_COMMAND_IFACE_SUPPORT,
   "Network Command Interface-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETWORK_REMOTE_SUPPORT,
   "Stöd för nätverksspelkontroller"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COCOA_SUPPORT,
   "Cocoa-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RPNG_SUPPORT,
   "PNG (RPNG)-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RJPEG_SUPPORT,
   "JPEG (RJPEG)-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RBMP_SUPPORT,
   "BMP (RBMP)-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RTGA_SUPPORT,
   "TGA (RTGA)-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL_SUPPORT,
   "SDL 1.2-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL2_SUPPORT,
   "SDL 2-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_D3D8_SUPPORT,
   "Direct3D 8-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_D3D9_SUPPORT,
   "Direct3D 9-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_D3D10_SUPPORT,
   "Direct3D 10-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_D3D11_SUPPORT,
   "Direct3D 11-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_D3D12_SUPPORT,
   "Direct3D 12-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_GDI_SUPPORT,
   "GDI-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_VULKAN_SUPPORT,
   "Vulkan-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_METAL_SUPPORT,
   "Metal-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENGL_SUPPORT,
   "OpenGL-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENGLES_SUPPORT,
   "OpenGL ES-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_THREADING_SUPPORT,
   "Threading-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_KMS_SUPPORT,
   "KMS/EGL-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_UDEV_SUPPORT,
   "udev-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENVG_SUPPORT,
   "OpenVG-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_EGL_SUPPORT,
   "EGL-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_X11_SUPPORT,
   "X11-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_WAYLAND_SUPPORT,
   "Wayland-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_XVIDEO_SUPPORT,
   "XVideo-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ALSA_SUPPORT,
   "ALSA-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OSS_SUPPORT,
   "OSS-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENAL_SUPPORT,
   "OpenAL-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_OPENSL_SUPPORT,
   "OpenSL-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_RSOUND_SUPPORT,
   "RSound-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ROARAUDIO_SUPPORT,
   "RoarAudio-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_JACK_SUPPORT,
   "JACK-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_PULSEAUDIO_SUPPORT,
   "PulseAudio-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_PIPEWIRE_SUPPORT,
   "PipeWire-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COREAUDIO_SUPPORT,
   "CoreAudio-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_COREAUDIO3_SUPPORT,
   "CoreAudio V3-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DSOUND_SUPPORT,
   "DirectSound-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_WASAPI_SUPPORT,
   "WASAPI-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_XAUDIO2_SUPPORT,
   "XAudio2-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ZLIB_SUPPORT,
   "zlib-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_7ZIP_SUPPORT,
   "7zip-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_ZSTD_SUPPORT,
   "Stöd för Zstandard"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DYLIB_SUPPORT,
   "Dynamic Library-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_DYNAMIC_SUPPORT,
   "Dynamisk inläsning av libretro-bibliotek vid körning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CG_SUPPORT,
   "Cg-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_GLSL_SUPPORT,
   "GLSL-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_HLSL_SUPPORT,
   "HLSL-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SDL_IMAGE_SUPPORT,
   "SDL Image-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FFMPEG_SUPPORT,
   "FFmpeg-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_MPV_SUPPORT,
   "mpv-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_CORETEXT_SUPPORT,
   "CoreText-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FREETYPE_SUPPORT,
   "FreeType-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_STB_TRUETYPE_SUPPORT,
   "STB TrueType-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_NETPLAY_SUPPORT,
   "Netplay (Peer-to-Peer)-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_V4L2_SUPPORT,
   "Video4Linux2-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SSL_SUPPORT,
   "SSL-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_LIBUSB_SUPPORT,
   "libusb-stöd"
   )

/* Main Menu > Information > Database Manager */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_SELECTION,
   "Databasval"
   )

/* Main Menu > Information > Database Manager > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_NAME,
   "Namn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DESCRIPTION,
   "Beskrivning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ACHIEVEMENTS,
   "Prestationer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_CATEGORY,
   "Kategori"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_LANGUAGE,
   "Språk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_CONSOLE_EXCLUSIVE,
   "Konsolexklusiv"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PLATFORM_EXCLUSIVE,
   "Plattformsexklusiv"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_SCORE,
   "Poäng"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_CONTROLS,
   "Spelkontroller"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ARTSTYLE,
   "Konststil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_GAMEPLAY,
   "Spelsätt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_NARRATIVE,
   "Berättande"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PACING,
   "Tempo"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PERSPECTIVE,
   "Perspektiv"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_SETTING,
   "Inställning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_VISUAL,
   "Visuellt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_VEHICULAR,
   "Fordon"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PUBLISHER,
   "Utgivare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DEVELOPER,
   "Utvecklare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ORIGIN,
   "Ursprung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_TGDB_RATING,
   "TGDB-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_FAMITSU_MAGAZINE_RATING,
   "Famitsu Magazine-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_REVIEW,
   "Edge Magazine-recension"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_RATING,
   "Edge Magazine-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_EDGE_MAGAZINE_ISSUE,
   "Edge Magazine-utgåva"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RELEASE_MONTH,
   "Utgivningsmånad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RELEASE_YEAR,
   "Utgivningsår"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_BBFC_RATING,
   "BBFC-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ESRB_RATING,
   "ESRB-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ELSPA_RATING,
   "ELSPA-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_PEGI_RATING,
   "PEGI-klassificering"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ENHANCEMENT_HW,
   "Förbättringshårdvara"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_CERO_RATING,
   "CERO-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_SERIAL,
   "Serienummer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_ANALOG,
   "Analog inmatning stöds"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_RUMBLE,
   "Rumble stöds"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_COOP,
   "Co-op stöds"
   )

/* Main Menu > Configuration File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATIONS,
   "Läs in konfiguration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIGURATIONS,
   "Läs in befintlig konfiguration och ersätt aktuella värden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG,
   "Spara nuvarande konfiguration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG,
   "Skriv över nuvarande konfigurationsfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_NEW_CONFIG,
   "Spara som ny konfiguration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_NEW_CONFIG,
   "Sparar nuvarande konfiguration till ny separat fil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_AS_CONFIG,
   "Spara konfiguration som"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_AS_CONFIG,
   "Spara aktuell konfiguration som anpassad konfigurationsfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_MAIN_CONFIG,
   "Spara huvudkonfiguration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_MAIN_CONFIG,
   "Spara aktuell konfiguration som huvudkonfiguration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESET_TO_DEFAULT_CONFIG,
   "Återställ grundinställningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESET_TO_DEFAULT_CONFIG,
   "Återställer nuvarande konfigurations grundvärden."
   )

/* Main Menu > Help */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_CONTROLS,
   "Grundläggande menykontroller"
   )

/* Main Menu > Help > Basic Menu Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_SCROLL_UP,
   "Rulla upp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_SCROLL_DOWN,
   "Rulla ner"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_CONFIRM,
   "Bekräfta"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_START,
   "Starta"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_TOGGLE_MENU,
   "Visa/dölj meny"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_QUIT,
   "Avsluta"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_TOGGLE_KEYBOARD,
   "Visa/dölj tangentbord"
   )

/* Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DRIVER_SETTINGS,
   "Drivrutiner"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DRIVER_SETTINGS,
   "Ändra drivrutiner som används av systemet."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SETTINGS,
   "Ändra inställningar för videoutmatning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SETTINGS,
   "Ljud"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SETTINGS,
   "Ändra ljudingång/utgångsinställningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SETTINGS,
   "Inmatning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_SETTINGS,
   "Ändra inställningar för spelkontroller, tangentbord och mus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LATENCY_SETTINGS,
   "Latens"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LATENCY_SETTINGS,
   "Ändra inställningar kopplade till ljud-, video- och inmatningsfördröjning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SETTINGS,
   "Kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_SETTINGS,
   "Ändra inställningar för kärna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIGURATION_SETTINGS,
   "Konfiguration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIGURATION_SETTINGS,
   "Ändra grundinställningar för konfigurationsfiler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVING_SETTINGS,
   "Sparar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVING_SETTINGS,
   "Ändra inställningar för sparande av filer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_SETTINGS,
   "Molnsynkronisering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_SETTINGS,
   "Ändra inställningar för molnsynkronisering."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_ENABLE,
   "Aktivera molnsynkronisering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_ENABLE,
   "Försök att synkronisera konfigurationer, SRAM och tillstånd till en molnlagringsleverantör."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_DESTRUCTIVE,
   "Destruktiv molnsynkning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_SYNC_SAVES,
   "Synk: Sparningar/Tillstånd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_SYNC_CONFIGS,
   "Synk: Konfigurationsfiler"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_SYNC_THUMBS,
   "Synk: Miniatyrbilder"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_SYNC_SYSTEM,
   "Synk: Systemfiler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_SYNC_SAVES,
   "När aktiverad kommer sparningar/tillstånd att synkas till molnet."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_SYNC_CONFIGS,
   "När aktiverad kommer konfigurationsfiler synkas till molnet."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_SYNC_THUMBS,
   "När aktiverad kommer miniatyrbilder att synkas till molnet. Rekommenderas inte alltid förutom för stora samlingar av anpassade miniatyrbilder, annars är miniatyrbildshämtaren ett bättre val."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_SYNC_SYSTEM,
   "När aktiverad kommer systemfiler att synkas till molnet. Detta kan kraftigt öka tiden det tar att synka. Använd med försiktighet."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_DESTRUCTIVE,
   "Inaktiverat flyttas filer till en säkerhetskopia innan de skrivs över eller raderas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_DRIVER,
   "Backend för molnsynk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_DRIVER,
   "Vilket nätverksprotokoll för molnlagring som ska användas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_URL,
   "URL till molnlagring"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_URL,
   "URL-adressen för API-ingången till molnlagringstjänsten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_USERNAME,
   "Användarnamn"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_USERNAME,
   "Ditt användarnamn för ditt molnlagringskonto."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOUD_SYNC_PASSWORD,
   "Lösenord"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOUD_SYNC_PASSWORD,
   "Ditt lösenord för ditt molnlagringskonto."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOGGING_SETTINGS,
   "Loggning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOGGING_SETTINGS,
   "Ändra loggningsinställningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FILE_BROWSER_SETTINGS,
   "Filhanterare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_FILE_BROWSER_SETTINGS,
   "Ändra inställningar för filutforskare."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_CONFIG,
   "Konfigurationsfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_COMPRESSED_ARCHIVE,
   "Komprimerad arkivfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_RECORD_CONFIG,
   "Konfigurationsfil för Inspelning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_CURSOR,
   "Databasmarkörfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_CONFIG,
   "Konfigurationsfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_SHADER_PRESET,
   "Förinställd Shaderfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_SHADER,
   "Shaderfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_REMAP,
   "Ommappningsfil för spelkontroller."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_CHEAT,
   "Fuskfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_OVERLAY,
   "Överlagerfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_RDB,
   "Databasfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_FONT,
   "TrueType-typsnittsfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_PLAIN_FILE,
   "Vanlig fil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_MOVIE_OPEN,
   "Video. Välj den för att öppna denna fil med videospelaren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_MUSIC_OPEN,
   "Musik. Välj den för att öppna denna fil med musikspelaren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_IMAGE,
   "Bildfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_IMAGE_OPEN_WITH_VIEWER,
   "Bild. Välj den för att öppna denna fil med bildvisaren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_CORE_SELECT_FROM_COLLECTION,
   "Libretro-kärna. Genom att välja detta kommer denna kärna att associeras med spelet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_CORE,
   "Libretro-kärna. Välj denna fil för att RetroArch ska läsa in den här kärnan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_DIRECTORY,
   "Katalog. Markera den för att öppna den här katalogen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_THROTTLE_SETTINGS,
   "Bildfrekvensstrypning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_THROTTLE_SETTINGS,
   "Ändra inställningar för Spola bakåt, Snabbspola framåt och Slow-motion."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_SETTINGS,
   "Inspelning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_SETTINGS,
   "Ändra inställningar för inspelning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_DISPLAY_SETTINGS,
   "Skärmvisning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_DISPLAY_SETTINGS,
   "Ändra inställningar för bild- och tangentbordsöverlager samt skärmmeddelanden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_INTERFACE_SETTINGS,
   "Användargränssnitt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_INTERFACE_SETTINGS,
   "Ändra inställningar för användargränssnittet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SETTINGS,
   "AI-tjänst"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_SETTINGS,
   "Ändra inställningar för AI-tjänsten (Översättning/TTT/Diverse)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_SETTINGS,
   "Tillgänglighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_SETTINGS,
   "Ändra inställningar för hjälpmedelsberättaren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_POWER_MANAGEMENT_SETTINGS,
   "Energihantering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_POWER_MANAGEMENT_SETTINGS,
   "Ändra inställningar kopplade till strömförsörjning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RETRO_ACHIEVEMENTS_SETTINGS,
   "Prestationer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RETRO_ACHIEVEMENTS_SETTINGS,
   "Ändra inställningar för prestationer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_SETTINGS,
   "Nätverk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_SETTINGS,
   "Ändra server- och nätverksinställningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SETTINGS,
   "Spellistor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SETTINGS,
   "Ändra inställningar för spellistor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_SETTINGS,
   "Användare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_SETTINGS,
   "Ändra inställningar för integritet, konto och användarnamn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_SETTINGS,
   "Katalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DIRECTORY_SETTINGS,
   "Ändra standardkataloger där filerna finns."
   )

/* Core option category placeholders for icons */
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HACKS_SETTINGS,
   "Hack"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MAPPING_SETTINGS,
   "Mappning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PERFORMANCE_SETTINGS,
   "Prestanda"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SOUND_SETTINGS,
   "Ljud"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STORAGE_SETTINGS,
   "Lagring"
   )

#ifdef HAVE_MIST
MSG_HASH(
   MENU_ENUM_SUBLABEL_STEAM_SETTINGS,
   "Ändra inställningar kopplade till Steam."
   )
#endif

/* Settings > Drivers */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DRIVER,
   "Inmatning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DRIVER,
   "Inmatningsdrivrutin som ska användas. Vissa videodrivrutiner tvingar fram en annan inmatningsdrivrutin. (Omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_INPUT_DRIVER_UDEV,
   "Udev-drivrutinen läser evdev-händelser för tangentbordsstöd. Den stöder också tangentbordsåteruppringning, möss och pekplattor.\nSom standard i de flesta distros är /dev/input-noder endast root (läge 600). Du kan konfigurera en udev-regel som gör dessa tillgängliga för icke-root."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_INPUT_DRIVER_LINUXRAW,
   "Drivrutinen för linuxraw-inmatningen kräver en aktiv TTY. Tangentbordshändelser läses direkt från TTY vilket gör det enklare, men inte lika flexibelt som udev. Möss, etc, stöds inte alls. Den här drivrutinen använder det äldre joystick-APIet (/dev/input/js*)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_INPUT_DRIVER_NO_DETAILS,
   "Inmatningsdrivrutin. Videodrivrutinen kan tvinga fram en annan drivrutin för inmatning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_JOYPAD_DRIVER,
   "Spelkontroll"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_JOYPAD_DRIVER,
   "Drivrutin för handkontroller att använda. (kräver omstart)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_JOYPAD_DRIVER_DINPUT,
   "DirectInput spelkontrolldrivrutin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_JOYPAD_DRIVER_HID,
   "Human Interface Device-drivrutin på låg nivå."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_JOYPAD_DRIVER_LINUXRAW,
   "Raw Linux-drivrutin, använder äldre joystick API. Använd udev i stället om det är möjligt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_JOYPAD_DRIVER_PARPORT,
   "Linux-drivrutiner för handkontroller anslutna till parallellport via specialadaptrar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_JOYPAD_DRIVER_SDL,
   "Spelkontroll-drivrutin baserad på SDL-bibliotek."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_JOYPAD_DRIVER_UDEV,
   "Spelkontrolldrivrutin med udev-gränssnitt, rekommenderas generellt. Använder det senaste evdev joypad-APIet för joystick-stöd. Den stöder hotplugging och force-feedback.\nSom standard i de flesta distros är /dev/input-noder endast root (läge 600). Du kan konfigurera en udev-regel som gör dessa tillgängliga för icke-root."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_JOYPAD_DRIVER_XINPUT,
   "XInput spelkontrolldrivrutin. Mest för Xbox-kontroller."
   )

MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DRIVER,
   "Videodrivrutin att använda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_GL1,
   "OpenGL 1.x drivrutin. Lägsta krav: OpenGL 1.1. Stöder inte shaders. Använd senare OpenGL-drivrutiner istället, om det är möjligt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_GL,
   "OpenGL 2.x drivrutin. Denna drivrutin gör att libretro GL-kärnor kan användas utöver mjukvaru-renderade kärnor. Lägsta krav: OpenGL 2.0 eller OpenGLES 2.0. Stöder GLSL shader-formatet. Använd glcore-drivrutinen istället, om det är möjligt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_GL_CORE,
   "OpenGL 3.x drivrutin. Denna drivrutin gör att libretro GL-kärnor kan användas utöver mjukvaru-renderade kärnor. Lägsta krav: OpenGL 3.2 eller OpenGLES 3.0+. Stöder Slang shader-formatet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_VULKAN,
   "Vulkan drivrutinen. Denna drivrutin gör att libretro Vulkan-kärnor kan användas utöver mjukvaru-renderade kärnor. Lägsta krav: Vulkan 1.0. Stöder HDR och Slang shaders."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_SDL1,
   "SDL 1.2 mjukvarurenderad drivrutin. Prestanda anses vara undermålig. Överväg att använda den endast som en sista utväg."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_SDL2,
   "SDL 2-programvara-renderad drivrutin. Prestanda för mjukvarurenderade libretro-kärnimplementeringar är beroende av din plattforms SDL-implementering."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_METAL,
   "Metal-drivrutin för Apple-plattformar. Stöder Slang shader-formatet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D8,
   "Direct3D 8-drivrutin utan stöd för Shader."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D9_CG,
   "Direct3D 9-drivrutin med stöd för det äldre Cg Shader-formatet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D9_HLSL,
   "Direct3D 9-drivrutin med stöd för HLSL Shader-formatet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D10,
   "Direct3D 10-drivrutin med stöd för Slang Shader-formatet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D11,
   "Direct3D 11-drivrutin med stöd för HDR och Slang Shader-formatet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_D3D12,
   "Direct3D 12-drivrutin med stöd för HDR och Slang Shader-formatet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_DISPMANX,
   "DispmanX-drivrutin. Använder DispmanX APIn för Videocore IV GPU i Raspberry Pi 0..3. Inget stöd för överlager eller shaders."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_CACA,
   "LibCACA-drivrutin. Ger teckenutmatning istället för grafik. Rekommenderas inte för praktisk användning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_EXYNOS,
   "En lågnivå Exynos-videodrivrutin som använder G2D-blocket i Samsung Exynos SoC för blit-operationer. Prestandan för mjukvarurenderade kärnor bör vara optimal."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_DRM,
   "Enkel DRM-videodrivrutin. Detta är en lågnivå videodrivrutin som använder libdrm för maskinvaruskalning med hjälp av GPU-överlager."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_SUNXI,
   "En lågnivå Sunxi-videodrivrutin som använder G2D-blocket i Allwinner SoC:er."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_WIIU,
   "Wii U-drivrutin. Stöder Slang shaders."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_SWITCH,
   "Switch-drivrutin. Stöder GLSL shader-formatet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_VG,
   "OpenVG-drivrutin. Använder OpenVG-maskinvaruaccelererat 2D-vektorgrafik-API."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_GDI,
   "GDI-drivrutin. Använder ett äldre Windows-gränssnitt. Rekommenderas inte."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DRIVER_NO_DETAILS,
   "Nuvarande videodrivrutin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DRIVER,
   "Ljud"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DRIVER,
   "Ljuddrivrutin att använda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_RSOUND,
   "RSound-drivrutin för nätverksbaserade ljudsystem."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_OSS,
   "Äldre Open Sound System-drivrutin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_ALSA,
   "Standard ALSA-drivrutin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_ALSATHREAD,
   "ALSA-drivrutin med stöd för trådning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_TINYALSA,
   "ALSA-drivrutin implementerad utan beroenden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_ROAR,
   "Ljudsystem RoarAudio-drivrutin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_AL,
   "OpenAL-drivrutin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_SL,
   "OpenSL-drivrutin."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_DSOUND,
   "DirectSound-drivrutin. DirectSound används huvudsakligen från Windows 95 till Windows XP."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_WASAPI,
   "Windows Audio Session API-drivrutin. WASAPI används huvudsakligen från Windows 7 och senare."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_PULSE,
   "PulseAudio-drivrutin. Om systemet använder PulseAudio, se till att använda denna drivrutin istället för t.ex. ALSA."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_PIPEWIRE,
   "PipeWire-drivrutin. Om systemet använder PipeWire, se till att använda den här drivrutinen istället för t.ex. PulseAudio."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DRIVER_JACK,
   "Drivrutinen för Jack Audio anslutningssats."
   )
#ifdef HAVE_MICROPHONE
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_DRIVER,
   "Mikrofon"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_DRIVER,
   "Mikrofon-drivrutin att använda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_RESAMPLER_DRIVER,
   "Mikrofonomsamplare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_RESAMPLER_DRIVER,
   "Mikrofonomsamplare att använda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_BLOCK_FRAMES,
   "Mikrofon bildrutsblock"
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_DRIVER,
   "Ljudomsamplare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_DRIVER,
   "Ljudomsamplare att använda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_RESAMPLER_DRIVER_SINC,
   "Fönstrad Sinc implementering."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_RESAMPLER_DRIVER_CC,
   "Invecklad kosinus implementering."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_RESAMPLER_DRIVER_NEAREST,
   "Närmsta omsamplings implementering. Denna omsampling ignorerar kvalitetsinställningen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CAMERA_DRIVER,
   "Kamera"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CAMERA_DRIVER,
   "Kameradrivrutin att använda."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_DRIVER,
   "Bluetooth-drivrutin att använda."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_WIFI_DRIVER,
   "WiFi-drivrutin att använda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCATION_DRIVER,
   "Plats"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCATION_DRIVER,
   "Plats-drivrutin att använda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_DRIVER,
   "Meny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_DRIVER,
   "Drivrutin för meny att använda. (kräver omstart)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_MENU_DRIVER_XMB,
   "XMB är ett RetroArch GUI som ser ut som en 7:e generationens konsolmeny. Det kan stödja samma funktioner som Ozone."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_MENU_DRIVER_OZONE,
   "Ozone är standard GUI för RetroArch på de flesta plattformar. Det är optimerat för navigering med en spelkontroll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_MENU_DRIVER_RGUI,
   "RGUI är ett enkelt inbyggt GUI för RetroArch. Det har de lägsta prestandakraven bland menydrivrutinerna och kan användas på skärmar med låg upplösning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_MENU_DRIVER_MATERIALUI,
   "På mobila enheter använder RetroArch det mobila användargränssnittet, MaterialUI, som standard. Det här gränssnittet är designat kring pekskärms- och pekarenheter, som en mus/styrkula."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_DRIVER,
   "Inspelning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORD_DRIVER,
   "Inspelnings-drivrutin att använda."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_DRIVER,
   "MIDI-drivrutin att använda."
   )

/* Settings > Video */

MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCHRES_SETTINGS,
   "Sänd ut ursprungliga, lågupplösta signaler för användning med CRT-skärmar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OUTPUT_SETTINGS,
   "Utmatning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OUTPUT_SETTINGS,
   "Ändra inställningar för videoutmatning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_MODE_SETTINGS,
   "Helskärmsläge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_MODE_SETTINGS,
   "Ändra inställningar för helskärmsläge."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOWED_MODE_SETTINGS,
   "Fönsterläge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOWED_MODE_SETTINGS,
   "Ändra inställningar för fönsterläge."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALING_SETTINGS,
   "Skalning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCALING_SETTINGS,
   "Ändra inställningar för videoskalning."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HDR_SETTINGS,
   "Ändra HDR-inställningar för video."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SYNCHRONIZATION_SETTINGS,
   "Synkronisering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SYNCHRONIZATION_SETTINGS,
   "Ändra inställningar för videosynkronisering."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUSPEND_SCREENSAVER_ENABLE,
   "Stäng av skärmsläckare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SUSPEND_SCREENSAVER_ENABLE,
   "Förhindra systemets skärmsläckare från att bli aktiv."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_SUSPEND_SCREENSAVER_ENABLE,
   "Stänger av skärmsläckaren. Det är ett förslag som inte nödvändigtvis måste respekteras av videodrivrutinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_THREADED,
   "Trådad video"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_THREADED,
   "Förbättrar prestanda till priset av latens och mer videolagg. Använd endast om full hastighet inte kan uppnås på annat sätt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_THREADED,
   "Använd trådad videodrivrutin. Att använda detta kan förbättra prestandan till den möjliga kostnaden för latens och mer videolagg."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_BLACK_FRAME_INSERTION,
   "Insättning av svart bildruta"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_BLACK_FRAME_INSERTION,
   "VARNING: Snabbt flimmer kan orsaka kvarstående bild på vissa skärmar. Använd på egen risk // Infoga svarta ramar mellan bildrutorna. Kan kraftigt minska rörelseoskärpa genom att emulera CRT-scanning, men på bekostnad av ljusstyrkan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_BLACK_FRAME_INSERTION,
   "Infogar svart(a) ram(ar) mellan bildrutorna för ökad rörelseklarhet. Använd endast det alternativ som är avsett för din aktuella bildskärms uppdateringsfrekvens. Används inte vid uppdateringsfrekvenser som inte är multiplar av 60 Hz, t. ex. 144 Hz, 165 Hz osv. Kombinera inte med Swap Interval > 1, subframes, Frame Delay eller Sync to Exact Content Framerate. Att låta systemets VRR vara på är ok, men inte med den inställningen. Om du märker - någon - tillfällig bildretention bör [...]"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_BFI_DARK_FRAMES,
   "Infoga svart bildruta - Mörka bildrutor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_BFI_DARK_FRAMES,
   "Justera antalet svarta bildrutor i den totala BFI-sekvensen för utskanning. Fler motsvarar högre rörelseklarhet, färre motsvarar högre ljusstyrka. Inte tillämpligt vid 120 Hz eftersom det bara finns totalt 1 BFI-bildruta att arbeta med. Inställningar som är högre än möjligt begränsar dig till det högsta möjliga för din valda uppdateringsfrekvens."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_BFI_DARK_FRAMES,
   "Justerar antalet svarta bildrutor som visas i BFI-sekvensen. Fler svarta bildrutor ökar rörelseklarheten men minskar ljusstyrkan. Inte tillämpligt vid 120 Hz eftersom det bara finns en enda extra 60 Hz-bildruta, så den måste vara svart, annars skulle BFI inte vara aktiv alls."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_SUBFRAMES,
   "VARNING: Snabbt flimmer kan orsaka bildbeständighet på vissa skärmar. Använd på egen risk // Simulerar en grundläggande rullande scanline över flera underrutor genom att dela upp skärmen vertikalt och rendera varje del av skärmen beroende på hur många underrutor det finns."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_SHADER_SUBFRAMES,
   "Infogar extra shader-ram(ar) mellan bildrutorna för eventuella shader-effekter som är utformade för att köras snabbare än innehållshastigheten. Använd endast det alternativ som är avsett för din aktuella bildskärmsuppdateringsfrekvens. Används inte vid uppdateringsfrekvenser som inte är multiplar av 60 Hz, t. ex. 144 Hz, 165 Hz osv. Kombinera inte med Swap Interval > 1, BFI, Frame Delay eller Sync to Exact Content Framerate. Att låta systemets VRR vara på är ok, men inte den inst[...]"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_SCREENSHOT,
   "GPU-skärmdump"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCAN_SUBFRAMES,
   "Rullande skanlinjesimulering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCAN_SUBFRAMES,
   "VARNING: Snabbt flimmer kan orsaka bildbeständighet på vissa skärmar. Använd på egen risk // Simulerar en grundläggande rullande scanline över flera underrutor genom att dela upp skärmen vertikalt och rendera varje del av skärmen beroende på hur många underrutor det finns."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_SCAN_SUBFRAMES,
   "Simulerar en grundläggande rullande scanline över flera subframes genom att dela upp skärmen vertikalt och rendera varje del av skärmen enligt hur många subframes det finns från toppen av skärmen och nedåt."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_GPU_SCREENSHOT,
   "Skärmdumpar fångar GPU-skuggat material om det finns."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SMOOTH,
   "Bilinjär-filtrering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SMOOTH,
   "Lägg till en liten oskärpa i bilden för att mjuka upp hårda pixelkanter. Det här alternativet har mycket liten inverkan på prestandan. Bör inaktiveras när Shaders används."
   )
#if defined(DINGUX)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_FILTER_TYPE,
   "Bildinterpolation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DINGUX_IPU_FILTER_TYPE,
   "Ange bildinterpoleringsmetod vid skalning av innehåll via intern IPU. 'Bikubisk' eller 'Bilinjär' rekommenderas när du använder CPU-drivna videofilter. Det här alternativet påverkar inte prestandan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_FILTER_BICUBIC,
   "Bikubisk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_FILTER_BILINEAR,
   "Bilinjär"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_FILTER_NEAREST,
   "Närmsta granne"
   )
#if defined(RS90) || defined(MIYOO)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_RS90_SOFTFILTER_TYPE,
   "Bildinterpolation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DINGUX_RS90_SOFTFILTER_TYPE,
   "Ange bildinterpolationsmetod när 'Heltalsskala' är inaktiverad. 'Närmsta granne' har minst prestandapåverkan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_RS90_SOFTFILTER_POINT,
   "Närmsta granne"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_RS90_SOFTFILTER_BRESENHAM_HORZ,
   "Semi-linjär"
   )
#endif
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_DELAY,
   "Autoshader-fördröjning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_DELAY,
   "Fördröj automatisk inläsning av Shaders (i ms). Kan kringgå grafiska fel när programvara för skärminspelning används."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER,
   "Videofilter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FILTER,
   "Använd ett CPU-drivet videofilter. Kan innebära en hög prestandakostnad. Vissa videofilter kanske bara fungerar för kärnor som använder 32-bitars eller 16-bitars färg."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_FILTER,
   "Använd ett CPU-drivet videofilter. Kan komma till en hög prestandakostnad. Vissa videofilter kanske bara fungerar för kärnor som använder 32-bitars eller 16-bitars färg. Dynamiskt länkade videofilterbibliotek kan väljas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_FILTER_BUILTIN,
   "Använd ett CPU-drivet videofilter. Kan innebära en hög prestandakostnad. Vissa videofilter kanske bara fungerar för kärnor som använder 32-bitars eller 16-bitars färg. Inbyggda videofilterbibliotek kan väljas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_REMOVE,
   "Ta bort videofilter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FILTER_REMOVE,
   "Stäng av alla aktiva CPU-drivna videofilter."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_NOTCH_WRITE_OVER,
   "Aktivera helskärm utan hänsyn till notch på Android och iOS-enheter"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_USE_METAL_ARG_BUFFERS,
   "Använd Metal-argumentbuffertar (kräver omstart)"
)
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_USE_METAL_ARG_BUFFERS,
   "Försök att förbättra prestandan genom att använda Metal-argumentbuffertar. Vissa kärnor kan kräva detta. Detta kan göra att vissa shaders slutar fungera, särskilt på äldre hårdvara eller operativsystem."
)

/* Settings > Video > CRT SwitchRes */

MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION,
   "Endast för CRT-skärmar. Försöker att använda exakt kärna/spelupplösning och uppdateringsfrekvens."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_SUPER,
   "CRT Superupplösning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_SUPER,
   "Växla mellan inbyggda och ultravida superupplösningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_X_AXIS_CENTERING,
   "Horisontell centrering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_X_AXIS_CENTERING,
   "Gå igenom dessa alternativ om bilden inte är korrekt centrerad på skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_PORCH_ADJUST,
   "Horisontell storlek"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_PORCH_ADJUST,
   "Bläddra igenom dessa alternativ för att justera de horisontella inställningarna och ändra bildstorleken."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_VERTICAL_ADJUST,
   "Vertikal centrering"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_HIRES_MENU,
   "Använd högupplöst meny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_HIRES_MENU,
   "Växla till högupplöst modell för användning med högupplösta menyer när inget innehåll är laddat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CRT_SWITCH_RESOLUTION_USE_CUSTOM_REFRESH_RATE,
   "Anpassad uppdateringsfrekvens"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_USE_CUSTOM_REFRESH_RATE,
   "Använd en anpassad uppdateringsfrekvens som anges i konfigurationsfilen om det behövs."
   )

/* Settings > Video > Output */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MONITOR_INDEX,
   "Skärmindex"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MONITOR_INDEX,
   "Välj vilken skärm som ska användas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_MONITOR_INDEX,
   "Vilken bildskärm att föredra. 0 (standard) betyder att ingen speciell bildskärm är att föredra, 1 och uppåt (1 är den första bildskärmen), föreslår att RetroArch använder just den bildskärmen."
   )
#if defined (WIIU)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WIIU_PREFER_DRC,
   "Optimera för Wii U GamePad (omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WIIU_PREFER_DRC,
   "Använd en exakt 2x skala av GamePad som visningsport. Inaktivera för att visa med den ursprungliga TV-upplösningen."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION,
   "Videorotation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ROTATION,
   "Framtvingar en särskild rotation av videon. Rotationen läggs till rotationer som kärnan ställer in."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREEN_ORIENTATION,
   "Skärmorientering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREEN_ORIENTATION,
   "Framtvingar en särskild skärmorientering från operativsystemet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_INDEX,
   "GPU-index"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_GPU_INDEX,
   "Välj vilket grafikkort att använda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_OFFSET_X,
   "Horisontell skärmförskjutning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_OFFSET_X,
   "Framtvingar en särskild förskjutning horisontellt till videon. Förskjutningen tillämpas globalt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_OFFSET_Y,
   "Vertikal skärmförskjutning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_OFFSET_Y,
   "Framtvingar en särskild förskjutning vertikalt till videon. Förskjutningen tillämpas globalt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE,
   "Vertikal uppdateringsfrekvens"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE,
   "Vertikal uppdateringsfrekvens för din skärm. Används för att beräkna en lämplig ljudingångshastighet.\nDetta kommer att ignoreras om 'Trådad video' är aktiverat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE_AUTO,
   "Uppskattad uppdateringsfrekvens"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE_AUTO,
   "Den noggrant uppskattade uppdateringsfrekvensen för skärmen i Hz."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_REFRESH_RATE_AUTO,
   "Den exakta uppdateringsfrekvensen för din bildskärm (Hz). Detta används för att beräkna ljudingångshastigheten med formeln:\naudio_input_rate = spelets ingångshastighet * skärmens uppdateringsfrekvens / spelets uppdateringsfrekvens\nOm kärnan inte rapporterar några värden kommer NTSC-standardvärden att antas för kompatibilitet.\nDetta värde bör förbli i närheten av 60Hz för att undvika stora tonhöjdsförändringar. Om din skärm inte körs vid eller nära 60Hz, inaktivera VSyn[...]"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_REFRESH_RATE_POLLED,
   "Ange uppdateringsfrekvens som rapporteras från skärmen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_REFRESH_RATE_POLLED,
   "Uppdateringsfrekvensen som rapporterats av bildskärmsdrivrutinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_AUTOSWITCH_REFRESH_RATE,
   "Auto uppdateringsfrekvens"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_AUTOSWITCH_REFRESH_RATE,
   "Byt skärmens uppdateringshastighet automatiskt baserat på aktuellt innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_AUTOSWITCH_REFRESH_RATE_EXCLUSIVE_FULLSCREEN,
   "Endast i exklusivt helskärmsläge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_AUTOSWITCH_REFRESH_RATE_WINDOWED_FULLSCREEN,
   "Endast i fönster med helskärmsläge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_AUTOSWITCH_REFRESH_RATE_ALL_FULLSCREEN,
   "Alla helskärmslägen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_AUTOSWITCH_PAL_THRESHOLD,
   "Automatisk uppdateringsfrekvens PAL-tröskel"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_AUTOSWITCH_PAL_THRESHOLD,
   "Maximal uppdateringsfrekvens för att betraktas som PAL."
   )
#if defined(DINGUX) && defined(DINGUX_BETA)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_REFRESH_RATE,
   "Vertikal uppdateringsfrekvens"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DINGUX_REFRESH_RATE,
   "Ställ in skärmens vertikala uppdateringsfrekvens. '50 Hz' kommer att möjliggöra jämn video när du kör PAL-innehåll."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FORCE_SRGB_DISABLE,
   "Tvångsinaktivera sRGB FBO"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FORCE_SRGB_DISABLE,
   "Tvångsinaktivera stöd för sRGB FBO. Vissa Intel OpenGL-drivrutiner på Windows har videoproblem med sRGB FBOer. Att aktivera detta kan lösa det."
   )

/* Settings > Video > Fullscreen Mode */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN,
   "Helskärmsvisning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN,
   "Visning i helskärm. Kan ändras vid körtid. Kan åsidosättas med en kommandoradsväxel."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOWED_FULLSCREEN,
   "Fönster i helskärmsläge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOWED_FULLSCREEN,
   "Om helskärm, föredrar att använda ett helskärmsfönster som förhindrar att visningsläge ändras."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_X,
   "Bredd för helskärm"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_X,
   "Ställ in anpassad breddstorlek för helskärmsläget utan fönster. Om du låter den vara oinställd används skrivbordsupplösningen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FULLSCREEN_Y,
   "Höjd för helskärm"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FULLSCREEN_Y,
   "Ställ in anpassad höjdstorlek för helskärmsläge utan fönster. Om du låter den vara oinställd används skrivbordsupplösningen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FORCE_RESOLUTION,
   "Framtvinga upplösning på UWP"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FORCE_RESOLUTION,
   "Tvinga upp upplösningen till helskärmsstorleken, om den är inställd på 0, kommer ett fast värde på 3840 x 2160 att användas."
   )

/* Settings > Video > Windowed Mode */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE,
   "Fönsterskala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_SCALE,
   "Ställ in fönsterstorleken till den angivna multipeln av kärnans visningsportstorlek."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_OPACITY,
   "Fönsteropacitet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_OPACITY,
   "Ställ in fönstrets transparens."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_SHOW_DECORATIONS,
   "Visa fönsterdekorationer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_SHOW_DECORATIONS,
   "Visa fönstrets titelrad och ramar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_MENUBAR_ENABLE,
   "Visa menyfält"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UI_MENUBAR_ENABLE,
   "Visa fönstermenyfält."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_SAVE_POSITION,
   "Kom ihåg fönsterposition/storlek"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_SAVE_POSITION,
   "Visa allt innehåll i ett fönster i fast storlek av dimensioner som anges av 'Fönster Bredd' och 'Fönster Höjd', och spara aktuell fönsterstorlek och position vid stängning av RetroArch. Inaktiverad kommer fönsterstorleken att ställas in dynamiskt baserat på 'Fönsterskala'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_CUSTOM_SIZE_ENABLE,
   "Använd anpassad fönsterstorlek"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_CUSTOM_SIZE_ENABLE,
   "Visa allt innehåll i ett fönster i fast storlek av dimensioner som anges av 'Fönster Bredd' och 'Fönster Höjd'. Inaktiverad kommer fönsterstorleken att ställas in dynamiskt baserat på 'Fönsterskala'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_WIDTH,
   "Fönsterbredd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_WIDTH,
   "Ange den anpassade bredden för visningsfönstret."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_HEIGHT,
   "Fönsterhöjd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_HEIGHT,
   "Ange den anpassade höjden för visningsfönstret."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_AUTO_WIDTH_MAX,
   "Maximal fönsterbredd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_AUTO_WIDTH_MAX,
   "Ange den maximala bredden på visningsfönstret när storleken ändras automatiskt baserat på 'Fönsterskala'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_WINDOW_AUTO_HEIGHT_MAX,
   "Maximal fönsterhöjd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WINDOW_AUTO_HEIGHT_MAX,
   "Ange den maximala höjden på visningsfönstret när storleken ändras automatiskt baserat på 'Fönsterskala'."
   )

/* Settings > Video > Scaling */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE_INTEGER,
   "Heltalsskala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCALE_INTEGER,
   "Skala video endast i heltalssteg. Basstorleken beror på core-rapporterad geometri och bildförhållande."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE_INTEGER_AXIS,
   "Axel för heltalsskalning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCALE_INTEGER_AXIS,
   "Skala antingen höjd eller bredd, eller både höjd och bredd. Halva steg gäller endast för källor med hög upplösning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE_INTEGER_SCALING,
   "Heltalsskalning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SCALE_INTEGER_SCALING,
   "Avrunda nedåt eller uppåt till nästa heltal. ”Smart” sjunker till underskala när bilden beskärs för mycket."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE_INTEGER_SCALING_UNDERSCALE,
   "Underskala"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SCALE_INTEGER_SCALING_OVERSCALE,
   "Överskala"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_INDEX,
   "Bildformat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ASPECT_RATIO_INDEX,
   "Ställ in bildformat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO,
   "Konfigurera bildformat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ASPECT_RATIO,
   "Flyttalsvärde för bildformat (bredd/höjd)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_CONFIG,
   "Konfig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_CORE_PROVIDED,
   "Kärnspecifik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ASPECT_RATIO_CUSTOM,
   "Anpassa"
   )
#if defined(DINGUX)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DINGUX_IPU_KEEP_ASPECT,
   "Behåll bildformat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DINGUX_IPU_KEEP_ASPECT,
   "Upprätthåll 1:1 pixel bildformatet vid skalning av innehåll via intern IPU. Inaktiverad kommer bilden att sträckas ut för att fylla hela skärmen."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_X,
   "Anpassa bildformat (X-position)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_X,
   "Anpassad visningsförskjutning som används för att definiera visningsområdets X-axelposition."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_Y,
   "Anpassa bildformat (Y-position)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_Y,
   "Anpassad visningsförskjutning som används för att definiera visningsområdets Y-axelposition."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_BIAS_X,
   "Horisontell position för innehåll när visningsområdet är bredare än innehållets bredd. 0,0 är längst till vänster, 0,5 är i mitten och 1,0 är längst till höger."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_BIAS_Y,
   "Vertikal position för innehåll när visningsområdet är högre än innehållets höjd. 0,0 är överst, 0,5 är i mitten, 1,0 är nederst."
   )
#if defined(RARCH_MOBILE)
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_BIAS_PORTRAIT_X,
   "Horisontell position för innehåll när visningsområdet är bredare än innehållets bredd. 0,0 är längst till vänster, 0,5 är i mitten, 1,0 är längst till höger. (Stående orientering)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_BIAS_PORTRAIT_Y,
   "Vertikal position för innehåll när visningsområdet är högre än innehållets höjd. 0,0 är överst, 0,5 är i mitten, 1,0 är nederst. (Stående orientering)"
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_WIDTH,
   "Anpassa bildformat (Bredd)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_WIDTH,
   "Anpassad visningsportbredd som används om bildformatet är inställt på 'Anpassa bildformat'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VIEWPORT_CUSTOM_HEIGHT,
   "Anpassa bildformat (Höjd)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VIEWPORT_CUSTOM_HEIGHT,
   "Anpassad visningsporthöjd som används om bildformatet är inställt på 'Anpassa bildformat'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_CROP_OVERSCAN,
   "Beskär överskanning (omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_CROP_OVERSCAN,
   "Beskär några pixlar runt skärmens kant, som vanligen lämnas tomma av utvecklare och som ibland också innehåller skräppixlar."
   )

/* Settings > Video > HDR */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HDR_ENABLE,
   "Aktivera HDR"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HDR_ENABLE,
   "Aktivera HDR om skärmen stöder det."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HDR_MAX_NITS,
   "Högsta ljusstyrka"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HDR_MAX_NITS,
   "Ställ in den högsta ljusstyrka (i cd/m2) som bildskärmen kan reproducera. Se bruksanvisning för bildskärmens högsta ljusstyrka."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HDR_PAPER_WHITE_NITS,
   "Pappersvitt ljusstyrka"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HDR_PAPER_WHITE_NITS,
   "Ställ in ljusstyrka vid vilken vitt papper ska vara, nämligen läsbar text eller ljusstyrka överst i SDR (Standard Dynamic Range). Användbar för att anpassa till olika ljusförhållanden i din miljö."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HDR_CONTRAST,
   "Kontrast"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HDR_CONTRAST,
   "Gamma/kontrastkontroll för HDR. Tar färgerna och ökar det totala intervallet mellan de ljusaste och mörkaste delarna av bilden. Ju högre HDR-kontrasten är, desto större blir denna skillnad, medan ju lägre kontrasten är, desto mer urtvättad blir bilden. Hjälper användarna att ställa in bilden efter deras smak och vad de tycker ser bäst ut på deras display."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HDR_EXPAND_GAMUT,
   "Expandera Gamma"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HDR_EXPAND_GAMUT,
   "När färgrymden har konverterats till linjär rymd, bestäm om ett utökat färgomfång ska användas för att komma till HDR10."
   )

/* Settings > Video > Synchronization */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_VSYNC,
   "Vertikal synkronisering (Vsync)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_VSYNC,
   "Synkronisera videoutmatningen från grafikkortet till bildskärmens uppdateringsfrekvens. Rekommenderas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SWAP_INTERVAL,
   "VSynk bytesintervall"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SWAP_INTERVAL,
   "Använd ett anpassat bytesintervall för VSynk. Minskar effektivt bildskärmens uppdateringsfrekvens med den angivna faktorn. 'Auto' ställer in faktorn baserat på kärnrapporterad bildhastighet, vilket ger förbättrad bildtakt när du kör t.ex. 30 fps innehåll på en 60 Hz skärm eller 60 fps innehåll på en 120 Hz skärm."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ADAPTIVE_VSYNC,
   "Adaptiv VSynk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ADAPTIVE_VSYNC,
   "VSync är aktiverat tills prestandan sjunker under den önskade uppdateringsfrekvensen. Kan minimera hackighet när prestandan sjunker under realtid och vara mer energieffektivt. Inte kompatibelt med ”Bildrutefördröjning”."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FRAME_DELAY,
   "Bildrutefördröjning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FRAME_DELAY,
   "Minskar latensen på bekostnad av en högre risk för att videon hackar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_FRAME_DELAY,
   "Ställer in hur många millisekunder som ska sovas innan kärnan körs efter videopresentation. Minskar latensen på bekostnad av högre risk för stuttering.\nVärden 20 och högre behandlas som procentandelar för bildtid."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FRAME_DELAY_AUTO,
   "Automatisk bildfördröjning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FRAME_DELAY_AUTO,
   "Justera effektiv 'Bildrutefördröjning' dynamiskt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_FRAME_DELAY_AUTO,
   "Försök att hålla önskat mål för 'Bildrutefördröjning' och minimera bildförluster. Utgångspunkten är 3/4 av bildrutans tid när bildfördröjningen är 0 (Auto)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FRAME_DELAY_EFFECTIVE,
   "effektiv"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HARD_SYNC,
   "Hård GPU-synk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HARD_SYNC,
   "Hårdsynkronisera CPU och GPU. Minskar latens på bekostnad av prestanda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_HARD_SYNC_FRAMES,
   "Hård GPU-synk Bildrutor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_HARD_SYNC_FRAMES,
   "Ställ in hur många bildrutor CPUn kan köra före GPUn när 'Hård GPU-synk' används."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_HARD_SYNC_FRAMES,
   "Ställer in hur många bildrutor CPU:n kan köra i förväg för GPU:n när ”Hård GPU-synk” används. Max är 3.\n 0: Synkronisera med GPU omedelbart.\n 1: Synkronisera med föregående bildruta.\n 2: Etc ..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VRR_RUNLOOP_ENABLE,
   "Synkronisera exakt till innehålls bildhastighet (G-syn, FreeSync)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VRR_RUNLOOP_ENABLE,
   "Ingen avvikelse från kärnans efterfrågade timing. Använd för skärmar med variabel uppdateringsfrekvens (G-sync, FreeSync, HDMI 2.1 VRR)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VRR_RUNLOOP_ENABLE,
   "Synkronisera till exakt innehållsframerate. Det här alternativet motsvarar att tvinga fram x1-hastighet samtidigt som snabbspolning tillåts. Ingen avvikelse från den begärda uppdateringsfrekvensen, inget ljud Dynamic Rate Control."
   )

/* Settings > Audio */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_OUTPUT_SETTINGS,
   "Utmatning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_OUTPUT_SETTINGS,
   "Ändra inställningar för ljudutgången."
   )
#ifdef HAVE_MICROPHONE
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_SETTINGS,
   "Mikrofon"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_SETTINGS,
   "Ändra inställningar för ljudingången."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_SETTINGS,
   "Omsamplare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_SETTINGS,
   "Ändra inställningar för ljud omsamplare."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SYNCHRONIZATION_SETTINGS,
   "Synkronisering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SYNCHRONIZATION_SETTINGS,
   "Ändra inställningar för ljudsynkronisering."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_SETTINGS,
   "Ändra inställningar för MIDI."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_SETTINGS,
   "Ändra inställningar för ljudmixer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUNDS,
   "Menyljud"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SOUNDS,
   "Ändra inställningar för menyljud."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MUTE,
   "Tysta"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MUTE,
   "Stäng av ljudet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_MUTE,
   "Mixer Tyst"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_MUTE,
   "Stäng av ljudet från mixer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESPECT_SILENT_MODE,
   "Respektera tyst läge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESPECT_SILENT_MODE,
   "Stäng av allt ljud i tyst läge."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_FASTFORWARD_MUTE,
   "Tyst ljud vid snabbspolning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_FASTFORWARD_MUTE,
   "Stäng av ljudet automatiskt när snabbspolning framåt används."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_FASTFORWARD_SPEEDUP,
   "Uppsnabbat ljud vid snabbspolning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_FASTFORWARD_SPEEDUP,
   "Snabba upp ljudet vid snabbspolning framåt. Förhindrar knastrande men ändrar tonhöjd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_REWIND_MUTE,
   "Tyst ljud vid tillbakaspolning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_REWIND_MUTE,
   "Tysta ljudet automatiskt vid tillbakaspolning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_VOLUME,
   "Volymökning (dB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_VOLUME,
   "Ljudvolym (i dB). 0 dB är normal volym och ingen förstärkning tillämpas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_VOLUME,
   "Ljudvolym, uttryckt i dB. 0 dB är normal volym, där ingen förstärkning tillämpas. Förstärkningen kan kontrolleras under körning med Volym upp / Volym ner."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_MIXER_VOLUME,
   "Mixer-volymförstärkning (dB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MIXER_VOLUME,
   "Global ljudmixervolym (i dB). 0 dB är normal volym, och ingen förstärkning tillämpas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DSP_PLUGIN,
   "DSP-plugin"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DSP_PLUGIN,
   "Insticksmodul för DSP-ljud som bearbetar ljud innan det skickas till drivrutinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DSP_PLUGIN_REMOVE,
   "Ta bort DSP-insticksmodulen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DSP_PLUGIN_REMOVE,
   "Inaktiverar DSP-plugins som är aktiva."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_EXCLUSIVE_MODE,
   "WASAPI Exklusivt läge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_EXCLUSIVE_MODE,
   "Tillåt WASAPI-drivrutinen att ta exklusiv kontroll över ljudenheten. Om detta är inaktiverat kommer den att använda delat läge istället."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_FLOAT_FORMAT,
   "WASAPI Float-format"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_FLOAT_FORMAT,
   "Använd floatformat för WASAPI-drivrutinen, om det stöds av din ljudenhet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_WASAPI_SH_BUFFER_LENGTH,
   "WASAPI delad buffertlängd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_WASAPI_SH_BUFFER_LENGTH,
   "Mellanbuffertlängd (i rutor) vid användning av WASAPI-drivrutinen i delningsläge."
   )

/* Settings > Audio > Output */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_ENABLE,
   "Ljud"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_ENABLE,
   "Aktivera ljudutgång."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_DEVICE,
   "Enhet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_DEVICE,
   "Åsidosätt den förvalda ljudenheten som ljuddrivrutinen använder. Detta är beroende av drivrutinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DEVICE,
   "Åsidosätt den förvalda ljudenheten som ljuddrivrutinen använder. Detta är beroende av drivrutinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DEVICE_ALSA,
   "Anpassat PCM-enhetsvärde för ALSA-drivrutinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DEVICE_OSS,
   "Anpassat sökvägsvärde för OSS-drivrutinen (t.ex. /dev/dsp)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DEVICE_JACK,
   "Anpassat portnamnsvärde för JACK-drivrutinen (t.ex. system:playback1,system:playback_2)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_DEVICE_RSOUND,
   "Anpassad IP-adress för en RSound-server för RSound-drivrutinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_LATENCY,
   "Ljudfördröjning (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_LATENCY,
   "Maximal ljudfördröjning i millisekunder. Drivrutinen strävar efter att hålla den faktiska latensen på 50 % av detta värde. Det kan hända att värdet inte uppfylls om ljuddrivrutinen inte kan tillhandahålla den angivna latensen."
   )

#ifdef HAVE_MICROPHONE
/* Settings > Audio > Input */
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_ENABLE,
   "Mikrofon"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_ENABLE,
   "Aktivera ljudinmatning i kärnor som stöds. Har ingen overhead om kärnan inte använder en mikrofon."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_DEVICE,
   "Enhet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_DEVICE,
   "Åsidosätt den förvalda inmatningsenheten som mikrofondrivrutinen använder. Detta är beroende av drivrutinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_MICROPHONE_DEVICE,
   "Åsidosätt den förvalda inmatningsenheten som mikrofondrivrutinen använder. Detta är beroende av drivrutinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_RESAMPLER_QUALITY,
   "Omsamplarkvalitet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_RESAMPLER_QUALITY,
   "Sänk detta värde för att gynna prestanda/lägre latens över ljudkvalitet, öka för bättre ljudkvalitet på bekostnad av prestanda/lägre latens."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_INPUT_RATE,
   "Standard inmatningsfrekvens (Hz)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_INPUT_RATE,
   "Ljudinmatningens samplingsfrekvens, används om en kärna inte begär ett specifikt värde."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_LATENCY,
   "Latens ljudinmatning (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_LATENCY,
   "Önskad fördröjning för ljudinmatning i millisekunder. Kanske inte blir hedrad om mikrofondrivrutinen inte kan ge angiven fördröjning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_WASAPI_EXCLUSIVE_MODE,
   "WASAPI Exklusivt läge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_WASAPI_EXCLUSIVE_MODE,
   "Tillåt RetroArch att ta exklusiv kontroll över mikrofonenheten när WASAPI-mikrofondrivrutinen används. Om inaktiverad kommer RetroArch att använda delat läge istället."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_WASAPI_FLOAT_FORMAT,
   "WASAPI Float-format"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_WASAPI_FLOAT_FORMAT,
   "Använd inmatning med flyttal för WASAPI-drivrutinen, om detta stöds av din ljudenhet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MICROPHONE_WASAPI_SH_BUFFER_LENGTH,
   "WASAPI delad buffertlängd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MICROPHONE_WASAPI_SH_BUFFER_LENGTH,
   "Mellanbuffertlängd (i rutor) vid användning av WASAPI-drivrutinen i delningsläge."
   )
#endif

/* Settings > Audio > Resampler */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RESAMPLER_QUALITY,
   "Omsamplarkvalitet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RESAMPLER_QUALITY,
   "Sänk detta värde för att gynna prestanda/lägre latens över ljudkvalitet, öka för bättre ljudkvalitet på bekostnad av prestanda/lägre latens."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_OUTPUT_RATE,
   "Utmatningsfrekvens (Hz)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_OUTPUT_RATE,
   "Samplingsfrekvens för ljudutgång."
   )

/* Settings > Audio > Synchronization */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_SYNC,
   "Synkronisering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_SYNC,
   "Synkronisera ljud. Rekommenderas."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_MAX_TIMING_SKEW,
   "Den maximala förändringen i ljudinmatningshastighet. Om du ökar detta möjliggörs mycket stora förändringar i timing på bekostnad av en felaktig ljudtonhöjd (t.ex. körning av PAL-kärnor på NTSC-skärmar)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_MAX_TIMING_SKEW,
   "Maximum audio timing skew.\nDefinierar den maximala förändringen i ingångshastighet. Du kanske vill öka detta för att möjliggöra mycket stora förändringar i timing, till exempel att köra PAL-kärnor på NTSC-skärmar, på bekostnad av felaktig ljudhöjd.\nIngångshastighet definieras som:\ninput rate * (1,0 +/- (max timing skew))"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_RATE_CONTROL_DELTA,
   "Dynamisk ljudfrekvenskontroll"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_RATE_CONTROL_DELTA,
   "Hjälper till att jämna ut brister i timing när ljud och video synkroniseras. Tänk på att korrekt synkronisering är nästan omöjlig att få till om den är inaktiverad."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUDIO_RATE_CONTROL_DELTA,
   "Om detta värde sätts till 0 inaktiveras hastighetskontrollen. Alla andra värden styr delta för ljudfrekvensreglering.\nDefinierar hur mycket ingångsfrekvensen kan justeras dynamiskt. Inmatningshastigheten definieras som:\\inmatningshastighet * (1,0 +/- (hastighetskontroll delta))"
   )

/* Settings > Audio > MIDI */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_INPUT,
   "Inmatning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_INPUT,
   "Välj inmatningsenhet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_MIDI_INPUT,
   "Ställer in inmatningsenhet (drivrutinspecifik). När den är inställd på 'Off' kommer MIDI-ingången att inaktiveras. Enhetsnamn kan också skrivas in."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_OUTPUT,
   "Utmatning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_OUTPUT,
   "Välj utmatningsenhet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_MIDI_OUTPUT,
   "Ställer in utmatningsenhet (drivrutinsspecifik). När den är inställd på 'Off' kommer MIDI-utgången att inaktiveras. Enhetsnamn kan också skrivas in.\nNär MIDI-utgång är aktiverad och kärna och spel/app stöder MIDI-utgång, kommer en del eller alla ljud (beroende på spel/app) att genereras av MIDI-enhet. I händelse av 'null' MIDI-drivrutin betyder detta att dessa ljud inte kommer att höras."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIDI_VOLUME,
   "Volym"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIDI_VOLUME,
   "Ange utmatningsvolym (%)."
   )

/* Settings > Audio > Mixer Settings > Mixer Stream */

MSG_HASH(
   MENU_ENUM_LABEL_MIXER_STREAM,
   "Mixer ström #%d: %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY,
   "Spela"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY,
   "Kommer att starta uppspelningen av ljudströmmen. När det är klart kommer det att ta bort den aktuella ljudströmmen från minnet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY_LOOPED,
   "Spela (Loopad)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY_LOOPED,
   "Kommer att starta uppspelningen av ljudströmmen. När den är klar kommer den att loopa och spela upp spåret igen från början."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_PLAY_SEQUENTIAL,
   "Spela (Sekventiell)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_PLAY_SEQUENTIAL,
   "Kommer att starta uppspelningen av ljudströmmen. När den är klar, hoppar den till nästa ljudström i sekventiell ordning och upprepar detta beteende. Användbar som uppspelningsläge för album."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_STOP,
   "Stopp"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_STOP,
   "Detta kommer att stoppa uppspelningen av ljudströmmen, men inte ta bort den från minnet. Den kan startas igen genom att välja 'Spela'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_REMOVE,
   "Ta bort"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_REMOVE,
   "Detta kommer att stoppa uppspelningen av ljudströmmen och ta bort den helt från minnet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MIXER_ACTION_VOLUME,
   "Volym"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MIXER_ACTION_VOLUME,
   "Justera volymen på ljudströmmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_STREAM_STATE_NONE,
   "Tillstånd: Inte tillgängligt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_STREAM_STATE_STOPPED,
   "Tillstånd: Stoppad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_STREAM_STATE_PLAYING,
   "Tillstånd: Spelar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_STREAM_STATE_PLAYING_LOOPED,
   "Tillstånd: Spelar (slinga)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_STREAM_STATE_PLAYING_SEQUENTIAL,
   "Tillstånd: Spelar (sekventiellt)"
   )

/* Settings > Audio > Menu Sounds */

MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_ENABLE_MENU,
   "Spela samtidiga ljudströmmar även i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_OK,
   "Aktivera för 'OK'"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_CANCEL,
   "Aktivera för 'Avbryt'"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_NOTICE,
   "Aktivera för 'Meddelande'"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_BGM,
   "Aktivera för 'BGM'"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SOUND_SCROLL,
   "Aktivera för 'Scroll'"
   )

/* Settings > Input */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MAX_USERS,
   "Max användare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MAX_USERS,
   "Maximalt antal användare som stöds av RetroArch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR,
   "Pollningsbeteende (omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_POLL_TYPE_BEHAVIOR,
   "Påverkar hur inmatningspollning görs i RetroArch. Om du ställer in den på ”Tidig” eller ”Sen” kan det resultera i mindre fördröjning, beroende på din konfiguration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_INPUT_POLL_TYPE_BEHAVIOR,
   "Påverkar hur input polling utförs i RetroArch.\nEarly - Input polling utförs innan ramen bearbetas.\nNormal - Input polling utförs när polling begärs.\nLate - Input polling utförs vid första begäran om inputstatus per ram.\nAtt ställa in den på 'Early' eller 'Late' kan resultera i mindre latens, beroende på din konfiguration. Kommer att ignoreras när du använder netplay."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_REMAP_BINDS_ENABLE,
   "Mappa om kontroller för denna kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_REMAP_BINDS_ENABLE,
   "Åsidosätt nuvarande med de ommappade bindningarna för den nuvarande kärnan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTODETECT_ENABLE,
   "Autokonfig"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_AUTODETECT_ENABLE,
   "Konfigurerar automatiskt spelkontroller som har en profil, Plug-and-Play-stil."
   )
#if defined(HAVE_DINPUT) || defined(HAVE_WINRAWINPUT)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_NOWINKEY_ENABLE,
   "Inaktivera Windows-snabbtangenter (omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_NOWINKEY_ENABLE,
   "Behåll kombinationer med Win-tangenten inuti programmet."
   )
#endif
#ifdef ANDROID
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SELECT_PHYSICAL_KEYBOARD,
   "Välj fysiskt tangentbord"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_SELECT_PHYSICAL_KEYBOARD,
   "Använd denna enhet som ett fysiskt tangentbord och inte som en spelkontroll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_INPUT_SELECT_PHYSICAL_KEYBOARD,
   "Om RetroArch identifierar ett hårdvarutangentbord som någon form av gamepad, kan den här inställningen användas för att tvinga RetroArch att behandla den felidentifierade enheten som ett tangentbord.\nDetta kan vara användbart om du försöker emulera en dator i någon Android TV-enhet och även äger ett fysiskt tangentbord som kan fästas på lådan."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SENSORS_ENABLE,
   "Hjälpsensorinmatning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_SENSORS_ENABLE,
   "Aktivera inmatning från accelerometer, gyroskop och belysningsstyrka sensorer, om det stöds av den aktuella hårdvaran. Kan påverka prestanda och/eller öka strömförbrukningen på vissa plattformar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTO_MOUSE_GRAB,
   "Fånga muspekaren automatiskt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_AUTO_MOUSE_GRAB,
   "Aktivera automatiskt greppad mus vid applikationsfokus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTO_GAME_FOCUS,
   "Automatiskt 'Game Focus'-läge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_AUTO_GAME_FOCUS,
   "Aktivera alltid 'Game Focus' -läget när innehåll startar eller återupptas. När inställt på \"Detektera\" kommer alternativet att aktiveras om kärnan implementerar frontens-tangentbordsåteruppringningsfunktioner."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTO_GAME_FOCUS_OFF,
   "AV"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTO_GAME_FOCUS_ON,
   "PÅ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_AUTO_GAME_FOCUS_DETECT,
   "Detektera"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAUSE_ON_DISCONNECT,
   "Pausa Innehåll när spelkontroll kopplas från"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PAUSE_ON_DISCONNECT,
   "Pausa innehållet när någon spelkontroll kopplas från. Återuppta med Start."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BUTTON_AXIS_THRESHOLD,
   "Hur långt en spak måste lutas för att resultera i en knapptryckning vid användning av 'Analog till Digital'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_DEADZONE,
   "Analog dödzon"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_ANALOG_DEADZONE,
   "Ignorera analoga spakrörelser under dödzon-värde."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_SENSITIVITY,
   "Analog känslighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_ANALOG_SENSITIVITY,
   "Justera känsligheten för analoga spakar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_TIMEOUT,
   "Bind tidsgräns"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BIND_TIMEOUT,
   "Antal sekunder att vänta för att gå vidare till nästa bindning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_HOLD,
   "Intryckt vid bind"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BIND_HOLD,
   "Antal sekunder att behålla en inmatning intryckt för att binda den."
   )
MSG_HASH(
   MSG_INPUT_BIND_PRESS,
   "Tryck på tangentbord, mus eller spelkontroll"
   )
MSG_HASH(
   MSG_INPUT_BIND_RELEASE,
   "Släpp tangenter och knappar!"
   )
MSG_HASH(
   MSG_INPUT_BIND_TIMEOUT,
   "Tidsgräns"
   )
MSG_HASH(
   MSG_INPUT_BIND_HOLD,
   "Håll in"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_ENABLE,
   "Turbo-avfyrning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_PERIOD,
   "Turboperiod"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TURBO_DUTY_CYCLE_HALF,
   "Halv period"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_MODE,
   "Turboläge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_MODE,
   "Välj det allmänna beteendet för turbo-läget."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TURBO_MODE_CLASSIC,
   "Klassisk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TURBO_MODE_CLASSIC_TOGGLE,
   "Klassisk (växla)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TURBO_MODE_SINGLEBUTTON,
   "Singel knapp (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TURBO_MODE_SINGLEBUTTON_HOLD,
   "Singel knapp (Intryckt)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_TURBO_MODE_CLASSIC,
   "Klassiskt läge, manövrering med två knappar. Håll in en knapp och tryck på Turbo-knappen för att aktivera tryck-släpp-sekvensen.\nTurbo-bindning kan tilldelas i Inställningar/Inmatning/Port X Controls."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_TURBO_MODE_CLASSIC_TOGGLE,
   "Klassiskt växlingsläge, tvåknappsmanövrering. Håll in en knapp och tryck på Turbo-knappen för att aktivera turbo för den knappen. För att inaktivera turbo: håll in knappen och tryck på Turbo-knappen igen.\nTurbo-bindning kan tilldelas i Inställningar/Inmatning/Port X Controls."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_TURBO_MODE_SINGLEBUTTON,
   "Växlingsläge. Tryck en gång på Turbo-knappen för att aktivera trycksekvensen för den valda standardknappen, tryck en gång till för att stänga av den.\nTurbo-bindning kan tilldelas i Inställningar/Inmatning/Port X Controls."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_TURBO_MODE_SINGLEBUTTON_HOLD,
   "Håll-läge. Tryck-släpp-sekvensen för den valda standardknappen är aktiv så länge som Turbo-knappen hålls nedtryckt.\nTurbo-bindning kan tilldelas i Inställningar/Inmatning/Port X Controls.\nFör att efterlikna autofire-funktionen från hemdatortiden, ställ in Bindning och Knapp på samma styrspaksavfyrningsknapp."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_BIND,
   "Turbo-bindning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_BIND,
   "Turbo aktiverar RetroPad-bindning. Tom använder den portspecifika bindningen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_BUTTON,
   "Turbo-knapp"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_ALLOW_DPAD,
   "Om den är aktiverad kan digitala riktningsinmatningar (även kända som d-pad eller ”hatswitch”) vara turbo."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO_FIRE_SETTINGS,
   "Turbo-avfyrning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TURBO_FIRE_SETTINGS,
   "Ändra inställningar för turboavtryckare."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HAPTIC_FEEDBACK_SETTINGS,
   "Haptisk feedback/vibration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_HAPTIC_FEEDBACK_SETTINGS,
   "Ändra inställningar för haptisk feedback och vibration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MENU_SETTINGS,
   "Menykontroller"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MENU_SETTINGS,
   "Ändra inställningar för menykontroller."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HOTKEY_BINDS,
   "Kortkommandon"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_HOTKEY_BINDS,
   "Ändra inställningar och tilldelningar för snabbtangenter, som att visa/dölja menyn under spel."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_RETROPAD_BINDS,
   "RetroPad-bindningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_RETROPAD_BINDS,
   "Ändra hur den virtuella RetroPad mappas till en fysisk inmatningsenhet. Om en inmatningsenhet känns igen och automatiskt konfigurerad på rätt sätt behöver användare förmodligen inte använda den här menyn.\nOBS: För kärnspecifika ändringar, använd 'Spelkontroller' i Snabbmenyn istället."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_INPUT_RETROPAD_BINDS,
   "Libretro använder en virtuell gamepad-abstraktion känd som \"RetroPad\" för att kommunicera från frontends (som RetroArch) till kärnor och vice versa. Den här menyn bestämmer hur den virtuella RetroPad mappas till de fysiska inmatningsenheterna och vilka virtuella ingångsportar dessa enheter upptar.\nOm en fysisk inmatningsenhet känns igen och autokonfigureras korrekt, behöver användare förmodligen inte använda den här menyn alls, och för kärnspecifika ändringar, använd 'Spelko[...]"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_USER_BINDS,
   "Port %u kontroller"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_USER_BINDS,
   "Ändra hur den virtuella RetroPad är mappad till den fysiska inmatningsenhet för denna virtuella port."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_USER_REMAPS,
   "Ändra kärnspecifika inmatningsmappningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ANDROID_INPUT_DISCONNECT_WORKAROUND,
   "Åtgärd för Android kopplas från"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ANDROID_INPUT_DISCONNECT_WORKAROUND,
   "Lösning för kontroller som kopplas bort och återansluts. Förhindrar 2 spelare med identiska kontroller."
   )

/* Settings > Input > Haptic Feedback/Vibration */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIBRATE_ON_KEYPRESS,
   "Vibrera vid knapptryck"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ENABLE_DEVICE_VIBRATION,
   "Aktivera enhetsvibration (för kärnor som stöds)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_RUMBLE_GAIN,
   "Vibrationsstyrka"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_RUMBLE_GAIN,
   "Ange storleken på haptiska återkopplingseffekter."
   )

/* Settings > Input > Menu Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_UNIFIED_MENU_CONTROLS,
   "Enhetliga menykontroller"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_UNIFIED_MENU_CONTROLS,
   "Använd samma spelkontroller för både menyn och spelet. Gäller tangentbordet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DISABLE_INFO_BUTTON,
   "Inaktivera info-knapp"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DISABLE_INFO_BUTTON,
   "Förhindra menyinformationsfunktion."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DISABLE_SEARCH_BUTTON,
   "Inaktivera Sökknapp"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DISABLE_SEARCH_BUTTON,
   "Förhindra menysökningsfunktion."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DISABLE_LEFT_ANALOG_IN_MENU,
   "Inaktivera vänster analog i meny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DISABLE_LEFT_ANALOG_IN_MENU,
   "Förhindra inmatning från analog spak i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DISABLE_RIGHT_ANALOG_IN_MENU,
   "Inaktivera höger analog i meny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DISABLE_RIGHT_ANALOG_IN_MENU,
   "Förhindra högerspaksinmatning för menyn. Höger analogspak växlar miniatyrbilder i spellistor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_INPUT_SWAP_OK_CANCEL,
   "Skifta OK/Avbryt-knappen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_INPUT_SWAP_OK_CANCEL,
   "Byt plats på OK/Avbryt-knappen. Inaktiv är det Japansk knapporientering, aktiv är det Västerländsk."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_INPUT_SWAP_SCROLL,
   "Skifta menyns scroll-knappar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_INPUT_SWAP_SCROLL,
   "Byt plats på knapparna för att scrolla. Inaktiv scrollas 10 objekt med L/R och i alfabetisk ordning med L2/R2."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ALL_USERS_CONTROL_MENU,
   "Alla kontrollerar menyn"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_ALL_USERS_CONTROL_MENU,
   "Tillåt alla spelare att styra menyn. Inaktiverad kan endast spelare 1 styra menyn."
   )

/* Settings > Input > Hotkeys */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_ENABLE_HOTKEY,
   "Snabbknappsaktivering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_ENABLE_HOTKEY,
   "När tilldelad knapp för 'Snabbknappsaktivering' hålls nedtryckt identifieras snabbknappar. Det här möjliggör att spelkontrollsknappar kan användas till snabbknappsfunktioner utan att påverka normal inmatning. Tilldelad spelkontrollsknapp kommer inte krävas, men kan användas, för aktivering av tangentbordssnabbknappar och vice versa."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_ENABLE_HOTKEY,
   "Är 'Snabbknappsaktivering' tilldelad, till antingen tangentbord, spelkontroll eller joystick, kommer snabbknappar endast vara aktiv medans tilldelad knapp hålls nedtryckt.\nDetta är användbart för RETRO_KEYBOARD-centrerade implementeringar som efterfrågar ett stort område av tangentbordet, där det inte är önskvärt att snabbknappar kommer i vägen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_HOTKEY_BLOCK_DELAY,
   "Snabbknappsfördröjning (Bildrutor)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_HOTKEY_BLOCK_DELAY,
   "Försena snabbknappsaktivering med antal bildrutor innan normal inmatning växlar till snabbknappsaktivering när tilldelad knapp hålls nedtryckt. Tillåter att knapp som redan tilldelats normal inmatning (t.ex. RetroPad 'Select') även tilldelas 'Snabbknappsaktivering'."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_HOTKEY_DEVICE_MERGE,
   "Blockera alla snabbtangenter från både tangentbord och kontrollerenheter om någon av dessa har ”Snabbknappsaktivering” inställt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MENU_ENUM_TOGGLE_GAMEPAD_COMBO,
   "Visa/dölj meny (spelkontroll kombo)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MENU_ENUM_TOGGLE_GAMEPAD_COMBO,
   "Spelkontrolls knappkombination för att visa/dölj menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_MENU_TOGGLE,
   "Visa/dölj meny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_MENU_TOGGLE,
   "Växlar den aktuella skärmen mellan meny och innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_QUIT_GAMEPAD_COMBO,
   "Avsluta (spelkontroll kombo)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_QUIT_GAMEPAD_COMBO,
   "Spelkontrollers knappkombination för att avsluta RetroArch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_QUIT_KEY,
   "Avsluta"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_QUIT_KEY,
   "Stänger RetroArch och ser till att alla sparade data och konfigurationsfiler sparas på hårddisken."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CLOSE_CONTENT_KEY,
   "Stäng Innehåll"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CLOSE_CONTENT_KEY,
   "Stänger aktuellt innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RESET,
   "Återställ innehåll"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RESET,
   "Startar om innehåll från början."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_KEY,
   "Snabbspola framåt (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FAST_FORWARD_KEY,
   "Växlar mellan snabb och normal hastighet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FAST_FORWARD_HOLD_KEY,
   "Snabbspola framåt (nedtryckt)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FAST_FORWARD_HOLD_KEY,
   "Tillämpar 'Snabbspola framåt' när den hålls nedtryckt. Innehåll återgår till normal hastighet när knapp släpps."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_KEY,
   "Slow motion (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SLOWMOTION_KEY,
   "Växlar mellan slow motion och normal hastighet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SLOWMOTION_HOLD_KEY,
   "Slow motion (nedtryckt)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SLOWMOTION_HOLD_KEY,
   "Tillämpar 'Slow motion' när den hålls nedtryckt. Innehåll återgår till normal hastighet när knapp släpps."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_REWIND,
   "Spola tillbaka"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_REWIND_HOTKEY,
   "Spolar tillbaka aktuellt innehåll medan knappen hålls intryckt. 'Spola tillbaka-stöd' måste vara aktiverat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_PAUSE_TOGGLE,
   "Pausa"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_PAUSE_TOGGLE,
   "Växlar innehåll mellan pausade och icke-pausade tillstånd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FRAMEADVANCE,
   "Avancera bildruta"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FRAMEADVANCE,
   "Avancerar innehållet med en bildruta när pausad."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_MUTE,
   "Ljud av"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_MUTE,
   "Slår på/av ljudutgången."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_UP,
   "Volym upp"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_VOLUME_UP,
   "Ökar utgående ljudvolymnivå."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_VOLUME_DOWN,
   "Volym ner"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_VOLUME_DOWN,
   "Minskar utgående ljudvolymnivå."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_LOAD_STATE_KEY,
   "Läs in tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_LOAD_STATE_KEY,
   "Läser in sparat tillstånd från aktuellt vald plats."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SAVE_STATE_KEY,
   "Spara tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SAVE_STATE_KEY,
   "Sparar tillståndet till den för närvarande valda platsen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_PLUS,
   "Nästa Spara tillstånd-plats"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_STATE_SLOT_PLUS,
   "Ökar index för att välja slot till att spara tillstånd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STATE_SLOT_MINUS,
   "Föregående Spara tillstånd-plats"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_STATE_SLOT_MINUS,
   "Minskar index för att välja slot till att spara tillstånd."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_EJECT_TOGGLE,
   "Mata skiva (In/Ut)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_DISK_EJECT_TOGGLE,
   "Om det virtuella skivfacket är stängt, öppnas det och den laddade skivan tas ut. Annars sätts skivan som är vald in och skivfacket stängs."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_NEXT,
   "Nästa skiva"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_DISK_NEXT,
   "Ökar det aktuellt valda skivindexet. Virtuellt skivfack måste vara öppet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_DISK_PREV,
   "Föregående skiva"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_DISK_PREV,
   "Minskar det aktuellt valda skivindexet. Virtuellt skivfack måste vara öppet."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_TOGGLE,
   "Shaders (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SHADER_TOGGLE,
   "Slår på/av den för närvarande valda shadern."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_HOLD,
   "Shaders (Håll)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SHADER_HOLD,
   "Håller den valda shadern på/av vid nedtryckt tangent."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_NEXT,
   "Nästa Shader"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SHADER_NEXT,
   "Läser in och tillämpar nästa shader-förvalsfil i roten av katalogen 'Video Shaders'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SHADER_PREV,
   "Föregående Shader"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SHADER_PREV,
   "Läser in och tillämpar föregående shader-förvalsfil i roten av katalogen 'Video Shaders'."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_TOGGLE,
   "Fusk (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_TOGGLE,
   "Skiftar på/av det valda fusket."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_PLUS,
   "Nästa Fusk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_INDEX_PLUS,
   "Ökar index till nästa fusk i listan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_INDEX_MINUS,
   "Föregående Fusk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_INDEX_MINUS,
   "Minskar index till föregående fusk i listan."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_SCREENSHOT,
   "Ta skärmdump"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_SCREENSHOT,
   "Tar en skärmdump av det aktuella innehållet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RECORDING_TOGGLE,
   "Inspelning (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RECORDING_TOGGLE,
   "Startar/stoppar inspelning av den aktuella sessionen till en lokal videofil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STREAMING_TOGGLE,
   "Streaming (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_STREAMING_TOGGLE,
   "Startar/stoppar stream av den aktuella sessionen till en online videoplattform."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_PLAY_REPLAY_KEY,
   "Spela repris"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_PLAY_REPLAY_KEY,
   "Spela reprisfilen från den för närvarande valda platsen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RECORD_REPLAY_KEY,
   "Spela in repris"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RECORD_REPLAY_KEY,
   "Spela in reprisfil till den för närvarande valda platsen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_HALT_REPLAY_KEY,
   "Stoppa Inspelning/Repris"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_HALT_REPLAY_KEY,
   "Stoppar inspelning/uppspelning av aktuell repris."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_TURBO_FIRE_TOGGLE,
   "Turboavfyrning (växla)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_TURBO_FIRE_TOGGLE,
   "Växlar turboavfyrning på/av."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_GRAB_MOUSE_TOGGLE,
   "Fånga muspekaren (växla)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_GRAB_MOUSE_TOGGLE,
   "Fångar eller släpper musen. När den fångas döljs systemmarkören och begränsas till RetroArch-visningsfönstret, vilket förbättrar relativ musinmatning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_GAME_FOCUS_TOGGLE,
   "Game Focus (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_GAME_FOCUS_TOGGLE,
   "Slår på/av läget ”Spelfokus”. När innehållet har fokus inaktiveras snabbtangenterna (alla tangentbordsdata skickas till den körande kärnan) och musen fångas upp."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FULLSCREEN_TOGGLE_KEY,
   "Helskärm (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FULLSCREEN_TOGGLE_KEY,
   "Växlar visningsläge mellan Helskärm och Fönster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_UI_COMPANION_TOGGLE,
   "Skrivbordsmeny (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_UI_COMPANION_TOGGLE,
   "Öppnar det kompletterande WIMP (Windows, Icons, Menus, Pointer) skrivbordsanvändargränssnittet."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_VRR_RUNLOOP_TOGGLE,
   "Synkronisera till exakt innehållsbildhastighet (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_VRR_RUNLOOP_TOGGLE,
   "Slår på/av synkronisering till exakt innehållsbildhastighet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RUNAHEAD_TOGGLE,
   "Förutse (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RUNAHEAD_TOGGLE,
   "Slår på/av Run-Ahead."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_PREEMPT_TOGGLE,
   "Förebyggande bildrutor (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_PREEMPT_TOGGLE,
   "Slår på/av Förebyggande bildrutor."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_FPS_TOGGLE,
   "Visa bildfrekvens (växla)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_FPS_TOGGLE,
   "Slår på/av statusindikatorn 'Bilder/s'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_STATISTICS_TOGGLE,
   "Visa Teknisk statistik (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_STATISTICS_TOGGLE,
   "Slår på/av visningen av teknisk statistik på skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_OSK,
   "Tangentbord överlager (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_OSK,
   "Slår på/av tangentbord överlagret."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_OVERLAY_NEXT,
   "Nästa Överlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_OVERLAY_NEXT,
   "Växlar till nästa tillgängliga layout för det för närvarande aktiva skärmöverlagring."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_AI_SERVICE,
   "AI-tjänst"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_AI_SERVICE,
   "Fångar en bild av aktuellt innehåll för att översätta och/eller läsa upp text på skärmen. 'AI-tjänst' måste vara aktiverad och konfigurerad."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_PING_TOGGLE,
   "Netplay Ping (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_NETPLAY_PING_TOGGLE,
   "Slår på/av pingräknaren för aktuellt Netplay."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_HOST_TOGGLE,
   "Netplay Hosting (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_NETPLAY_HOST_TOGGLE,
   "Slår på/av Netplay Hosting."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_GAME_WATCH,
   "Netplay Spela/Åskådare (På/Av)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_NETPLAY_GAME_WATCH,
   "Växlar aktuell Netplay session mellan lägena 'Spela' och 'Åskådare'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_NETPLAY_PLAYER_CHAT,
   "Netplay Spelarchatt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_NETPLAY_PLAYER_CHAT,
   "Skickar ett chattmeddelande till den aktuella Netplay sessionen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_NETPLAY_FADE_CHAT_TOGGLE,
   "Växlar mellan tonande eller statiska Netplay chattmeddelanden."
   )

/* Settings > Input > Port # Controls */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DEVICE_TYPE,
   "Enhetstyp"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DEVICE_TYPE,
   "Specificerar den emulerade spelkontrollstypen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ADC_TYPE,
   "Analog till Digital typ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_ADC_TYPE,
   "Använd angiven analog spak för D-Pad-inmatning. Läget 'Tvingad' åsidosätter den ursprungliga analoga inmatningen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_INPUT_ADC_TYPE,
   "Mappa angiven analog spak för D-Pad-inmatning.\nOm kärnan har inbyggt analogt stöd, kommer D-Pad-mappning att inaktiveras om inte alternativet '(Tvingad)' är valt.\nOm D-Pad-mappning är påtvingad kommer kärnan inte att få någon analog inmatning från angiven spak."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DEVICE_INDEX,
   "Enhetindex"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DEVICE_INDEX,
   "Den fysiska kontrollern som den känns igen av RetroArch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DEVICE_RESERVED_DEVICE_NAME,
   "Reserverad enhet för denna spelare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DEVICE_RESERVED_DEVICE_NAME,
   "Den här kontrollenheten kommer att tilldelas den här spelaren, enligt reservationsläget."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DEVICE_RESERVATION_NONE,
   "Ingen reservation"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DEVICE_RESERVATION_PREFERRED,
   "Föredragen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DEVICE_RESERVATION_RESERVED,
   "Reserverad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_DEVICE_RESERVATION_TYPE,
   "Typ av enhetsreservation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_DEVICE_RESERVATION_TYPE,
   "Föredragen: om angiven enhet finns, kommer den att allokeras till denna spelare. Reserverad: ingen annan styrenhet kommer att tilldelas för denna spelare."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_REMAP_PORT,
   "Mappad Port"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_REMAP_PORT,
   "Anger vilken kärnport som ska ta emot inmatning från frontend-kontrollerport %u."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_ALL,
   "Ställ in alla kontroller"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BIND_ALL,
   "Tilldela alla riktningar och knappar, en efter en, i den ordning de visas i den här menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BIND_DEFAULT_ALL,
   "Återställ grund kontroller"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BIND_DEFAULTS,
   "Nollställ bindningsinställningar för inmatningar till deras standardvärden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SAVE_AUTOCONFIG,
   "Spara spelkontrolls-profil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_SAVE_AUTOCONFIG,
   "Spara en autokonfigurationsfil som kommer att användas automatiskt när den här styrenheten upptäcks igen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_INDEX,
   "Musindex"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MOUSE_INDEX,
   "Den fysiska musen som den identifieras av RetroArch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_B,
   "B-knapp (Nedre)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_Y,
   "Y-knapp (Vänstra)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_SELECT,
   "Select-knapp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_START,
   "Start-knapp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_UP,
   "D-Pad Upp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_DOWN,
   "D-Pad Ner"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_LEFT,
   "D-Pad Vänster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_RIGHT,
   "D-Pad Höger"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_A,
   "A-knapp (Högra)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_X,
   "X-knapp (Övre)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L,
   "L-knapp (Axel)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R,
   "R-knapp (Axel)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L2,
   "L2-knapp (Trigger)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R2,
   "R2-knapp (Trigger)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_L3,
   "L3-knapp (Spak)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_JOYPAD_R3,
   "R3-knapp (Spak)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_PLUS,
   "Vänster Analog X+ (Höger)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X_MINUS,
   "Vänster Analog X- (Vänster)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_PLUS,
   "Vänster Analog Y+ (Ner)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y_MINUS,
   "Vänster Analog Y- (Upp)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_PLUS,
   "Höger Analog X+ (Höger)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X_MINUS,
   "Höger Analog X- (Vänster)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_PLUS,
   "Höger Analog Y+ (Ner)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y_MINUS,
   "Höger Analog Y- (Upp)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_TRIGGER,
   "Pistol Avtryckare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_RELOAD,
   "Ladda om pistol"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_A,
   "Pistol knapp A"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_B,
   "Pistol knapp B"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_AUX_C,
   "Pistol knapp C"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_START,
   "Pistol Start"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_SELECT,
   "Pistol Select"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_UP,
   "Pistol D-Pad Upp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_DOWN,
   "Pistol D-Pad Ner"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_LEFT,
   "Pistol D-Pad Vänster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_LIGHTGUN_DPAD_RIGHT,
   "Pistol D-Pad Höger"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TURBO,
   "Turbo-avfyrning"
   )

/* Settings > Latency */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_UNSUPPORTED,
   "[Run-Ahead inte tillgängligt]"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_UNSUPPORTED,
   "Den nuvarande kärnan är inte kompatibel med run-ahead på grund av bristande stöd för deterministisk sparning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_FRAMES,
   "Antal bildrutor för Run-Ahead"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_FRAMES,
   "Antalet bildrutor som ska köras i förväg (Run-Ahead). Orsakar problem i spelet, t. ex. hackighet, om antalet fördröjda bildrutor i spelet överskrids."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUNAHEAD_MODE,
   "Kör ytterligare kärnlogik för att minska latenstiden. Enstaka instans körs till en framtida bildruta och laddar sedan om det aktuella tillståndet. Andra instans behåller en kärninstans för enbart video i en framtida bildruta för att undvika problem med ljudstatus. Preemptive Frames kör tidigare bildrutor med ny indata när det behövs, för effektivitet."
   )
#if !(defined(HAVE_DYNAMIC) || defined(HAVE_DYLIB))
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUNAHEAD_MODE_NO_SECOND_INSTANCE,
   "Kör ytterligare kärnlogik för att minska latenstiden. Enstaka instans körs till en framtida bildruta och läser sedan om det aktuella tillståndet. Preemptive Frames kör tidigare bildrutor med ny indata när det behövs, för effektivitet."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUNAHEAD_MODE_SINGLE_INSTANCE,
   "Enstaka instansläge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUNAHEAD_MODE_SECOND_INSTANCE,
   "Läge för andra instans"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_AHEAD_HIDE_WARNINGS,
   "Dölj varningar för Run-Ahead"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN_AHEAD_HIDE_WARNINGS,
   "Dölj varningsmeddelandet som visas när du använder Run-Ahead och kärnan inte har stöd för sparade tillstånd."
   )

/* Settings > Core */

MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHARED_CONTEXT,
   "Ge hårdvarurenderade kärnor en egen privat kontext. Undviker att behöva anta att hårdvaran ändrar tillstånd mellan bildrutor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DRIVER_SWITCH_ENABLE,
   "Tillåt kärnor att byta videodrivrutin"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DRIVER_SWITCH_ENABLE,
   "Tillåt kärnor att byta till en annan videodrivrutin än den som för närvarande är laddad."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DUMMY_ON_CORE_SHUTDOWN,
   "Läs in dummy när kärnan stänger ner"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DUMMY_ON_CORE_SHUTDOWN,
   "Vissa kärnor har en avstängningsfunktion, att ladda en dummykärna förhindrar att RetroArch stängs av."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_DUMMY_ON_CORE_SHUTDOWN,
   "Vissa kärnor kan ha en avstängningsfunktion. Om det här alternativet lämnas inaktiverat, skulle valet av avstängningsproceduren utlösa att RetroArch stängs av.\nAtt aktivera det här alternativet kommer att ladda en dummykärna istället så att vi stannar kvar i menyn och RetroArch stängs inte av."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SET_SUPPORTS_NO_CONTENT_ENABLE,
   "Starta en kärna automatiskt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHECK_FOR_MISSING_FIRMWARE,
   "Kontrollera firmware före laddning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHECK_FOR_MISSING_FIRMWARE,
   "Kontrollera om all nödvändig firmware finns innan försök att ladda innehållet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_CHECK_FOR_MISSING_FIRMWARE,
   "Vissa kärnor kan behöva firmware eller BIOS-filer. Om det här alternativet är aktiverat tillåter RetroArch inte att kärnan startas om några obligatoriska firmware-objekt saknas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTION_CATEGORY_ENABLE,
   "Kategorier för kärnalternativ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTION_CATEGORY_ENABLE,
   "Tillåter kärnor att visa alternativ i kategoribaserade undermenyer. OBS: Kärnan måste laddas om för att ändringar ska börja gälla."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INFO_CACHE_ENABLE,
   "Behåller en ihållande lokal cache av installerad kärninformation. Minskar inläsningstiderna avsevärt på plattformar med långsam diskåtkomst."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INFO_SAVESTATE_BYPASS,
   "Kringgå kärninformationens funktioner för sparade tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INFO_SAVESTATE_BYPASS,
   "Anger om funktioner för att spara kärninformation ska ignoreras, vilket gör det möjligt att experimentera med relaterade funktioner (run ahead, spola tillbaka etc.)."
   )
#ifndef HAVE_DYNAMIC
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ALWAYS_RELOAD_CORE_ON_RUN_CONTENT,
   "Läs alltid om kärna när innehåll ska köras"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ALWAYS_RELOAD_CORE_ON_RUN_CONTENT,
   "Starta om RetroArch när innehåll startas, även när den begärda kärnan redan är laddad. Detta kan förbättra systemets stabilitet, på bekostnad av ökade laddningstider."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ALLOW_ROTATE,
   "Tillåt Rotation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_ALLOW_ROTATE,
   "Tillåt kärnor att ställa in rotationen. När den är inaktiverad ignoreras rotationsförfrågningar. Användbar för inställningar som manuellt roterar skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_MANAGER_LIST,
   "Hantera kärnor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_MANAGER_LIST,
   "Utför offlineunderhållsuppgifter på installerade kärnor (säkerhetskopiering, återställning, radering, etc.) och visa kärninformation."
   )
#ifdef HAVE_MIST
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_MANAGER_STEAM_LIST,
   "Hantera kärnor"
   )

MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_MANAGER_STEAM_LIST,
   "Installera/Avinstallera kärnor distribuerade via Steam."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_STEAM_INSTALL,
   "Installera kärna"
)

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_STEAM_UNINSTALL,
   "Avinstallera kärna"
)

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_CORE_MANAGER_STEAM,
   "Visa 'Hantera kärnor'"
)
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_CORE_MANAGER_STEAM,
   "Visa alternativet 'Hantera kärnor' i huvudmenyn."
)

MSG_HASH(
   MSG_CORE_STEAM_INSTALLING,
   "Installerar kärna: "
)

MSG_HASH(
   MSG_CORE_STEAM_UNINSTALLED,
   "Kärnan kommer att avinstallera när RetroArch avslutas."
)

MSG_HASH(
   MSG_CORE_STEAM_CURRENTLY_DOWNLOADING,
   "Kärnan hämtas ner för tillfället"
)
#endif
/* Settings > Configuration */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIG_SAVE_ON_EXIT,
   "Spara konfiguration vid Avsluta"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONFIG_SAVE_ON_EXIT,
   "Spara ändringar i konfigurationsfilen vid avslut."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_CONFIG_SAVE_ON_EXIT,
   "Spara ändringar i konfigurationsfilen vid avslut. Användbar för ändringar som görs i menyn. Skriver över konfigurationsfilen, #include's och kommentarer bevaras inte."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_SAVE_ON_EXIT,
   "Spara ommappningsfiler vid Avsluta"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_SAVE_ON_EXIT,
   "Spara ändringar i alla aktiva ommappningsfiler vid Stäng innehåll eller Avsluta RetroArch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS,
   "Läs in innehållsspecifika kärnalternativ automatiskt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_SPECIFIC_OPTIONS,
   "Läs in anpassade kärnalternativ som standard vid uppstart."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_OVERRIDES_ENABLE,
   "Läs automatiskt in åsidosättningsfiler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTO_OVERRIDES_ENABLE,
   "Läs in anpassad konfiguration vid uppstart."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_REMAPS_ENABLE,
   "Läs in ommappningsfiler automatiskt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTO_REMAPS_ENABLE,
   "Läs in anpassade kontroller vid uppstart."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INITIAL_DISK_CHANGE_ENABLE,
   "Läs in filer för initiala skivindex automatiskt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INITIAL_DISK_CHANGE_ENABLE,
   "Byt till senaste använda skivan vid start av flerskivsinnehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTO_SHADERS_ENABLE,
   "Läs in shaderförval automatiskt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GLOBAL_CORE_OPTIONS,
   "Använd global kärnalternativsfil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GLOBAL_CORE_OPTIONS,
   "Spara alla kärnalternativ i gemensam fil (retroarch-core-options.cfg). Inaktiverad kommer alternativ för varje kärna att skrivas till kärnspecifik fil i 'Konfigurationer'-katalogen."
   )

/* Settings > Saving */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVEFILES_ENABLE,
   "Sortera sparningar i mappar efter kärnnamn"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVEFILES_ENABLE,
   "Sortera sparade filer i mappar med namn efter använd kärna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVESTATES_ENABLE,
   "Sortera sparade tillstånd i mappar efter kärnnamn"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVESTATES_ENABLE,
   "Sortera sparade tillstånd i mappar med namn efter den använda kärnan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVEFILES_BY_CONTENT_ENABLE,
   "Sortera sparningar i mappar efter innehållskatalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVEFILES_BY_CONTENT_ENABLE,
   "Sortera sparade filer i mappar med namn efter katalogen som innehållet finns i."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SAVESTATES_BY_CONTENT_ENABLE,
   "Sortera sparade tillstånd i mappar efter innehållskatalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SAVESTATES_BY_CONTENT_ENABLE,
   "Sortera sparade tillstånd i mappar med namn efter den katalog där innehållet finns."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLOCK_SRAM_OVERWRITE,
   "Skriv inte över SaveRAM vid inläsning av sparat tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLOCK_SRAM_OVERWRITE,
   "Blockera SaveRAM från att skrivas över när sparade tillstånd läses in. Kan potentiellt innebära buggiga spel."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUTOSAVE_INTERVAL,
   "Intervall för autosparande av SaveRAM"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUTOSAVE_INTERVAL,
   "Spara automatiskt icke-flyktigt SaveRAM vid fasta intervaller (i sekunder)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_AUTOSAVE_INTERVAL,
   "Autosparar det icke-flyktiga SRAM-minnet med jämna mellanrum. Detta är inaktiverat som standard om inget annat anges. Intervallet mäts i sekunder. Ett värde på 0 inaktiverar autosparning."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REPLAY_CHECKPOINT_INTERVAL,
   "Automatisk bokmärkning av speltillstånd under uppspelning av inspelning med ett regelbundet intervall (i sekunder)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_REPLAY_CHECKPOINT_INTERVAL,
   "Sparar automatiskt speltillståndet under inspelning av repriser med ett regelbundet intervall. Detta är inaktiverat som standard om inget annat anges. Intervallet mäts i sekunder. Ett värde på 0 avaktiverar inspelning av kontrollpunkter."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_INDEX,
   "Öka sparat tillstånd-index automatiskt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_INDEX,
   "Innan ett sparat tillstånd skapas, ökas sparat tillstånd-index automatiskt. När innehåll laddas in kommer indexet att sättas till det högsta befintliga indexet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_MAX_KEEP,
   "Automatiskt ökande sparade tillstånd med maximalt antal att behålla"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_MAX_KEEP,
   "Begränsa antalet sparade tillstånd som kommer att skapas när 'Öka tillståndsindex automatiskt' är aktiverat. Om gränsen överskrids vid sparande av ett nytt tillstånd kommer det befintliga tillståndet med lägst index att raderas. Ett värde av '0' innebär att obegränsade tillstånd kommer att sparas."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REPLAY_MAX_KEEP,
   "Begränsa antalet uppspelningar som skapas när ”Increment Replay Index Automatically” är aktiverat. Om gränsen överskrids vid inspelning av en ny uppspelning raderas den befintliga uppspelningen med lägst index. Ett värde på ”0” innebär att obegränsat antal repriser spelas in."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_SAVE,
   "Autospara tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_SAVE,
   "Spara automatiskt när innehållet stängs. Detta sparade tillstånd läses in vid start om ”Läs in tillstånd automatiskt” är aktiverat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_AUTO_LOAD,
   "Läs in tillstånd automatiskt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_AUTO_LOAD,
   "Läser automatiskt in det automatiskt sparade tillståndet vid uppstart."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_THUMBNAIL_ENABLE,
   "Miniatyrer för sparade tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_THUMBNAIL_ENABLE,
   "Visa miniatyrer av sparade tillstånd i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_FILE_COMPRESSION,
   "Kompression för SaveRAM"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_FILE_COMPRESSION,
   "Skriv icke-flyktiga SaveRAM-filer i ett arkiverat format. Minskar filstorleken dramatiskt på bekostnad av (försumbart) ökade spar-/inläsningstider.\nGäller endast kärnor som möjliggör sparande via standardgränssnittet libretro SaveRAM."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_FILE_COMPRESSION,
   "Komprimera sparade tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_FILE_COMPRESSION,
   "Lagrar dina sparade tillståndsfiler i ett arkiverat format. Minskar dramatiskt filstorleken på bekostnad av längre spar- och inläsningstider."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SORT_SCREENSHOTS_BY_CONTENT_ENABLE,
   "Sortera skärmbilder i mappar efter innehållskatalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SORT_SCREENSHOTS_BY_CONTENT_ENABLE,
   "Sortera skärmbilder i mappar med namn efter katalogen som innehållet finns i."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVEFILES_IN_CONTENT_DIR_ENABLE,
   "Skriv sparningar till innehållskatalogen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVEFILES_IN_CONTENT_DIR_ENABLE,
   "Använd innehållskatalog som katalog för sparade filer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATES_IN_CONTENT_DIR_ENABLE,
   "Skriv sparade tillstånd till innehållskatalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATES_IN_CONTENT_DIR_ENABLE,
   "Använd innehållskatalog som katalog för sparade tillstånd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEMFILES_IN_CONTENT_DIR_ENABLE,
   "Systemfiler finns i innehållskatalogen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SYSTEMFILES_IN_CONTENT_DIR_ENABLE,
   "Använd innehållskatalog som katalog för system/BIOS."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREENSHOTS_IN_CONTENT_DIR_ENABLE,
   "Skriv skärmbilder till innehållskatalogen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREENSHOTS_IN_CONTENT_DIR_ENABLE,
   "Använd innehållskatalog som katalog för skärmbilder."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_RUNTIME_LOG,
   "Spara körtidslogg (per kärna)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_RUNTIME_LOG,
   "Håll reda på hur länge varje innehållspost har körts, med poster separerade efter kärna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_RUNTIME_LOG_AGGREGATE,
   "Spara körtidslogg (aggregerat)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_RUNTIME_LOG_AGGREGATE,
   "Håll reda på hur länge varje innehållsobjekt har körts, registrerat som den sammanlagda summan över alla kärnor."
   )

/* Settings > Logging */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_VERBOSITY,
   "Verbositet för loggning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_VERBOSITY,
   "Logga händelser till en terminal eller fil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRONTEND_LOG_LEVEL,
   "Loggningsnivå för Frontend"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRONTEND_LOG_LEVEL,
   "Ange loggnivå för frontend. Om en loggnivå som utfärdats av frontend är under detta värde, ignoreras den."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_LOG_LEVEL,
   "Loggningsnivå för kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_LOG_LEVEL,
   "Ange loggnivå för kärnor. Om en loggnivå som utfärdats av en kärna är under detta värde ignoreras den."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_LIBRETRO_LOG_LEVEL,
   "Ställer in loggnivån för libretro-kärnor (GET_LOG_INTERFACE). Om en loggnivå som utfärdas av en libretro-kärna är lägre än libretro_log-nivån ignoreras den. DEBUG-loggar ignoreras alltid om inte verbose-läget är aktiverat (--verbose).\nDEBUG = 0\nINFO = 1\nWARN = 2\nERROR = 3"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_VERBOSITY_DEBUG,
   "0 (Felsök)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_VERBOSITY_WARNING,
   "2 (Varning)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_VERBOSITY_ERROR,
   "3 (Fel)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_TO_FILE,
   "Logga till fil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_TO_FILE,
   "Omdirigera meddelanden i systemhändelseloggen till filen. Kräver att 'Logging Verbosity' är aktiverat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_TO_FILE_TIMESTAMP,
   "Tidsstämpla loggfiler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_TO_FILE_TIMESTAMP,
   "Vid loggning till fil, dirigera utdata från varje RetroArch session till en ny tidsstämplad fil. Inaktiverad skrivs loggen över varje gång RetroArch startas om."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PERFCNT_ENABLE,
   "Räkna körningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PERFCNT_ENABLE,
   "Körräknare för RetroArch och kärnor. Räknardata kan hjälpa till att fastställa systemets flaskhalsar och finjustera prestanda."
   )

/* Settings > File Browser */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_HIDDEN_FILES,
   "Visa dolda filer och mappar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_HIDDEN_FILES,
   "Visa dolda filer och kataloger i filbläddraren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NAVIGATION_BROWSER_FILTER_SUPPORTED_EXTENSIONS_ENABLE,
   "Filtrera okända filformat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NAVIGATION_BROWSER_FILTER_SUPPORTED_EXTENSIONS_ENABLE,
   "Filtrera filer som visas i filbläddraren till filändelser som stöds."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILTER_BY_CURRENT_CORE,
   "Filtrera efter kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FILTER_BY_CURRENT_CORE,
   "Filtrera filer som visas i filbläddraren efter aktuell kärna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_LAST_START_DIRECTORY,
   "Kom ihåg senaste använda startkatalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USE_LAST_START_DIRECTORY,
   "Öppna filbläddraren på den senast använda platsen när du laddar innehåll från startkatalogen. Obs: Platsen återställs till standard när RetroArch startas om."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_SUGGEST_ALWAYS,
   "Föreslå alltid kärnor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_SUGGEST_ALWAYS,
   "Föreslå tillgängliga kärnor även när en kärna redan har lästs in."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_BUILTIN_PLAYER,
   "Använd intern mediaspelare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USE_BUILTIN_IMAGE_VIEWER,
   "Använd inbyggd bildvisare"
   )

/* Settings > Frame Throttle */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_SETTINGS,
   "Spola tillbaka"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_REWIND,
   "Ändra inställningar för Spola tillbaka."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_SETTINGS,
   "Ändra inställningar som påverkar bildrutornas tidräknare.\nEndast aktivt när trådad video är inaktiverat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FASTFORWARD_RATIO,
   "Snabbspola framåt-hastighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FASTFORWARD_RATIO,
   "Den maximala hastighet med vilken innehållet körs när snabbspolning används (t.ex. 5.0x för innehåll med 60 bilder/s= 300 bildfrekvensgräns). Om den är inställd på 0.0x är snabbspolningsförhållandet obegränsat (ingen bildfrekvensgräns)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FASTFORWARD_RATIO,
   "Den maximala hastighet med vilken innehållet körs när snabbspolning används. (T.ex. 5.0 för 60 bilder/s innehåll => 300 bilder/s tak).\nRetroArch kommer att gå i viloläge för att säkerställa att den maximala hastigheten inte överskrids. Lita inte på att detta tak är helt korrekt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FASTFORWARD_FRAMESKIP,
   "Snabbspola framåt-bildrutsöverhopp"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FASTFORWARD_FRAMESKIP,
   "Hoppa över bildrutor enligt snabbspolningshastigheten. Detta sparar ström och möjliggör användning av bildrutebegränsning från tredje part."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SLOWMOTION_RATIO,
   "Slow motion hastighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SLOWMOTION_RATIO,
   "Den hastighet som innehållet spelas upp i när slowmotion används."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ENUM_THROTTLE_FRAMERATE,
   "Stryp menyns bildfrekvens"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_ENUM_THROTTLE_FRAMERATE,
   "Säkerställer att bildfrekvensen begränsas när du är inne i menyn."
   )

/* Settings > Frame Throttle > Rewind */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_ENABLE,
   "Spola tillbaka-stöd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_ENABLE,
   "Återgå till en tidigare punkt i den senaste spelningen. Detta orsakar en allvarlig prestandaförlust när du spelar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_GRANULARITY,
   "Spola tillbaka bildrutor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_GRANULARITY,
   "Antalet bildrutor som ska spolas tillbaka per steg. Högre värden ökar återspolningshastigheten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_BUFFER_SIZE,
   "Spola tillbaka Buffertstorlek (MB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_BUFFER_SIZE,
   "Den minnesmängd (i MB) som ska reserveras för återspolningsbufferten. Om du ökar detta kommer mängden återspolningshistorik att öka."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REWIND_BUFFER_SIZE_STEP,
   "Stegstorlek för återspolningsbuffert (MB)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REWIND_BUFFER_SIZE_STEP,
   "Varje gång som tillbakaspolningsbuffertens storleksvärde ökas eller minskas, kommer det att ändras med denna mängd."
   )

/* Settings > Frame Throttle > Frame Time Counter */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_FASTFORWARDING,
   "Nollställ efter snabbspolning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_FASTFORWARDING,
   "Nollställ bildtidsräknaren efter snabbspolning framåt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_LOAD_STATE,
   "Nollställ efter inläsning av tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_LOAD_STATE,
   "Nollställ bildruteräknaren efter att ett tillstånd har lästs in."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_TIME_COUNTER_RESET_AFTER_SAVE_STATE,
   "Återställ efter sparat tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAME_TIME_COUNTER_RESET_AFTER_SAVE_STATE,
   "Nollställ bildtidsräknaren efter sparning av ett tillstånd."
   )

/* Settings > Recording */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_QUALITY,
   "Inspelningskvalitet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_RECORDING_CUSTOM,
   "Anpassa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_RECORDING_LOW_QUALITY,
   "Låg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_RECORDING_HIGH_QUALITY,
   "Hög"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_RECORDING_LOSSLESS_QUALITY,
   "Förlustfri"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_RECORDING_WEBM_FAST,
   "WebM Snabb"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_RECORDING_WEBM_HIGH_QUALITY,
   "WebM Hög kvalitet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_CONFIG,
   "Anpassad inspelningskonfiguration"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_THREADS,
   "Inspelnings-trådar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_POST_FILTER_RECORD,
   "Använd inspelning med efterfilter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_POST_FILTER_RECORD,
   "Fånga bilden efter att filter (men inte shaders) har tillämpats. Videon kommer att se lika snygg ut som det du ser på din skärm."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GPU_RECORD,
   "Använd GPU-inspelning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_GPU_RECORD,
   "Spela in GPU-skuggade material om tillgängligt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAMING_MODE,
   "Streamingläge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_STREAMING_MODE_LOCAL,
   "Lokal"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_STREAMING_MODE_CUSTOM,
   "Anpassa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_STREAM_QUALITY,
   "Streamingkvalitet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_STREAMING_CUSTOM,
   "Anpassa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_STREAMING_LOW_QUALITY,
   "Låg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RECORD_CONFIG_TYPE_STREAMING_HIGH_QUALITY,
   "Hög"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAM_CONFIG,
   "Anpassad streamingkonfiguration"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STREAMING_TITLE,
   "Stream Titel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UDP_STREAM_PORT,
   "Stream UDP Port"
   )

/* Settings > On-Screen Display */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_OVERLAY_SETTINGS,
   "Skärmöverlagring"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_OVERLAY_SETTINGS,
   "Justera ramar och skärm-spelkontroller."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_VIDEO_LAYOUT_SETTINGS,
   "Videolayout"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_VIDEO_LAYOUT_SETTINGS,
   "Justera videolayout."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_NOTIFICATIONS_SETTINGS,
   "Skärmmeddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_NOTIFICATIONS_SETTINGS,
   "Hantera meddelanden som visas på skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ONSCREEN_NOTIFICATIONS_VIEWS_SETTINGS,
   "Synlighet för meddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ONSCREEN_NOTIFICATIONS_VIEWS_SETTINGS,
   "Slå på/av synligheten för specifika typer av meddelanden."
   )

/* Settings > On-Screen Display > On-Screen Overlay */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_ENABLE,
   "Visa Överlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_ENABLE,
   "Överlager används för kantramar och skärm-spelkontroller."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_BEHIND_MENU,
   "Visa överlager bakom meny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_BEHIND_MENU,
   "Visa överlager bakom inte framför meny."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_HIDE_IN_MENU,
   "Dölj Överlager i meny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_HIDE_IN_MENU,
   "Dölj överlager i meny och visa igen när meny stängs."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_HIDE_WHEN_GAMEPAD_CONNECTED,
   "Dölj överlager när spelkontroll är ansluten"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_HIDE_WHEN_GAMEPAD_CONNECTED,
   "Dölj överlager när en fysisk spelkontroll är ansluten till port 1, och visa igen när spelkontroll kopplas från."
   )
#if defined(ANDROID)
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_HIDE_WHEN_GAMEPAD_CONNECTED_ANDROID,
   "Dölj överlager när en fysisk spelkontroll är ansluten till port 1. Överlager visas inte automatiskt när spelkontroll kopplas från."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_INPUTS,
   "Visa inmatningar på överlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_SHOW_INPUTS,
   "Visa registrerade ingångar på överlägget på skärmen. ”Touched” markerar överläggselement som trycks/klickas på. ”Fysisk (styrenhet)” visar faktiska indata som skickas till kärnorna, vanligtvis från en ansluten styrenhet/tangentbord."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_INPUTS_PHYSICAL,
   "Fysiska (spelkontroller)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_INPUTS_PORT,
   "Visa inmatningar från Port"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_SHOW_MOUSE_CURSOR,
   "Visa muspekare med Överlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_SHOW_MOUSE_CURSOR,
   "Visa muspekaren när ett skärmöverlagring används."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_AUTO_ROTATE,
   "Autorotera Överlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_AUTO_ROTATE,
   "Om det stöds av aktuell överläggning, rotera automatiskt layouten så att den matchar skärmens orientering/bildförhållande."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_AUTO_SCALE,
   "Autoskalning Överlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_AUTO_SCALE,
   "Justera automatiskt överlagringsskalan och avståndet mellan element i användargränssnittet för att matcha skärmens bildförhållande. Ger bästa resultat med överkontrollör."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_DPAD_DIAGONAL_SENSITIVITY,
   "Diagonal känslighet för riktningsknappar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_DPAD_DIAGONAL_SENSITIVITY,
   "Justera storleken på de diagonala zonerna. Ställ in på 100% för 8-vägssymmetri."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_ABXY_DIAGONAL_SENSITIVITY,
   "Överlappningskänslighet för ABXY"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_ABXY_DIAGONAL_SENSITIVITY,
   "Justera storleken på överlappningszonerna i handlingsknappens diamant. Ställ in på 100% för 8-vägssymmetri."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_ANALOG_RECENTER_ZONE,
   "Analog återställningszon"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_ANALOG_RECENTER_ZONE,
   "Inmatningen för den analoga spaken kommer att vara relativ till första beröringen om den trycks in inom denna zon."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY,
   "Överlager"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_AUTOLOAD_PREFERRED,
   "Läs automatiskt in föredraget överlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_AUTOLOAD_PREFERRED,
   "Föredra inläsning av överlägg baserat på systemnamn innan det återgår till standardförinställningen. Ignoreras om en åsidosättning har angetts för förinställningen för överlägg."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_OPACITY,
   "Överlager opacitet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_OPACITY,
   "Opacitet för alla användargränssnittselement i överlägget."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_PRESET,
   "Förinställt Överlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_PRESET,
   "Välj ett överlägg från filbläddraren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SCALE_LANDSCAPE,
   "(Liggande) Skala för överlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_SCALE_LANDSCAPE,
   "Skala för alla användargränssnittselement i överlägget när du använder liggande bildskärmsorientering."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_ASPECT_ADJUST_LANDSCAPE,
   "(Liggande) Justera överläggsförhållande"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_ASPECT_ADJUST_LANDSCAPE,
   "Tillämpa en korrigeringsfaktor för bildförhållande på överlägget när du använder liggande bildskärmsorientering. Positiva värden ökar (medan negativa värden minskar) den effektiva överlagringsbredden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_SEPARATION_LANDSCAPE,
   "(Liggande) Horisontell separation för överlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_SEPARATION_LANDSCAPE,
   "Om det stöds av det aktuellt förvalet, justera avståndet mellan elementen i användargränssnittet i den vänstra och högra halvan av ett överlägg när du använder liggande visningsorienteringar. Positiva värden ökar (medan negativa värden minskar) separationen mellan de två halvorna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_SEPARATION_LANDSCAPE,
   "(Liggande) Vertikal separation för överlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_SEPARATION_LANDSCAPE,
   "Om det stöds av den aktuella förinställningen, justera avståndet mellan användargränssnittselementen i den övre och nedre halvan av ett överlägg när du använder liggande bildskärmsorientering. Positiva värden ökar (medan negativa värden minskar) separationen mellan de två halvorna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_OFFSET_LANDSCAPE,
   "(Liggande) X-förskjutning överlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_OFFSET_LANDSCAPE,
   "Horisontell förskjutning av överlägget när du använder liggande bildskärmsorientering. Positiva värden flyttar överlägget till höger, negativa värden till vänster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_OFFSET_LANDSCAPE,
   "(Liggande) Y-förskjutning överlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_OFFSET_LANDSCAPE,
   "Vertikal förskjutning av överlägget vid användning av liggande bildskärmsorientering. Positiva värden flyttar överlägget uppåt; negativa värden nedåt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SCALE_PORTRAIT,
   "(Stående) Skala för överlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_SCALE_PORTRAIT,
   "Skala för alla användargränssnittselement i överlägget när du använder stående bildskärmsorientering."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_ASPECT_ADJUST_PORTRAIT,
   "(Stående) Justera överläggsförhållande"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_ASPECT_ADJUST_PORTRAIT,
   "Tillämpa en korrigeringsfaktor för bildförhållande på överlägget när du använder stående bildskärmsorientering. Positiva värden ökar (medan negativa värden minskar) den effektiva höjden på överlägget."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_SEPARATION_PORTRAIT,
   "(Stående) Horisontell separation för överlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_SEPARATION_PORTRAIT,
   "Om det stöds av den aktuella förinställningen, justera avståndet mellan användargränssnittselementen i den vänstra och högra halvan av ett överlägg när du använder stående bildskärmsorientering. Positiva värden ökar (medan negativa värden minskar) separationen mellan de två halvorna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_SEPARATION_PORTRAIT,
   "(Stående) Vertikal separation för överlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_SEPARATION_PORTRAIT,
   "Om det stöds av den aktuella förinställningen, justera avståndet mellan användargränssnittselementen i den övre och nedre halvan av ett överlägg när du använder stående bildskärmsorientering. Positiva värden ökar (medan negativa värden minskar) separationen mellan de två halvorna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_X_OFFSET_PORTRAIT,
   "(Stående) X-förskjutning överlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_X_OFFSET_PORTRAIT,
   "Horisontell förskjutning av överlägget när du använder stående bildskärmsorientering. Positiva värden flyttar överlägget till höger, negativa värden till vänster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_Y_OFFSET_PORTRAIT,
   "(Stående) Y-förskjutning överlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_Y_OFFSET_PORTRAIT,
   "Vertikal förskjutning av överlägget vid användning av stående bildskärmsorientering. Positiva värden flyttar överlägget uppåt; negativa värden nedåt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OSK_OVERLAY_SETTINGS,
   "Tangentbordsöverlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OSK_OVERLAY_SETTINGS,
   "Välj och justera ett tangentbordsöverlager."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_POINTER_ENABLE,
   "Aktivera överlägg för ljuspistol, mus och pekare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_POINTER_ENABLE,
   "Använd alla pekinmatningar som inte trycker på överläggskontroller för att skapa pekenhetsinmatningar för kärnan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_LIGHTGUN_SETTINGS,
   "Överlägg ljuspistol"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_LIGHTGUN_SETTINGS,
   "Konfigurera ljuspistolens inmatning som skickas från överlägget."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_MOUSE_SETTINGS,
   "Överlägg mus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_MOUSE_SETTINGS,
   "Konfigurera musinmatning som skickas från överlägget. Obs: 1-, 2- och 3-fingertryckningar skickar vänster-, höger- och mittknappsklick."
   )

/* Settings > On-Screen Display > On-Screen Overlay > Keyboard Overlay */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OSK_OVERLAY_PRESET,
   "Förinställt tangentbordsöverlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OSK_OVERLAY_PRESET,
   "Välj ett tangentbordsöverlägg från filbläddraren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OSK_OVERLAY_AUTO_SCALE,
   "Auto-skala tangentbordsöverlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OSK_OVERLAY_AUTO_SCALE,
   "Justera tangentbordsöverlägret till dess ursprungliga bildformat. Inaktivera för att fylla skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OSK_OVERLAY_OPACITY,
   "Opacitet för tangentbordsöverlägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OSK_OVERLAY_OPACITY,
   "Opacitet för alla användargränssnittselement i tangentbordsöverlägget."
   )

/* Settings > On-Screen Display > On-Screen Overlay > Overlay Lightgun */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_LIGHTGUN_PORT,
   "Port för ljuspistol"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_LIGHTGUN_PORT_ANY,
   "Alla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_LIGHTGUN_TRIGGER_DELAY,
   "Avtryckarfördröjning (bildrutor)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_LIGHTGUN_TWO_TOUCH_INPUT,
   "Välj inmatning som ska skickas när två pekare är på skärmen. Utlösarfördröjning ska vara större än noll för att skilja från annan inmatning."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_LIGHTGUN_THREE_TOUCH_INPUT,
   "Välj inmatning som ska skickas när tre pekare är på skärmen. Utlösarfördröjning ska vara större än noll för att skilja från annan inmatning."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_LIGHTGUN_FOUR_TOUCH_INPUT,
   "Välj den inmatning som ska skickas när fyra pekare visas på skärmen. Utlösarfördröjningen bör vara inte vara noll för att skilja den från andra inmatningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_LIGHTGUN_ALLOW_OFFSCREEN,
   "Tillåt utanför skärmen"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_LIGHTGUN_ALLOW_OFFSCREEN,
   "Tillåt sikte utanför gränserna. Inaktivera för att begränsa sikte utanför skärmen till gränsen för spelområdet."
   )

/* Settings > On-Screen Display > On-Screen Overlay > Overlay Mouse */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_MOUSE_SPEED,
   "Mushastighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_MOUSE_SPEED,
   "Justera markörens rörelsehastighet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_MOUSE_HOLD_TO_DRAG,
   "Långt tryck för att dra"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_MOUSE_HOLD_TO_DRAG,
   "Tryck länge på skärmen för att börja hålla en knapp."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_MOUSE_HOLD_MSEC,
   "Tröskelvärde för lång tryckning (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_MOUSE_HOLD_MSEC,
   "Justera den hålltid som krävs för en lång tryckning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_MOUSE_DTAP_TO_DRAG,
   "Dubbeltryck för att dra"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_MOUSE_DTAP_TO_DRAG,
   "Dubbeltryck på skärmen för att börja hålla en knapp vid det andra trycket. Lägger till latens till musklick."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_OVERLAY_MOUSE_DTAP_MSEC,
   "Tröskelvärde för dubbeltryckning (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_OVERLAY_MOUSE_DTAP_MSEC,
   "Justera den tillåtna tiden mellan tryckningarna när en dubbeltryckning upptäcks."
   )

/* Settings > On-Screen Display > Video Layout */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_ENABLE,
   "Aktivera videolayout"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_ENABLE,
   "Videolayouter används för ramar och annan grafik."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_PATH,
   "Sökväg för videolayout"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_PATH,
   "Välj en videolayout från filbläddraren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_SELECTED_VIEW,
   "Vald vy"
   )
MSG_HASH( /* FIXME Unused */
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_SELECTED_VIEW,
   "Välj en vy inom den inlästa layouten."
   )

/* Settings > On-Screen Display > On-Screen Notifications */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_ENABLE,
   "Skärmmeddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_ENABLE,
   "Visa Skärm-meddelanden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGETS_ENABLE,
   "Grafikwidgetar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGETS_ENABLE,
   "Använd dekorerade animationer, meddelanden, indikatorer och kontroller."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_AUTO,
   "Skala grafikwidgetar automatiskt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_AUTO,
   "Ändra automatiskt storlek på dekorerade meddelanden, indikatorer och kontroller baserat på aktuell menyskala."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_FACTOR_FULLSCREEN,
   "Åsidosätt skalning av grafikwidgetar (helskärm)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_FACTOR_FULLSCREEN,
   "Tillämpa en manuell skalningsfaktor när du ritar grafikwidgetar i helskärmsläge. Gäller endast när ”Skala grafikwidgetar automatiskt” är inaktiverat. Kan användas för att öka eller minska storleken på dekorerade meddelanden, indikatorer och kontroller oberoende av själva menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_FACTOR_WINDOWED,
   "Åsidosätt skalning av grafikwidgetar (fönsterläge)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_FACTOR_WINDOWED,
   "Använd en manuell skalningsfaktor när du ritar grafikwidgetar i fönsterläge. Gäller endast när ”Skala grafikwidgetar automatiskt” är inaktiverat. Kan användas för att öka eller minska storleken på dekorerade meddelanden, indikatorer och kontroller oberoende av själva menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FPS_SHOW,
   "Visa bildfrekvens"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FPS_SHOW,
   "Visa aktuella bilder per sekund på skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FPS_UPDATE_INTERVAL,
   "Bildfrekvensens uppdateringsintervall (i bildrutor)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FPS_UPDATE_INTERVAL,
   "Bildfrekvensen uppdateras med det inställda intervallet i bildrutor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAMECOUNT_SHOW,
   "Visa bildruteräknare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FRAMECOUNT_SHOW,
   "Visa aktuell bildrutsräkning på skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STATISTICS_SHOW,
   "Visa Statistik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STATISTICS_SHOW,
   "Visa teknisk statistik på skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MEMORY_SHOW,
   "Visa Minnesanvändning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MEMORY_SHOW,
   "Visa systemets använd och total mängd minne på skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MEMORY_UPDATE_INTERVAL,
   "Uppdateringsintervall för minnesanvändning (i bildrutor)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MEMORY_UPDATE_INTERVAL,
   "Minnesanvändningen uppdateras med inställt intervall i bildrutor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_PING_SHOW,
   "Visa Netplay Ping"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_PING_SHOW,
   "Visa pingen för den aktuella Netplay sessionen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_CONTENT_ANIMATION,
   "\"Läs in innehåll\"-meddelande vid uppstart"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_CONTENT_ANIMATION,
   "Visa en kort animering med återkoppling vid start när innehåll läses in."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_AUTOCONFIG,
   "Meddelanden om inmatningsanslutning (Autoconfig)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_AUTOCONFIG_FAILS,
   "Meddelanden om inmatningsfel (Autoconfig)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_CHEATS_APPLIED,
   "Fuskkodsmeddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_CHEATS_APPLIED,
   "Visa ett meddelande på skärmen när fuskkoder tillämpas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_PATCH_APPLIED,
   "Patchmeddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_PATCH_APPLIED,
   "Visa ett meddelande på skärmen när ROM soft-patchas."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_AUTOCONFIG,
   "Visa ett meddelande på skärmen när spelkontroller ansluts/kopplas från."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_AUTOCONFIG_FAILS,
   "Visa ett meddelande på skärmen när inmatningsenheter inte kunde konfigureras."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_REMAP_LOAD,
   "Meddelanden vid inlästa inmatningsommappningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_REMAP_LOAD,
   "Visa ett meddelande på skärmen vid inläsning av ommappningsfiler för inmatning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_CONFIG_OVERRIDE_LOAD,
   "Meddelanden vid inläsning av konfigurationsåsidosättning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_CONFIG_OVERRIDE_LOAD,
   "Visa ett meddelande på skärmen vid inläsning av filer för åsidosättning av konfiguration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SET_INITIAL_DISK,
   "Notifieringar för initial skivåterställning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SET_INITIAL_DISK,
   "Visa ett meddelande på skärmen när du automatiskt återställer den senast använda skivan vid start av flerskivsinnehåll som lästs in via M3U-spellistor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_DISK_CONTROL,
   "Meddelanden om skivkontroll"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_DISK_CONTROL,
   "Visar ett meddelande på skärmen när du matar in och tar ut skivor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SAVE_STATE,
   "Meddelanden om sparade tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SAVE_STATE,
   "Visa ett meddelande på skärmen när du sparar och läser in sparade tillstånd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_FAST_FORWARD,
   "Snabbspolningsmeddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_FAST_FORWARD,
   "Visa en indikation på skärmen när du snabbspolar innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT,
   "Skärmdumpsmeddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SCREENSHOT,
   "Visa ett meddelande på skärmen när en skärmdump tas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION,
   "Tidsgräns för skärmdumpsmeddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SCREENSHOT_DURATION,
   "Definiera varaktigheten för skärm-meddelandet om skärmdump."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION_FAST,
   "Snabb"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION_VERY_FAST,
   "Mycket snabb"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_DURATION_INSTANT,
   "Omedelbar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_FLASH,
   "Skärmdump Blixt-effekt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_SCREENSHOT_FLASH,
   "Visa en vit blinkande effekt på skärmen med önskad längd när en skärmdump tas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_FLASH_NORMAL,
   "PÅ (Normal)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_SCREENSHOT_FLASH_FAST,
   "PÅ (Snabb)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_REFRESH_RATE,
   "Meddelanden för uppdateringsfrekvens"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_REFRESH_RATE,
   "Visa ett meddelande på skärmen när uppdateringsfrekvensen ställs in."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_NETPLAY_EXTRA,
   "Meddelanden för Extra Netplay"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_NETPLAY_EXTRA,
   "Visa icke-nödvändiga Netplay-meddelanden på skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOTIFICATION_SHOW_WHEN_MENU_IS_ALIVE,
   "Meddelanden för endast-meny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NOTIFICATION_SHOW_WHEN_MENU_IS_ALIVE,
   "Visa meddelanden endast när menyn är öppen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_PATH,
   "Typsnitt för meddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_PATH,
   "Välj typsnittet för skärmmeddelanden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FONT_SIZE,
   "Meddelandestorlek"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FONT_SIZE,
   "Ange teckenstorleken i punkter. När widgetar används har denna storlek endast effekt på statistikvisningen på skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_POS_X,
   "Meddelandeposition (horisontellt)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_POS_X,
   "Ange anpassad X-axelposition för skärmtext. 0 är den vänstra kanten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_POS_Y,
   "Meddelandeposition (vertikalt)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_POS_Y,
   "Ange anpassad Y-axelposition för skärmtext. 0 är den nedre kanten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_RED,
   "Meddelandefärg (röd)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_COLOR_RED,
   "Ställer in det röda värdet för textfärgen för skärmmeddelanden. Giltiga värden är mellan 0 och 255."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_GREEN,
   "Meddelandefärg (grön)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_COLOR_GREEN,
   "Ställer in det gröna värdet för textfärgen för skärmmeddelanden. Giltiga värden är mellan 0 och 255."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_COLOR_BLUE,
   "Meddelandefärg (blå)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_COLOR_BLUE,
   "Ställer in det blåa värdet för textfärgen för skärmmeddelanden. Giltiga värden är mellan 0 och 255."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_ENABLE,
   "Meddelandebakgrund"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_BGCOLOR_ENABLE,
   "Aktiverar en bakgrundsfärg för skärmmeddelanden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_RED,
   "Meddelandens bakgrundsfärg (röd)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_BGCOLOR_RED,
   "Ställer in det röda värdet för bakgrundsfärgen för skärmmeddelanden. Giltiga värden är mellan 0 och 255."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_GREEN,
   "Meddelandens bakgrundsfärg (grön)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_BGCOLOR_GREEN,
   "Ställer in det gröna värdet för bakgrundsfärgen för skärmmeddelanden. Giltiga värden är mellan 0 och 255."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_BLUE,
   "Meddelandens bakgrundsfärg (blå)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_BGCOLOR_BLUE,
   "Ställer in det blåa värdet för bakgrundsfärgen för skärmmeddelanden. Giltiga värden är mellan 0 och 255."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_MESSAGE_BGCOLOR_OPACITY,
   "Bakgrundsopacitet för meddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MESSAGE_BGCOLOR_OPACITY,
   "Ställer in opaciteten för OSD-bakgrundsfärgen. Giltiga värden ligger mellan 0,0 och 1,0."
   )

/* Settings > User Interface */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_VIEWS_SETTINGS,
   "Synlighet för menyobjekt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_VIEWS_SETTINGS,
   "Välj synligheten för menyalternativ i RetroArch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SETTINGS,
   "Utseende"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SETTINGS,
   "Ändra inställningar för menyskärmens utseende."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_APPICON_SETTINGS,
   "Programikon"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_APPICON_SETTINGS,
   "Ändra programikon."
   )
#ifdef _3DS
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_BOTTOM_SETTINGS,
   "3DS Utseende bottenskärm"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_BOTTOM_SETTINGS,
   "Ändra inställningar för den nedre skärmens utseende."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_ADVANCED_SETTINGS,
   "Visa Avancerade inställningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHOW_ADVANCED_SETTINGS,
   "Visa avancerade inställningar för avancerade användare."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ENABLE_KIOSK_MODE,
   "Kioskläge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_ENABLE_KIOSK_MODE,
   "Skyddar installationen genom att dölja alla konfigurationsrelaterade inställningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_KIOSK_MODE_PASSWORD,
   "Ange lösenord för att inaktivera kioskläge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_KIOSK_MODE_PASSWORD,
   "Att ange ett lösenord när kioskläget aktiveras gör det möjligt att senare inaktivera kioskläget från menyn, genom att gå till huvudmenyn, välja Inaktivera Kioskläge och ange lösenordet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NAVIGATION_WRAPAROUND,
   "Navigering börjar om från början"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NAVIGATION_WRAPAROUND,
   "Börja om från början och/eller slutet när listans slut har nåtts horisontellt eller vertikalt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAUSE_LIBRETRO,
   "Pausa innehåll när menyn är aktiv"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PAUSE_LIBRETRO,
   "Pausa innehållet om menyn är aktiv."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SAVESTATE_RESUME,
   "Återuppta innehållet efter att använt Spara tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SAVESTATE_RESUME,
   "Stäng automatiskt menyn och återuppta innehållet efter att ha sparat eller läst in ett tillstånd. Inaktivering kan förbättra prestandan för sparad status på mycket långsamma enheter."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_INSERT_DISK_RESUME,
   "Återuppta innehåll efter skivbyte"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_INSERT_DISK_RESUME,
   "Stäng automatiskt menyn och återuppta innehållet efter att matat in eller läst in en ny skiva."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUIT_ON_CLOSE_CONTENT,
   "Avsluta vid Stäng innehåll"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUIT_ON_CLOSE_CONTENT,
   "Avsluta RetroArch automatiskt vid Stäng innehåll. 'CLI' avslutas bara när innehållet startas via kommandoraden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCREENSAVER_TIMEOUT,
   "Menyskärmsläckarens tidsgräns"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCREENSAVER_TIMEOUT,
   "Medan menyn är aktiv kommer en skärmsläckare att kunna visas efter den angivna perioden av inaktivitet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCREENSAVER_ANIMATION,
   "Animera menyskärmsläckare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCREENSAVER_ANIMATION,
   "Aktivera en animeringseffekt medan menyskärmsläckaren är aktiv. Har en väldigt låg påverkan på prestanda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCREENSAVER_ANIMATION_SNOW,
   "Snö"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCREENSAVER_ANIMATION_STARFIELD,
   "Stjärnfält"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCREENSAVER_ANIMATION_VORTEX,
   "Virvel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCREENSAVER_ANIMATION_SPEED,
   "Menyskärmsläckarens animeringshastighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCREENSAVER_ANIMATION_SPEED,
   "Justera hastigheten på menyskärmsläckarens animationseffekt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MOUSE_ENABLE,
   "Mus-stöd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MOUSE_ENABLE,
   "Tillåt att menyn styrs med en mus."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_POINTER_ENABLE,
   "Touch-stöd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_POINTER_ENABLE,
   "Tillåt att menyn styrs med en pekskärm."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THREADED_DATA_RUNLOOP_ENABLE,
   "Trådade uppgifter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THREADED_DATA_RUNLOOP_ENABLE,
   "Utför uppgifter på en separat tråd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAUSE_NONACTIVE,
   "Pausa innehåll vid inaktivitet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PAUSE_NONACTIVE,
   "Pausa innehåll när RetroArch inte är det aktiva fönstret."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_DISABLE_COMPOSITION,
   "Inaktivera skrivbordskomposition"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_DISABLE_COMPOSITION,
   "Fönsterhanterare använder komposition för att tillämpa visuella effekter, upptäcka fönster som inte svarar och mycket annat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_DISABLE_COMPOSITION,
   "Inaktivera komposition med tvång. Inaktivering är endast giltig på Windows Vista/7 för tillfället."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCROLL_FAST,
   "Scrollhastighet i meny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCROLL_FAST,
   "Markörens maximala hastighet när du håller en riktning för att rulla."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCROLL_DELAY,
   "Scrollfördröjning i meny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCROLL_DELAY,
   "Initial fördröjning i millisekunder när du håller en riktning för att rulla."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_START_ON_BOOT,
   "Starta UI Companion vid uppstart"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_UI_COMPANION_START_ON_BOOT,
   "Starta User Interface companion-drivrutinen vid uppstart (om tillgänglig)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DESKTOP_MENU_ENABLE,
   "Skrivbordsmeny (omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UI_COMPANION_TOGGLE,
   "Öppna skrivbordsmenyn vid start"
   )

/* Settings > User Interface > Menu Item Visibility */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_VIEWS_SETTINGS,
   "Snabbmeny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_VIEWS_SETTINGS,
   "Växla synligheten för menyobjekt i Snabbmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_VIEWS_SETTINGS,
   "Inställningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_VIEWS_SETTINGS,
   "Växla synligheten för menyobjekt i menyn Inställningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_CORE,
   "Visa 'Läs in kärna'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_CORE,
   "Visa alternativet 'Läs in kärna' i huvudmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_CONTENT,
   "Visa 'Läs in innehåll'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_CONTENT,
   "Visa alternativet 'Läs in innehåll' i huvudmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LOAD_DISC,
   "Visa 'Läs in skiva'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LOAD_DISC,
   "Visa alternativet 'Läs in skiva' i huvudmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_DUMP_DISC,
   "Visa 'Dumpa skiva'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_DUMP_DISC,
   "Visa alternativet 'Dumpa skiva' i huvudmenyn."
   )
#ifdef HAVE_LAKKA
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_EJECT_DISC,
   "Visa 'Mata ut skiva'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_EJECT_DISC,
   "Visa alternativet 'Mata ut skiva' i huvudmenyn."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_ONLINE_UPDATER,
   "Visa 'Online-uppdaterare'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_ONLINE_UPDATER,
   "Visa alternativet 'Online-uppdaterare' i huvudmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_CORE_UPDATER,
   "Visa 'Hämta ner kärna'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_CORE_UPDATER,
   "Visa möjligheten att uppdatera kärnor (och kärninfofiler) i 'Online-uppdaterare'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_LEGACY_THUMBNAIL_UPDATER,
   "Visa föråldrad 'Uppdatera miniatyrbilder'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_LEGACY_THUMBNAIL_UPDATER,
   "Visa posten för att hämta miniatyrbildspaket i alternativet 'Online-uppdaterare'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_INFORMATION,
   "Visa 'Information'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_INFORMATION,
   "Visa alternativet 'Information' i huvudmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_CONFIGURATIONS,
   "Visa 'Konfigurationsfil'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_CONFIGURATIONS,
   "Visa alternativet 'Konfigurationsfil' i huvudmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_HELP,
   "Visa 'Hjälp'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_HELP,
   "Visa alternativet 'Hjälp' i huvudmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_QUIT_RETROARCH,
   "Visa 'Avsluta RetroArch'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_QUIT_RETROARCH,
   "Visa alternativet 'Avsluta RetroArch' i huvudmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_RESTART_RETROARCH,
   "Visa 'Starta om RetroArch'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_RESTART_RETROARCH,
   "Visa alternativet 'Starta om RetroArch' i huvudmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_SETTINGS,
   "Visa 'Inställningar'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_SETTINGS,
   "Visa 'Inställningar'-menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_SETTINGS_PASSWORD,
   "Ange lösenord för att aktivera 'Inställningar'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_SETTINGS_PASSWORD,
   "Om du anger ett lösenord när du döljer inställningsfliken kan du senare återställa den från menyn genom att gå till fliken Huvudmeny, välja ”Aktivera inställningsfliken” och ange lösenordet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_FAVORITES,
   "Visa 'Favoriter'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_FAVORITES,
   "Visa 'Favoriter'-menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_FAVORITES_FIRST,
   "Visa favoriter först"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_FAVORITES_FIRST,
   "Visa 'Favoriter' före 'Historik'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_IMAGES,
   "Visa 'Bilder'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_IMAGES,
   "Visa 'Bilder'-menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_MUSIC,
   "Visa 'Musik'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_MUSIC,
   "Visa 'Musik'-menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_VIDEO,
   "Visa 'Videor'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_VIDEO,
   "Visa 'Videor'-menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_NETPLAY,
   "Visa 'Netplay'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_NETPLAY,
   "Visa 'Netplay'-menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_HISTORY,
   "Visa 'Historik'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_HISTORY,
   "Visa senaste historikmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_ADD_ENTRY,
   "Visa 'Importera Innehåll'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_ADD_ENTRY,
   "Visa 'Importera innehåll' inne i huvudmenyn eller spellistor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ADD_CONTENT_ENTRY_DISPLAY_MAIN_TAB,
   "Huvudmeny"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_ADD_CONTENT_ENTRY_DISPLAY_PLAYLISTS_TAB,
   "Spellistsmeny"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_PLAYLISTS,
   "Visa 'Spellistor'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_PLAYLISTS,
   "Visa spellistorna i huvudmenyn. Ignoreras i GLUI om flikar och navfält för spellistor är aktiverade."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_PLAYLIST_TABS,
   "Visa spellistflikar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_PLAYLIST_TABS,
   "Visa spellisteflikar. Påverkar inte RGUI. Navigeringsfältet måste vara aktiverat i GLUI."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_EXPLORE,
   "Visa 'Utforska'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_EXPLORE,
   "Visa alternativ för innehållsutforskaren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_CONTENTLESS_CORES,
   "Visa 'Innehållslösa kärnor'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_CONTENTLESS_CORES,
   "Ange vilken typ av kärna (om någon) som ska visas i menyn 'Innehållslösa kärnor'. När inställningen är ’Anpassad’ kan synligheten för enskilda kärnor växlas via menyn ”Hantera kärnor”."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_CONTENTLESS_CORES_ALL,
   "Alla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_CONTENTLESS_CORES_SINGLE_PURPOSE,
   "En gång"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHOW_CONTENTLESS_CORES_CUSTOM,
   "Anpassad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_ENABLE,
   "Visa tid och datum"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_ENABLE,
   "Visa aktuellt datum och/eller tid i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_STYLE,
   "Tid och datum-format"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_STYLE,
   "Ändra hur aktuellt datum och/eller aktuell tid visas inne i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_DATE_SEPARATOR,
   "Datumseparator"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEDATE_DATE_SEPARATOR,
   "Ange tecken som ska användas som avgränsare mellan år/månad/dag komponenter när aktuellt datum visas i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BATTERY_LEVEL_ENABLE,
   "Visa 'Batteri-nivå'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BATTERY_LEVEL_ENABLE,
   "Visa aktuell batterinivå i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_ENABLE,
   "Visa 'Kärnnamn'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_ENABLE,
   "Visa aktuell kärnas namn i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_SUBLABELS,
   "Visa Meny-undertitlar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_SUBLABELS,
   "Visa ytterligare information för menyobjekt."
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_SHOW_START_SCREEN,
   "Visa Startskärm"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_SHOW_START_SCREEN,
   "Visa startskärmen i menyn. Detta sätts automatiskt till false när programmet startas för första gången."
   )

/* Settings > User Interface > Menu Item Visibility > Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESUME_CONTENT,
   "Visa 'Återuppta'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESUME_CONTENT,
   "Visar alternativet att återuppta innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESTART_CONTENT,
   "Visa 'Starta om'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESTART_CONTENT,
   "Visa alternativet att starta om innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CLOSE_CONTENT,
   "Visa 'Stäng Innehåll'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CLOSE_CONTENT,
   "Visa alternativet att stänga innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVESTATE_SUBMENU,
   "Visa 'Spara tillstånd'-undermeny"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVESTATE_SUBMENU,
   "Visa alternativ för sparade tillstånd i en undermeny."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_LOAD_STATE,
   "Visa 'Spara/Läs in tillstånd'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_LOAD_STATE,
   "Visa alternativen för att spara/läs in ett tillstånd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_REPLAY,
   "Visa 'Repris-kontroller'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_REPLAY,
   "Visa alternativen för inspelning/uppspelning av reprisfiler."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_UNDO_SAVE_LOAD_STATE,
   "Visa 'Ångra Spara/Läs in tillstånd'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_UNDO_SAVE_LOAD_STATE,
   "Visa alternativen för att Ångra Spara/Läs in tillstånd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_OPTIONS,
   "Visa 'Kärnalternativ'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_OPTIONS,
   "Visa alternativet 'Kärnalternativ'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CORE_OPTIONS_FLUSH,
   "Visa 'Skriv alternativ till disk'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CORE_OPTIONS_FLUSH,
   "Visa posten ”Skriv alternativ till disk” i menyn ”Alternativ > Hantera kärnalternativ”."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CONTROLS,
   "Visa 'Spelkontroller'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CONTROLS,
   "Visa alternativet 'Spelkontroller'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_TAKE_SCREENSHOT,
   "Visa 'Ta skärmdump'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_TAKE_SCREENSHOT,
   "Visa alternativet 'Ta skärmdump'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_START_RECORDING,
   "Visa 'Starta inspelning'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_START_RECORDING,
   "Visa alternativet 'Starta inspelning'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_START_STREAMING,
   "Visa 'Starta streaming'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_START_STREAMING,
   "Visa alternativet 'Börja strömma'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_OVERLAYS,
   "Visa 'Skärmöverlagring'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_OVERLAYS,
   "Visa alternativet 'Skärmöverlagring'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_VIDEO_LAYOUT,
   "Visa 'Video Layout'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_VIDEO_LAYOUT,
   "Visa alternativet 'Video Layout'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_LATENCY,
   "Visa 'Latens'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_LATENCY,
   "Visa alternativet 'Latens'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_SHOW_REWIND,
   "Visa 'Spola tillbaka'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_SHOW_REWIND,
   "Visa alternativet 'Spola tillbaka'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_CORE_OVERRIDES,
   "Visa 'Spara kärnåsidosättningar'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_CORE_OVERRIDES,
   "Visa alternativet 'Spara kärnåsidosättningar' i menyn 'Åsidosättningar'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SAVE_GAME_OVERRIDES,
   "Visa 'Åsidosättningar för sparat spel'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SAVE_GAME_OVERRIDES,
   "Visa alternativet 'Åsidosättningar för sparat spel' i menyn 'Åsidosättningar'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_CHEATS,
   "Visa 'Fusk'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_CHEATS,
   "Visa alternativet 'Fusk'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SHADERS,
   "Visa 'Shaders'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SHADERS,
   "Visa alternativet 'Shaders'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_ADD_TO_FAVORITES,
   "Visa 'Lägg till i Favoriter'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_ADD_TO_FAVORITES,
   "Visa alternativet 'Lägg till i favoriter'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_ADD_TO_PLAYLIST,
   "Visa 'Lägg till i spellista'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_ADD_TO_PLAYLIST,
   "Visa alternativet 'Lägg till i spellista'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_SET_CORE_ASSOCIATION,
   "Visa 'Ställ in kärnassociation'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_SET_CORE_ASSOCIATION,
   "Visa alternativet 'Ställ in kärnassociation' när innehåll inte körs."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_RESET_CORE_ASSOCIATION,
   "Visa 'Återställ kärnassociation'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_RESET_CORE_ASSOCIATION,
   "Visa alternativet 'Återställ kärnassociation' när innehåll inte körs."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_DOWNLOAD_THUMBNAILS,
   "Visa 'Hämta ner miniatyrer'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_DOWNLOAD_THUMBNAILS,
   "Visa alternativet 'Hämta ner miniatyrer' när innehåll inte körs."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_INFORMATION,
   "Visa 'Information'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_INFORMATION,
   "Visa alternativet 'Information'."
   )

/* Settings > User Interface > Views > Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_DRIVERS,
   "Visa 'Drivrutiner'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_DRIVERS,
   "Visar inställningar för drivrutiner."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_VIDEO,
   "Visa 'Video'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_VIDEO,
   "Visar inställningar för video."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_AUDIO,
   "Visa 'Ljud'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_AUDIO,
   "Visar inställningar för ljud."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_INPUT,
   "Show 'Inmatning'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_INPUT,
   "Visar inställningar för inmatning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_LATENCY,
   "Visa 'Latens'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_LATENCY,
   "Visar inställningar för latens."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_CORE,
   "Visa 'Kärna'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_CORE,
   "Visar inställningar för kärna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_CONFIGURATION,
   "Visa 'Konfiguration'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_CONFIGURATION,
   "Visar inställningar för konfiguration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_SAVING,
   "Visa 'Sparar'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_SAVING,
   "Visa inställningar för 'Sparar'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_LOGGING,
   "Visa 'Loggning'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_LOGGING,
   "Visar inställningar för loggning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_FILE_BROWSER,
   "Visa 'Filhanterare'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_FILE_BROWSER,
   "Visar inställningar för filhanterare."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_FRAME_THROTTLE,
   "Visa 'Bildfrekvensstrypning'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_FRAME_THROTTLE,
   "Visa inställningar för 'Bildfrekvensstrypning'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_RECORDING,
   "Visa 'Inspelning'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_RECORDING,
   "Visar inställningar för inspelning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ONSCREEN_DISPLAY,
   "Visa 'Skärmvisning'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ONSCREEN_DISPLAY,
   "Visa inställningar för skärmvisning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_USER_INTERFACE,
   "Visa 'Användargränssnitt'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_USER_INTERFACE,
   "Visar inställningar för användargränssnitt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_AI_SERVICE,
   "Visa 'AI-tjänst'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_AI_SERVICE,
   "Visar inställningar för AI-tjänst."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ACCESSIBILITY,
   "Visa 'Tillgänglighet'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ACCESSIBILITY,
   "Visa inställningar för tillgänglighet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_POWER_MANAGEMENT,
   "Visa 'Energihantering'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_POWER_MANAGEMENT,
   "Visa inställningar för 'Energihantering'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_ACHIEVEMENTS,
   "Visa 'Prestationer'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_ACHIEVEMENTS,
   "Visa inställningar för 'Prestationer'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_NETWORK,
   "Visa 'Nätverk'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_NETWORK,
   "Visa inställningar för 'Nätverk'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_PLAYLISTS,
   "Visa 'Spellistor'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_PLAYLISTS,
   "Visa inställningar för 'Spellistor'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_USER,
   "Visa 'Användare'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_USER,
   "Visa inställningar för 'Användare'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_DIRECTORY,
   "Visa 'Katalog'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_DIRECTORY,
   "Visa inställningar för 'Katalog'."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SETTINGS_SHOW_STEAM,
   "Visa 'Steam'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SETTINGS_SHOW_STEAM,
   "Visa inställningar för 'Steam'."
   )

/* Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SCALE_FACTOR,
   "Skalfaktor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SCALE_FACTOR,
   "Skala storleken på användargränssnittets element i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WALLPAPER,
   "Bakgrundsbild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WALLPAPER,
   "Välj en bild att ställa in som menybakgrund. Manuella och dynamiska bilder kommer att åsidosätta 'Färgtema'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WALLPAPER_OPACITY,
   "Bakgrundsgenomskinlighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WALLPAPER_OPACITY,
   "Ändra bakgrundsbildens opacitet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FRAMEBUFFER_OPACITY,
   "Genomskinlighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_FRAMEBUFFER_OPACITY,
   "Ändra förinställda menybakgrundens opacitet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_USE_PREFERRED_SYSTEM_COLOR_THEME,
   "Använd föredraget färgtema för systemet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_USE_PREFERRED_SYSTEM_COLOR_THEME,
   "Använd operativsystemets färgtema (om något). Åsidosätter temainställningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS,
   "Primär miniatyrbild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS,
   "Typ av miniatyr som ska visas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_THUMBNAIL_UPSCALE_THRESHOLD,
   "Miniatyrbilders uppskalningströskel"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_THUMBNAIL_UPSCALE_THRESHOLD,
   "Uppskala automatiskt miniatyrbilder med en bredd/höjd som är mindre än det angivna värdet. Förbättrar bildkvalitén. Har en måttlig inverkan på prestanda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_THUMBNAIL_BACKGROUND_ENABLE,
   "Miniatyrbildsbakgrunder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_THUMBNAIL_BACKGROUND_ENABLE,
   "Möjliggör utfyllnad av oanvänt utrymme i miniatyrbilder med en solid bakgrund. Detta säkerställer en enhetlig visningsstorlek för alla bilder, vilket förbättrar menyutseendet när du tittar på miniatyrbilder av blandat innehåll med olika basmått."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE,
   "Rull-textanimering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_TYPE,
   "Välj metod för horisontell rullning som används för att visa lång menytext."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_SPEED,
   "Rull-texthastighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_SPEED,
   "Animeringshastigheten vid rullning av lång menytext."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_SMOOTH,
   "Mjuk Rull-text"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_TICKER_SMOOTH,
   "Använd mjuk rullande animation när lång menytext visas. Har en liten prestandapåverkan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_REMEMBER_SELECTION,
   "Kom ihåg val vid byte av flikar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_REMEMBER_SELECTION,
   "Kom ihåg föregående markörposition i flikar. RGUI har inga flikar, men Spellistor och Inställningar beter sig som sådana."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_REMEMBER_SELECTION_ALWAYS,
   "Alltid"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_REMEMBER_SELECTION_PLAYLISTS,
   "Endast för Spellistor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_REMEMBER_SELECTION_MAIN,
   "Endast för Huvudmeny och Inställningar"
   )

/* Settings > AI Service */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_MODE,
   "Utmatning från AI-tjänst"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_MODE,
   "Visa översättningen som ett textöverlägg (Bildläge), spela upp som text-till-tal (Tal) eller använd en systemberättare som NVDA (Berättare)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_URL,
   "AI-tjänst URL"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_URL,
   "En http:// URL som pekar på den översättningstjänst som ska användas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_ENABLE,
   "AI-tjänst aktiverad"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_ENABLE,
   "Aktivera AI-tjänsten så att den körs när snabbtangenten AI-tjänst trycks in."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_PAUSE,
   "Pausa under översättning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_PAUSE,
   "Pausa kärnan medan skärmen översatts."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SOURCE_LANG,
   "Källspråk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_SOURCE_LANG,
   "Det språk som tjänsten ska översätta från. Om den är inställd på ”Standard” försöker den automatiskt känna av språket. Om du ställer in det på ett specifikt språk blir översättningen mer exakt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_TARGET_LANG,
   "Målspråk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AI_SERVICE_TARGET_LANG,
   "Det språk som tjänsten ska översätta till. ”Standard” är engelska."
   )

/* Settings > Accessibility */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_ENABLED,
   "Aktivera hjälpmedel"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_ENABLED,
   "Aktivera text-till-tal för att underlätta navigering i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCESSIBILITY_NARRATOR_SPEECH_SPEED,
   "Text-till-tal-hastighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCESSIBILITY_NARRATOR_SPEECH_SPEED,
   "Hastigheten för text-till-tal-rösten."
   )

/* Settings > Power Management */

/* Settings > Achievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_ENABLE,
   "Prestationer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_ENABLE,
   "Samla prestationframgångar i klassiska spel. För mer information, besök 'https://retroachievements.org'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Hardcore-läge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Inaktiverar fusk, spola tillbaka, slowmotion och läsa in sparade tillstånd. Prestationer som uppnås i hardcore-läget är unikt markerade så att du kan visa andra vad du har uppnått utan emulatorns hjälpfunktioner. Om du växlar den här inställningen under spelets gång startas spelet om."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_LEADERBOARDS_ENABLE,
   "Topplistor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_RICHPRESENCE_ENABLE,
   "Skickar regelbundet kontextuell spelinformation till RetroAchievements webbplats. Har ingen effekt om ”Hardcore-läge” är aktiverat."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_BADGES_ENABLE,
   "Prestationsemblem"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_BADGES_ENABLE,
   "Visa emblem i prestationslistan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_TEST_UNOFFICIAL,
   "Testa inofficiella prestationer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_TEST_UNOFFICIAL,
   "Använd inofficiella prestationer och/eller betafunktioner för teständamål."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCK_SOUND_ENABLE,
   "Lås upp ljud"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_UNLOCK_SOUND_ENABLE,
   "Spela upp ett ljud när en prestation låses upp."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_AUTO_SCREENSHOT,
   "Automatisk skärmdump"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_AUTO_SCREENSHOT,
   "Ta automatiskt en skärmbild när en prestation tjänas."
   )
MSG_HASH( /* suggestion for translators: translate as 'Play Again Mode' */
   MENU_ENUM_LABEL_VALUE_CHEEVOS_START_ACTIVE,
   "Encore-läge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_START_ACTIVE,
   "Starta sessionen med alla prestationer aktiva (även de som tidigare har låsts upp)."
   )

/* Settings > Achievements > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_SETTINGS,
   "Utseende"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_APPEARANCE_SETTINGS,
   "Ändra position och förskjutningar för prestationsmeddelanden på skärmen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_APPEARANCE_ANCHOR,
   "Ställ in det hörn/den kant på skärmen som meddelanden om prestationer ska visas från."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_TOPLEFT,
   "Överkant Vänster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_TOPCENTER,
   "Överkant Mitten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_TOPRIGHT,
   "Överkant Höger"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_BOTTOMLEFT,
   "Underkant Vänster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_BOTTOMCENTER,
   "Underkant Mitten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_ANCHOR_BOTTOMRIGHT,
   "Underkant Höger"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_PADDING_AUTO,
   "Justerad utfyllnad"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_APPEARANCE_PADDING_AUTO,
   "Ange om prestationsmeddelanden ska överensstämma med andra typer av skärmmeddelanden. Inaktivera för att ställa in manuella utfyllnads-/positionsvärden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_PADDING_H,
   "Manuell horisontell utfyllnad"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_APPEARANCE_PADDING_H,
   "Avstånd från vänster/höger skärmkant, vilket kan kompensera för skärmens overscan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_APPEARANCE_PADDING_V,
   "Manuell vertikal utfyllnad"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_APPEARANCE_PADDING_V,
   "Avstånd från skärmens övre/nedre kant, vilket kan kompensera för skärmens overscan."
   )

/* Settings > Achievements > Visibility */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_SETTINGS,
   "Synlighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_SETTINGS,
   "Ändra vilka meddelanden och element på skärmen som visas. Inaktiverar inte funktionalitet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_SUMMARY,
   "Sammandrag av uppstart"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_SUMMARY,
   "Visar information om spelet som laddas och användarens aktuella framsteg.\n”Alla identifierade spel” visar en sammanfattning för spel utan publicerade prestationer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_SUMMARY_ALLGAMES,
   "Alla identifierade spel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_SUMMARY_HASCHEEVOS,
   "Spel med prestationer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_UNLOCK,
   "Upplåsningsmeddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_UNLOCK,
   "Visar ett meddelande när en prestation är upplåst."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_MASTERY,
   "Mästerliga meddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_MASTERY,
   "Visar ett meddelande när alla prestationer för ett spel är upplåsta."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_CHALLENGE_INDICATORS,
   "Indikatorer för aktiva utmatningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_CHALLENGE_INDICATORS,
   "Visa indikationer på skärmen samtidigt som vissa prestationer kan tjänas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_PROGRESS_TRACKER,
   "Förloppsindikator"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_PROGRESS_TRACKER,
   "Visa en indikationer på skärmen när framsteg görs mot vissa prestationer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_LBOARD_START,
   "Meddelanden om starter för topplista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_LBOARD_START,
   "Visar en beskrivning av en topplista när den blir aktiv."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_LBOARD_SUBMIT,
   "Meddelanden om insändningar för topplista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_LBOARD_SUBMIT,
   "Visar ett meddelande med det värde som skickas in när ett topplisteförsök har slutförts."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_LBOARD_CANCEL,
   "Meddelanden om misslyckanden för topplista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_LBOARD_CANCEL,
   "Visar ett meddelande när ett topplisteförsök misslyckas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_LBOARD_TRACKERS,
   "Topplistespårare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VISIBILITY_ACCOUNT,
   "Inloggningsmeddelande"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VISIBILITY_ACCOUNT,
   "Visar meddelanden kopplade till RetroAchievements kontoinloggning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_VERBOSE_ENABLE,
   "Utförliga meddelanden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_VERBOSE_ENABLE,
   "Visar ytterligare diagnostik och felmeddelanden."
   )

/* Settings > Network */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_PUBLIC_ANNOUNCE,
   "Annonsera Netplay publikt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_PUBLIC_ANNOUNCE,
   "Om netplay-spel ska annonseras offentligt. Om inställningen är avaktiverad måste klienter ansluta manuellt i stället för att använda den publika lobbyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_USE_MITM_SERVER,
   "Använd reläserver"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_USE_MITM_SERVER,
   "Vidarebefordra nätverksanslutningar via en mellanliggande server. Användbart om värden ligger bakom en brandvägg eller har problem med NAT/UPnP."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER,
   "Plats för reläserver"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_MITM_SERVER,
   "Välj en specifik reläserver att använda. Geografiskt närmare platser tenderar att ha lägre latens."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_CUSTOM_MITM_SERVER,
   "Anpassad adress för reläserver"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_CUSTOM_MITM_SERVER,
   "Ange adressen till din anpassade reläserver här. Format: adress eller adress|port."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER_LOCATION_1,
   "Nordamerika (östkusten, USA)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER_LOCATION_2,
   "Västeuropa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER_LOCATION_3,
   "Sydamerika (sydöstra, Brazilien)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER_LOCATION_4,
   "Sydostasien"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER_LOCATION_5,
   "Östra Asien (Chuncheon, Sydkorea)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MITM_SERVER_LOCATION_CUSTOM,
   "Anpassa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_IP_ADDRESS,
   "Serveradress"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_IP_ADDRESS,
   "Adressen för värden att ansluta till."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_TCP_UDP_PORT,
   "Netplay TCP-port"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_TCP_UDP_PORT,
   "Porten för värdens IP-adress. Kan vara antingen en TCP eller UDP-port."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MAX_CONNECTIONS,
   "Max samtidiga anslutningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_MAX_CONNECTIONS,
   "Det maximala antalet aktiva anslutningar som värden accepterar innan nya anslutningar avvisas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MAX_PING,
   "Ping begränsning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_MAX_PING,
   "Den maximala anslutningsfördröjningen (ping) som värden accepterar. Ställ in den på 0 för ingen gräns."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_PASSWORD,
   "Serverlösenord"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_PASSWORD,
   "Lösenordet som används av klienter för att ansluta till värden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SPECTATE_PASSWORD,
   "Serverlösenord för endast åskådare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_SPECTATE_PASSWORD,
   "Lösenordet som används av klienter för att ansluta till värden som en åskådare."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_START_AS_SPECTATOR,
   "Netplay Åskådarläge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_START_AS_SPECTATOR,
   "Starta netplay i åskådarläge."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_NETPLAY_START_AS_SPECTATOR,
   "Huruvida netplay ska startas i åskådarläge. Om inställt på true kommer netplay att starta i åskådarläge. Det går alltid att ändra läge senare."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_FADE_CHAT,
   "Tona ut chatt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_FADE_CHAT,
   "Tona ut chattmeddelanden över tid."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_CHAT_COLOR_NAME,
   "Chattfärg (Nicknamn)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_CHAT_COLOR_NAME,
   "Format: #RRGGBB eller RRGGBB"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_CHAT_COLOR_MSG,
   "Chattfärg (Meddelande)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_CHAT_COLOR_MSG,
   "Format: #RRGGBB eller RRGGBB"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ALLOW_PAUSING,
   "Tillåt pausning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ALLOW_PAUSING,
   "Tillåt spelare att pausa under Netplay."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ALLOW_SLAVES,
   "Tillåt klienter i slavläge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ALLOW_SLAVES,
   "Tillåt anslutningar i slavläge. Klienter i slavläge kräver mycket lite processorkraft på båda sidor, men kommer att drabbas avsevärt av nätverksfördröjning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REQUIRE_SLAVES,
   "Tillåt inte klienter i icke-slavläge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REQUIRE_SLAVES,
   "Tillåt inte anslutningar som inte är i slavläge. Rekommenderas inte, utom för mycket snabba nätverk med mycket svaga maskiner."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_CHECK_FRAMES,
   "Kontrollbildrutor för netplay"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_CHECK_FRAMES,
   "Hur ofta (i bildrutor) som netplay ska kontrollera att värden och klienten är synkroniserade."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_NETPLAY_CHECK_FRAMES,
   "Frekvensen i bildrutor med vilken netplay kommer att verifiera att värden och klienten är synkroniserade. Med de flesta kärnor har detta värde ingen synlig effekt och kan ignoreras. Med icke-bestämbara kärnor avgör detta värde hur ofta netplay-peers kommer att synkroniseras. Med buggiga kärnor kommer det att orsaka allvarliga prestandaproblem om detta värde sätts till något annat än noll. Ställ in på noll för att inte utföra några kontroller. Detta värde används endast på ne[...]"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_INPUT_LATENCY_FRAMES_MIN,
   "Antalet bildrutor med inmatningslatens som netplay ska använda för att dölja nätverkslatens. Minskar jitter och gör netplay mindre CPU-krävande, men på bekostnad av märkbar fördröjning i inmatningen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_NETPLAY_INPUT_LATENCY_FRAMES_MIN,
   "Antalet bildrutor med inmatningsfördröjning som netplay ska använda för att dölja nätverksfördröjning.\nNär det här alternativet används i netplay fördröjer det lokal inmatning så att den bildruta som körs ligger närmare de bildrutor som tas emot från nätverket. Detta minskar jitter och gör netplay mindre CPU-intensivt, men till priset av en märkbar fördröjning av inmatningen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_INPUT_LATENCY_FRAMES_RANGE,
   "Det intervall av bildrutor med inmatningslatens som kan användas för att dölja nätverkslatens. Minskar jitter och gör netplay mindre CPU-krävande, men på bekostnad av oförutsägbar fördröjning i inmatningen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_NETPLAY_INPUT_LATENCY_FRAMES_RANGE,
   "Det intervall av bildrutor med inmatningslatens som kan användas av netplay för att dölja nätverkslatens.\nOm det är inställt kommer netplay att justera antalet bildrutor med inmatningslatens dynamiskt för att balansera CPU-tid, inmatningslatens och nätverkslatens. Detta minskar jitter och gör netplay mindre CPU-intensivt, men till priset av oförutsägbar inmatningsfördröjning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_NAT_TRAVERSAL,
   "Netplay NAT-traversering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_NAT_TRAVERSAL,
   "När du är värd, försök att lyssna efter anslutningar från det offentliga Internet med hjälp av UPnP eller liknande tekniker för att komma ut från LAN."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL,
   "Delning av digital inmatning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REQUEST_DEVICE_I,
   "Begär enhet %u"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REQUEST_DEVICE_I,
   "Begär att få spela med den angivna inmatningsenheten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_CMD_ENABLE,
   "Nätverkskommandon"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_CMD_PORT,
   "Nätverkskommandoport"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_REMOTE_ENABLE,
   "Nätverksspelkontroll"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_REMOTE_PORT,
   "Port för nätverksspelkontroller"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_USER_REMOTE_ENABLE,
   "Spelare %d Nätverksspelkontroll"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STDIN_CMD_ENABLE,
   "Kommandon för stdin"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STDIN_CMD_ENABLE,
   "stdin kommandogränssnitt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_ON_DEMAND_THUMBNAILS,
   "Hämta miniatyrbilder vid behov"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETWORK_ON_DEMAND_THUMBNAILS,
   "Hämta automatiskt ner saknade miniatyrbilder när du bläddrar i spellistor. Har en stor prestandapåverkan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATER_SETTINGS,
   "Inställningar för uppdaterare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UPDATER_SETTINGS,
   "Åtkomst till inställningar för kärnuppdatering"
   )

/* Settings > Network > Updater */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_BUILDBOT_URL,
   "URL för Buildbot-kärnor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_BUILDBOT_URL,
   "URL till katalog för kärnuppdaterare på libretros buildbot."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BUILDBOT_ASSETS_URL,
   "URL för Buildbot-resurser"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BUILDBOT_ASSETS_URL,
   "URL till katalog för resursuppdaterare på libretros buildbot."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_AUTO_EXTRACT_ARCHIVE,
   "Packa automatiskt upp hämtade arkiv"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_AUTO_EXTRACT_ARCHIVE,
   "Efter hämtning så packas automatiskt filer upp som finns i de hämtade arkiven."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_SHOW_EXPERIMENTAL_CORES,
   "Visa experimentella kärnor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_SHOW_EXPERIMENTAL_CORES,
   "Inkludera 'experimentella' kärnor i Hämta ner kärnor-listan. Dessa är vanligen endast för utveckling/teständamål, och rekommenderas inte för allmän användning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_AUTO_BACKUP,
   "Säkerhetskopiera kärnor vid uppdatering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_AUTO_BACKUP,
   "Skapa automatiskt en säkerhetskopia av installerade kärnor när en online-uppdatering utförs. Möjliggör enkel återställning till en fungerande kärna om en uppdatering introducerar en försämring."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_AUTO_BACKUP_HISTORY_SIZE,
   "Storlek för säkerhetskopieringshistorik för kärnor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_UPDATER_AUTO_BACKUP_HISTORY_SIZE,
   "Ange hur många automatiskt genererade säkerhetskopior som ska sparas för varje installerad kärna. När denna gräns har uppnåtts kommer den äldsta säkerhetskopian att raderas när en ny säkerhetskopia skapas via en onlineuppdatering. Manuella säkerhetskopior av kärnor påverkas inte av denna inställning."
   )

/* Settings > Playlists */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HISTORY_LIST_ENABLE,
   "Historik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_HISTORY_LIST_ENABLE,
   "Underhåll en spellista med nyligen använda spel, bilder, musik och videor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_HISTORY_SIZE,
   "Historik storlek"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_HISTORY_SIZE,
   "Begränsa antalet poster i den senaste spellistan för spel, bilder, musik och videor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_FAVORITES_SIZE,
   "Favoriters storlek"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_FAVORITES_SIZE,
   "Begränsa antalet poster i spellistan ”Favoriter”. När gränsen har nåtts förhindras nya poster att läggas till tills gamla poster har tagits bort. Om du ställer in ett värde på -1 tillåts ”obegränsade” poster.\nVARNING: Om du minskar värdet raderas befintliga poster!"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_RENAME,
   "Tillåt att byta namn på poster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_ENTRY_RENAME,
   "Tillåt att poster i spellistan byter namn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE,
   "Tillåt att ta bort poster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_ENTRY_REMOVE,
   "Tillåt att poster i spellistan tas bort."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SORT_ALPHABETICAL,
   "Sortera spellistor alfabetiskt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SORT_ALPHABETICAL,
   "Sortera innehållsspellistor i alfabetisk ordning, med undantag för spellistorna ”Historik”, ”Bilder”, ”Musik” och ”Videor”."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_USE_OLD_FORMAT,
   "Spara spellistor med gamla formatet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_USE_OLD_FORMAT,
   "Skriv spellistor med föråldrat klartextformat. När funktionen är inaktiverad formateras spellistorna med JSON."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_COMPRESSION,
   "Komprimera spellistor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_COMPRESSION,
   "Arkivera spellist-data vid skrivning till disk. Detta reducerar filstorlek och laddningstider på bekostnad av (försumbart) ökad CPU-användning. Kan användas med spellistor i antingen gamla eller nya formatet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SHOW_INLINE_CORE_NAME,
   "Visa associerade kärnor i spellistor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SHOW_INLINE_CORE_NAME,
   "Ange när poster i spellistan ska taggas med den aktuella associerade kärnan (om någon).\nDen här inställningen ignoreras när underetiketter för spellistor är aktiverade."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SHOW_SUBLABELS,
   "Visa underetiketter för spellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SHOW_SUBLABELS,
   "Visa ytterligare information för varje spellistepost, t. ex. aktuell kärnassociation och körtid (om tillgänglig). Har en varierande prestandapåverkan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SHOW_HISTORY_ICONS,
   "Visa innehållsspecifika ikoner i historik och favoriter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SHOW_HISTORY_ICONS,
   "Visa specifika ikoner för varje post i historik- och favoritspellistan. Har en varierande prestandapåverkan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_CORE,
   "Kärna:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_RUNTIME,
   "Speltid:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_LAST_PLAYED,
   "Senast spelad:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_SECONDS_SINGLE,
   "sekund"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_SECONDS_PLURAL,
   "sekunder"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_MINUTES_SINGLE,
   "minut"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_MINUTES_PLURAL,
   "minuter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_HOURS_SINGLE,
   "timme"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_HOURS_PLURAL,
   "timmar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_DAYS_SINGLE,
   "dag"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_DAYS_PLURAL,
   "dagar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_WEEKS_SINGLE,
   "vecka"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_WEEKS_PLURAL,
   "veckor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_MONTHS_SINGLE,
   "månad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_MONTHS_PLURAL,
   "månader"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_YEARS_SINGLE,
   "år"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_YEARS_PLURAL,
   "år"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIME_UNIT_AGO,
   "sedan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SHOW_ENTRY_IDX,
   "Visa postens nummer när du visar spellistor. Visningsformatet beror på den valda menydrivrutinen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_SUBLABEL_LAST_PLAYED_STYLE,
   "Stil för datum och tid för 'Senast spelad'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_SUBLABEL_LAST_PLAYED_STYLE,
   "Ställ in stilen för datum och tid som visas för tidsstämpelinformation för ”Senast spelad”. Alternativet ”(AM/PM)” har en liten påverkan på prestandan på vissa plattformar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_FUZZY_ARCHIVE_MATCH,
   "Luddig arkivmatchning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_FUZZY_ARCHIVE_MATCH,
   "Vid sökning i spellistor efter poster som är associerade med komprimerade filer matchas endast arkivets filnamn istället för [filnamn]+[innehåll]. Aktivera detta för att undvika dubbla poster i innehållshistoriken när du laddar komprimerade filer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_WITHOUT_CORE_MATCH,
   "Sök igenom utan kärnmatchning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_WITHOUT_CORE_MATCH,
   "Tillåt att innehåll söks igenom och läggs till i en spellista utan att det finns en kärna installerad som stöder detta."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_SERIAL_AND_CRC,
   "Sök igenom CRC-kontrollsummor vid möjliga dubbletter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_SERIAL_AND_CRC,
   "Ibland duplicerar ISO:s serienummer, särskilt med PSP/PSN-titlar. Att enbart förlita sig på serienumret kan ibland leda till att skannern placerar innehållet i fel system. Detta lägger till en CRC-kontroll, vilket saktar ner skanningen avsevärt, men kan vara mer exakt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LIST,
   "Hantera Spellistor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_LIST,
   "Genomför underhållsåtgärder på spellistor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_PORTABLE_PATHS,
   "Portabla spellistor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_PORTABLE_PATHS,
   "Om alternativet är aktiverat och ”Filbläddrare”-katalogen också är vald sparas det aktuella värdet för parametern ”Filbläddrare” i spellistan. När spellistan laddas på ett annat system där samma alternativ är aktiverat jämförs värdet på parametern ”Filbläddrare” med spellistans värde; om det skiljer sig åt fixas spellistans sökvägar automatiskt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_USE_FILENAME,
   "Använd filnamn för miniatyrbildsmatchning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_USE_FILENAME,
   "När den är aktiverad kommer miniatyrbilder att hittas utifrån postens filnamn, snarare än dess etikett."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ALLOW_NON_PNG,
   "Tillåt alla bildtyper som stöds för miniatyrbilder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_ALLOW_NON_PNG,
   "När den är aktiverad kan lokala miniatyrbilder läggas till i alla bildtyper som stöds av RetroArch (t. ex. jpeg). Kan ha en mindre inverkan på prestandan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANAGE,
   "Hantera"
   )

/* Settings > Playlists > Playlist Management */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_DEFAULT_CORE,
   "Standardkärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_DEFAULT_CORE,
   "Ange vilken kärna som ska användas när innehåll startas via en spellistepost som inte har någon befintlig kärn-association."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_RESET_CORES,
   "Återställ kärnassociationer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_RESET_CORES,
   "Ta bort befintliga kärnassociationer för alla spellisteposter."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE,
   "Visningsläge för Titlar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE,
   "Ändra hur innehållsetiketterna visas i den här spellistan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE,
   "Sorteringsmetod"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_SORT_MODE,
   "Bestäm hur posterna ska sorteras i den här spellistan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_CLEAN_PLAYLIST,
   "Rensa Spellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_CLEAN_PLAYLIST,
   "Validera kärnassociationer och ta bort ogiltiga och duplicerade poster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_REFRESH_PLAYLIST,
   "Uppdatera spellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_MANAGER_REFRESH_PLAYLIST,
   "Lägg till nytt innehåll och ta bort ogiltiga poster genom att upprepa ”Manuell skanning” som senast användes för att skapa eller redigera spellistan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_PLAYLIST,
   "Radera Spellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DELETE_PLAYLIST,
   "Ta bort spellistan från filsystem."
   )

/* Settings > User */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PRIVACY_SETTINGS,
   "Sekretess"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PRIVACY_SETTINGS,
   "Ändra sekretessinställningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_LIST,
   "Konton"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCOUNTS_LIST,
   "Hantera aktuella konfigurerade konton."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_NICKNAME,
   "Användarnamn"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_NICKNAME,
   "Ange ditt användarnamn här. Detta kommer bland annat att användas för Netplay-sessioner."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER_LANGUAGE,
   "Språk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_USER_LANGUAGE,
   "Ställ in språket för användargränssnittet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_USER_LANGUAGE,
   "Lokalanpassar menyn och alla meddelanden på skärmen enligt det språk du har valt här. Kräver en omstart för att ändringarna ska träda i kraft.\nÖversättningens fullständighet visas bredvid varje alternativ. Om ett språk inte är implementerat för ett menyalternativ återgår vi till engelska."
   )

/* Settings > User > Privacy */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CAMERA_ALLOW,
   "Tillåt kamera"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CAMERA_ALLOW,
   "Tillåt kärnor att komma åt kameran."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISCORD_ALLOW,
   "Tillåt Discord-appen att visa data om det innehåll som spelas upp. Endast tillgänglig med den inbyggda skrivbordsklienten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCATION_ALLOW,
   "Tillåt plats"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCATION_ALLOW,
   "Tillåt kärnor att komma åt din plats."
   )

/* Settings > User > Accounts */

MSG_HASH(
   MENU_ENUM_SUBLABEL_ACCOUNTS_RETRO_ACHIEVEMENTS,
   "Samla prestationframgångar i klassiska spel. För mer information, besök 'https://retroachievements.org'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_ACCOUNTS_RETRO_ACHIEVEMENTS,
   "Inloggningsuppgifter för ditt RetroAchievements-konto. Besök retroachievements.org och registrera dig för ett gratis konto.\nNNär du är klar med registreringen måste du ange användarnamn och lösenord i RetroArch."
   )

/* Settings > User > Accounts > RetroAchievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_USERNAME,
   "Användarnamn"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_USERNAME,
   "Ange ditt användarnamn för RetroAchievements-kontot."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACCOUNTS_CHEEVOS_PASSWORD,
   "Lösenord"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEEVOS_PASSWORD,
   "Ange lösenordet för ditt RetroAchievements-konto. Max längd: 255 tecken."
   )

/* Settings > User > Accounts > YouTube */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_YOUTUBE_STREAM_KEY,
   "Strömningsnyckel för YouTube"
   )

/* Settings > User > Accounts > Twitch */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TWITCH_STREAM_KEY,
   "Strömningsnyckel för Twitch"
   )

/* Settings > User > Accounts > Facebook Gaming */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FACEBOOK_STREAM_KEY,
   "Strömningsnyckel för Facebook Gaming"
   )

/* Settings > Directory */

MSG_HASH(
   MENU_ENUM_SUBLABEL_SYSTEM_DIRECTORY,
   "BIOS-filer, uppstarts-ROMar och andra systemspecifika filer lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIRECTORY,
   "Hämtningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_ASSETS_DIRECTORY,
   "Hämtade filer lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ASSETS_DIRECTORY,
   "Resurser"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ASSETS_DIRECTORY,
   "Menyresurser som används av RetroArch lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DYNAMIC_WALLPAPERS_DIRECTORY,
   "Dynamiska bakgrunder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DYNAMIC_WALLPAPERS_DIRECTORY,
   "Bakgrundsbilder som används i menyn lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_DIRECTORY,
   "Miniatyrer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_DIRECTORY,
   "Omslagsbilder, skärmbilder och miniatyrbilder för titelskärmar lagras i denna katalog."
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_BROWSER_DIRECTORY,
   "Start katalog"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_BROWSER_DIRECTORY,
   "Ställ in startkatalog för filbläddraren."
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_LABEL_VALUE_RGUI_CONFIG_DIRECTORY,
   "Konfigurationsfiler"
   )
MSG_HASH( /* FIXME Not RGUI specific */
   MENU_ENUM_SUBLABEL_RGUI_CONFIG_DIRECTORY,
   "Standardkonfigurationsfilen lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_DIR_PATH,
   "Kärnor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_DIR_PATH,
   "Libretro-kärnor lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LIBRETRO_INFO_PATH,
   "Kärninformation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LIBRETRO_INFO_PATH,
   "Informationsfiler för applikationer/kärnor lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_DATABASE_DIRECTORY,
   "Databaser"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_DATABASE_DIRECTORY,
   "Databaser lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DATABASE_PATH,
   "Fuskfiler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_DATABASE_PATH,
   "Fuskfiler lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_DIR,
   "Videofilter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_FILTER_DIR,
   "CPU-baserade videofilter lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_FILTER_DIR,
   "Ljudfilter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_AUDIO_FILTER_DIR,
   "DSP-ljudfilter lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_DIR,
   "GPU-baserade videoshaders lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_OUTPUT_DIRECTORY,
   "Inspelningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_OUTPUT_DIRECTORY,
   "Inspelningar lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORDING_CONFIG_DIRECTORY,
   "Inspelning Configs"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORDING_CONFIG_DIRECTORY,
   "Inspelningskonfigurationer lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_DIRECTORY,
   "Överlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERLAY_DIRECTORY,
   "Överlager lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OSK_OVERLAY_DIRECTORY,
   "Tangentbordsöverlager"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OSK_OVERLAY_DIRECTORY,
   "Tangentbordsöverlager lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_LAYOUT_DIRECTORY,
   "Videolayouter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_LAYOUT_DIRECTORY,
   "Videolayouter lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREENSHOT_DIRECTORY,
   "Skärmdumpar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREENSHOT_DIRECTORY,
   "Skärmbilder lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_JOYPAD_AUTOCONFIG_DIR,
   "Spelkontrollsprofiler"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_JOYPAD_AUTOCONFIG_DIR,
   "Spelkontrollsprofiler som automatisk konfigurerar spelkontroller lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_REMAPPING_DIRECTORY,
   "Ommappningar för inmatning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_DIRECTORY,
   "Spellistor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAYLIST_DIRECTORY,
   "Spellistor lagras i denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_FAVORITES_DIRECTORY,
   "Favoritspellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_FAVORITES_DIRECTORY,
   "Spara favoritspellista till denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_HISTORY_DIRECTORY,
   "Historikspellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_HISTORY_DIRECTORY,
   "Spara historikspellistan till denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_IMAGE_HISTORY_DIRECTORY,
   "Bildspellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_IMAGE_HISTORY_DIRECTORY,
   "Spara spellista för bildhistorik till denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_MUSIC_HISTORY_DIRECTORY,
   "Musikspellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_MUSIC_HISTORY_DIRECTORY,
   "Spara musikspellistan till denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_VIDEO_HISTORY_DIRECTORY,
   "Videospellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_VIDEO_HISTORY_DIRECTORY,
   "Spara videospellistan till denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUNTIME_LOG_DIRECTORY,
   "Körningslogg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUNTIME_LOG_DIRECTORY,
   "Körtidsloggar lagras i den här katalogen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVEFILE_DIRECTORY,
   "Spara filer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVEFILE_DIRECTORY,
   "Spara alla sparningsfiler till denna katalog. Om den inte är inställd försöker den spara i innehållsfilens arbetskatalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_SAVEFILE_DIRECTORY,
   "Spara alla filer (*.srm) till denna katalog. Detta inkluderar relaterade filer som .rt, .psrm, etc... Detta kommer att åsidosättas av explicita kommandoradsval."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_DIRECTORY,
   "Sparade tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_DIRECTORY,
   "Dina sparade tillstånd och inspelningar lagras i denna mapp. Om den inte är inställd hit så kommer den att försöka spara filerna i mappen där spelinnehållet är placerat."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CACHE_DIRECTORY,
   "Arkiverat innehåll kommer tillfälligt att extraheras till denna katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOG_DIR,
   "System händelselogg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOG_DIR,
   "Loggar för systemhändelser lagras i denna katalog."
   )

#ifdef HAVE_MIST
/* Settings > Steam */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_ENABLE,
   "Aktivera Rich Presence"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STEAM_RICH_PRESENCE_ENABLE,
   "Dela din aktuella status i RetroArch på Steam."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT,
   "Innehållsformat för Rich Presence"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STEAM_RICH_PRESENCE_FORMAT,
   "Bestäm vilken information som är relaterad till innehållet som ska delas."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_CONTENT,
   "Innehåll"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_CORE,
   "Kärnnamn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_SYSTEM,
   "Systemnamn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_CONTENT_SYSTEM,
   "Innehåll (Systemnamn)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_CONTENT_CORE,
   "Innehåll (Kärnnamn)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STEAM_RICH_PRESENCE_FORMAT_CONTENT_SYSTEM_CORE,
   "Innehåll (Systemnamn - Kärnnamn)"
   )
#endif

/* Music */

/* Music > Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER,
   "Lägg till i Mixer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_MIXER,
   "Lägg till det här ljudspåret i en tillgänglig ljudströmsplats.\nOm inga platser är tillgängliga för närvarande ignoreras det."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_PLAY,
   "Lägg till i Mixer och spela"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_MIXER_AND_PLAY,
   "Lägg till det här ljudspåret i en tillgänglig ljudströmsplats och spela upp det.\nOm inga platser är tillgängliga för närvarande ignoreras det."
   )

/* Netplay */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_HOSTING_SETTINGS,
   "Värd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE_CLIENT,
   "Anslut till Netplay-värd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ENABLE_CLIENT,
   "Ange Netplay-serveradress och anslut i klientläge."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DISCONNECT,
   "Koppla från Netplay-värd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_DISCONNECT,
   "Koppla från en aktiv Netplay anslutning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_LOBBY_FILTERS,
   "Filter för lobbyn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHOW_ONLY_CONNECTABLE,
   "Endast anslutningsbara rum"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHOW_ONLY_INSTALLED_CORES,
   "Endast installerade kärnor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHOW_PASSWORDED,
   "Lösenordsskyddade rum"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REFRESH_ROOMS,
   "Uppdatera Netplay-värdlistan"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REFRESH_ROOMS,
   "Leta efter netplay-värdar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_REFRESH_LAN,
   "Uppdatera Netplay-listan för LAN"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_REFRESH_LAN,
   "Leta efter netplay-värdar på LAN."
   )

/* Netplay > Host */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ENABLE_HOST,
   "Starta Netplay-värd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_ENABLE_HOST,
   "Starta netplay i värdläge (server)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_DISABLE_HOST,
   "Stoppa Netplay-värd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_KICK,
   "Sparka ut klient"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_KICK,
   "Sparka ut en klient från ditt aktuella värdrum."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_BAN,
   "Bannlys klient"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_BAN,
   "Bannlys en klient från ditt aktuella värdrum."
   )

/* Import Content */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_DIRECTORY,
   "Sök igenom katalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_DIRECTORY,
   "Skannar i en katalog efter innehåll som matchar databasen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_SCAN_THIS_DIRECTORY,
   "Välj detta för att skanna den aktuella katalogen efter innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_FILE,
   "Skanna fil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCAN_FILE,
   "Skannar en fil efter innehåll som matchar databasen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_LIST,
   "Manuell skanning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_LIST,
   "Konfigurerbar skanning baserad på filnamnet på innehåll. Kräver inte att innehåll matchar databasen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCAN_ENTRY,
   "Skanna"
   )

/* Import Content > Scan File */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_COLLECTION,
   "Lägg till i Mixer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_MIXER_AND_COLLECTION_AND_PLAY,
   "Lägg till i Mixer och spela"
   )

/* Import Content > Manual Scan */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DIR,
   "Innehållets katalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_DIR,
   "Välj en katalog för att söka efter innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME,
   "Systemets namn"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SYSTEM_NAME,
   "Ange ett 'systemnamn' med vilket du kan associera skannat innehåll. Används för att namnge den genererade spellistfilen och för att identifiera spellistminiatyrer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SYSTEM_NAME_CUSTOM,
   "Anpassat systemnamn"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SYSTEM_NAME_CUSTOM,
   "Ange manuellt ett 'systemnamn' för skannat innehåll. Används endast när 'Systemnamn' är satt till '<Custom>'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_CORE_NAME,
   "Standardkärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_CORE_NAME,
   "Välj en standardkärna att använda vid start av genomsökt innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_FILE_EXTS,
   "Filnamnstillägg"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_FILE_EXTS,
   "Lista över filtyper som ska inkluderas i sökningen, separerade med mellanslag. Om tom, innehåller alla filtyper, eller om en kärna anges, alla filer som stöds av kärnan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SEARCH_RECURSIVELY,
   "Sök igenom rekursivt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SEARCH_RECURSIVELY,
   "När den är aktiverad kommer alla underkataloger i den angivna ”Innehållskatalog” att ingå i sökningen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_SEARCH_ARCHIVES,
   "Skanna inuti Arkiv"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_SEARCH_ARCHIVES,
   "När detta är aktiverat kommer arkivfiler (.zip, .7z, etc.) att genomsökas efter giltigt/stödd innehåll. Kan ha en betydande inverkan på genomsökningsprestandan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DAT_FILE,
   "Arkad DAT-fil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_DAT_FILE,
   "Välj en Logiqx eller MAME List XML DAT-fil för att möjliggöra automatisk namngivning av genomsökt arkadinnehåll (MAME, FinalBurn Neo, etc.)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_DAT_FILE_FILTER,
   "Arkad DAT-filter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_OVERWRITE,
   "Skriv över befintlig spellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_OVERWRITE,
   "När denna funktion är aktiverad raderas alla befintliga spellistor innan innehållet söks igenom. När funktionen är inaktiverad behålls befintliga spellistor och endast innehåll som saknas i spellistan läggs till."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_VALIDATE_ENTRIES,
   "Validera befintliga poster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_VALIDATE_ENTRIES,
   "När funktionen är aktiverad kommer poster i en befintlig spellista att verifieras innan nytt innehåll söks igenom. Poster som hänvisar till innehåll som saknas och/eller filer med ogiltiga tillägg tas bort."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_START,
   "Starta skanning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MANUAL_CONTENT_SCAN_START,
   "Sök igenom valt innehåll."
   )

/* Explore tab */
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_INITIALISING_LIST,
   "Initierar lista..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_CATEGORY_RELEASE_YEAR,
   "Utgivet år"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_CATEGORY_PLAYER_COUNT,
   "Spelarantal"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_CATEGORY_TAG,
   "Tagg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_SEARCH_NAME,
   "Sök namn ..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_SHOW_ALL,
   "Visa Alla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ADDITIONAL_FILTER,
   "Ytterligare filter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ALL,
   "Alla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ADD_ADDITIONAL_FILTER,
   "Lägg till ytterligare filter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_ITEMS_COUNT,
   "%u objekt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_DEVELOPER,
   "Efter utvecklare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_PUBLISHER,
   "Efter utgivare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_RELEASE_YEAR,
   "Efter utgivningsår"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_PLAYER_COUNT,
   "Efter spelarantal"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_GENRE,
   "Efter genre"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_ACHIEVEMENTS,
   "Efter prestationer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_CATEGORY,
   "Efter kategori"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_LANGUAGE,
   "Efter språk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_REGION,
   "Efter region"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_CONSOLE_EXCLUSIVE,
   "Efter konsolen exklusiv"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_PLATFORM_EXCLUSIVE,
   "Efter Plattform exklusiv"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_RUMBLE,
   "Efter rumble"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_SCORE,
   "Efter poäng"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_MEDIA,
   "Efter media"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_CONTROLS,
   "Efter spelkontroller"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_ARTSTYLE,
   "Efter konststil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_GAMEPLAY,
   "Efter Spelsätt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_NARRATIVE,
   "Efter berättande"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_PACING,
   "Efter takt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_PERSPECTIVE,
   "Efter perspektiv"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_SETTING,
   "Efter inställning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_VISUAL,
   "Efter visuellt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_VEHICULAR,
   "Efter motor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_ORIGIN,
   "Efter ursprung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_FRANCHISE,
   "Efter franchise"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_TAG,
   "Efter tagg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_EXPLORE_BY_SYSTEM_NAME,
   "Efter systemnamn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_RANGE_FILTER,
   "Ställ in intervallfilter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_VIEW,
   "Visa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_SAVE_VIEW,
   "Spara som vy"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_DELETE_VIEW,
   "Radera vy"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_NEW_VIEW,
   "Ange namn för ny vy"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_VIEW_EXISTS,
   "Visa redan befintliga med samma namn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_VIEW_SAVED,
   "Vy sparad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_EXPLORE_VIEW_DELETED,
   "Vy raderad"
   )

/* Playlist > Playlist Item */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN,
   "Kör"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RUN,
   "Starta innehållet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RENAME_ENTRY,
   "Byt namn"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RENAME_ENTRY,
   "Byt namn på titeln för posten."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DELETE_ENTRY,
   "Ta bort"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DELETE_ENTRY,
   "Ta bort denna post från spellistan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_FAVORITES_PLAYLIST,
   "Lägg till i Favoriter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_FAVORITES_PLAYLIST,
   "Lägg till Innehållet i 'Favoriter'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_PLAYLIST,
   "Lägg till i spellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_PLAYLIST,
   "Lägg till innehållet till en spellista."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CREATE_NEW_PLAYLIST,
   "Skapa ny spellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CREATE_NEW_PLAYLIST,
   "Skapa en ny spellista och lägg till aktuellt objekt till den."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SET_CORE_ASSOCIATION,
   "Ställ in kärnassociation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SET_CORE_ASSOCIATION,
   "Ställ in kärna associerad med detta innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESET_CORE_ASSOCIATION,
   "Återställ kärnassociation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESET_CORE_ASSOCIATION,
   "Återställ kärnan som är kopplad till detta innehåll."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INFORMATION,
   "Visa mer information om innehållet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWNLOAD_PL_ENTRY_THUMBNAILS,
   "Hämta ner miniatyrer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DOWNLOAD_PL_ENTRY_THUMBNAILS,
   "Hämta ner miniatyrbilder för skärmdump/omslag/titelskärm för aktuellt innehåll. Uppdaterar eventuella befintliga miniatyrbilder."
   )

/* Playlist Item > Set Core Association */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DETECT_CORE_LIST_OK_CURRENT_CORE,
   "Nuvarande kärna"
   )

/* Playlist Item > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_LABEL,
   "Namn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_PATH,
   "Filsökväg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_ENTRY_IDX,
   "Objekt: %lu/%lu"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_CORE_NAME,
   "Kärna"
   )
MSG_HASH( /* FIXME Unused? */
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_RUNTIME,
   "Speltid"
   )
MSG_HASH( /* FIXME Unused? */
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_LAST_PLAYED,
   "Senast spelad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_DATABASE,
   "Databas"
   )

/* Quick Menu */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESUME_CONTENT,
   "Återuppta"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESUME_CONTENT,
   "Återuppta innehållet och lämna snabbmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RESTART_CONTENT,
   "Starta om"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RESTART_CONTENT,
   "Starta om innehållet från början."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLOSE_CONTENT,
   "Stäng Innehåll"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CLOSE_CONTENT,
   "Stäng innehållet. Eventuella osparade ändringar kan gå förlorade."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TAKE_SCREENSHOT,
   "Ta skärmdump"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TAKE_SCREENSHOT,
   "Ta en bild av skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_STATE_SLOT,
   "Tillståndsplats"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_STATE_SLOT,
   "Ändra den för närvarande valda status platsen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_STATE,
   "Spara tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_STATE,
   "Spara ett tillstånd av spelet till den för närvarande valda platsen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_SAVE_STATE,
   "Spara ett tillstånd till aktuella valda platsen. Observera: sparade tillstånd är oftast inte portabla och kanske inte fungerar andra versioner av denna kärna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_STATE,
   "Läs in tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_STATE,
   "Läs in ett sparat tillstånd från den aktuella valda platsen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_LOAD_STATE,
   "Läs in ett sparat tillstånd från aktuella valda platsen. Observera: kanske inte fungerar om tillståndet sparades med en annan version av kärnan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNDO_LOAD_STATE,
   "Ångra Läs in tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UNDO_LOAD_STATE,
   "Om ett tillstånd har lästs in återgår innehållet till det tillstånd som gällde före inläsningen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNDO_SAVE_STATE,
   "Ångra Spara tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_UNDO_SAVE_STATE,
   "Om ett tillstånd blev överskrivet kommer den att återgå till det tidigare sparade tillståndet."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REPLAY_SLOT,
   "Ändra den för närvarande valda tillståndsplatsen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAY_REPLAY,
   "Spela repris"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_PLAY_REPLAY,
   "Spela reprisfilen från den för närvarande valda platsen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_REPLAY,
   "Spela in repris"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RECORD_REPLAY,
   "Spela in reprisfil till den för närvarande valda platsen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HALT_REPLAY,
   "Stoppa Inspelning/Repris"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ADD_TO_FAVORITES,
   "Lägg till i Favoriter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ADD_TO_FAVORITES,
   "Lägg till Innehållet i 'Favoriter'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_START_RECORDING,
   "Starta inspelning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_START_RECORDING,
   "Starta videoinspelning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_STOP_RECORDING,
   "Stoppa inspelning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_STOP_RECORDING,
   "Stoppa videoinspelning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_START_STREAMING,
   "Börja strömma"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_START_STREAMING,
   "Starta strömning till valt mål."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_STOP_STREAMING,
   "Stoppa strömning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_STOP_STREAMING,
   "Avsluta ström."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVESTATE_LIST,
   "Sparade tillstånd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVESTATE_LIST,
   "Åtkomst till alternativ för sparade tillstånd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTIONS,
   "Kärnalternativ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTIONS,
   "Ändra alternativen för innehållet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_INPUT_REMAPPING_OPTIONS,
   "Spelkontroller"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_INPUT_REMAPPING_OPTIONS,
   "Ändra kontrollerna för innehållet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_CHEAT_OPTIONS,
   "Fusk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_CHEAT_OPTIONS,
   "Konfigurera fuskkoder."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_OPTIONS,
   "Skivhantering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_OPTIONS,
   "Skivavbildshantering."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_OPTIONS,
   "Ställ in shaders för att förbättra bilden visuellt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_OVERRIDE_OPTIONS,
   "Åsidosättningar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_OVERRIDE_OPTIONS,
   "Alternativ för att åsidosätta global konfiguration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_LIST,
   "Prestationer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_LIST,
   "Visa prestationer och relaterade inställningar."
   )

/* Quick Menu > Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTION_OVERRIDE_LIST,
   "Hantera kärnalternativ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTION_OVERRIDE_LIST,
   "Spara eller ta bort alternativåsidosättningar för aktuella innehållet."
   )

/* Quick Menu > Options > Manage Core Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_CORE_OPTIONS_CREATE,
   "Spara spelalternativ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_SPECIFIC_CORE_OPTIONS_CREATE,
   "Spara kärnalternativ som tillämpas endast för det aktuella innehållet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_CORE_OPTIONS_REMOVE,
   "Ta bort spelalternativ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_SPECIFIC_CORE_OPTIONS_REMOVE,
   "Ta bort kärnalternativ som tillämpas endast för det aktuella innehållet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FOLDER_SPECIFIC_CORE_OPTIONS_CREATE,
   "Alternativ för spara innehållskatalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FOLDER_SPECIFIC_CORE_OPTIONS_CREATE,
   "Spara kärnalternativ som tillämpas för allt innehåll inläst från samma katalog som den aktuella filen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FOLDER_SPECIFIC_CORE_OPTIONS_REMOVE,
   "Ta bort alternativ för innehållskatalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FOLDER_SPECIFIC_CORE_OPTIONS_REMOVE,
   "Ta bort kärnalternativ som tillämpas för allt innehåll inläst från samma katalog som den aktuella filen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTION_OVERRIDE_INFO,
   "Aktiv alternativfil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTION_OVERRIDE_INFO,
   "Den aktuella alternativfilen som används."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTIONS_RESET,
   "Nollställ kärnalternativ"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTIONS_RESET,
   "Ställ in alla alternativ för den aktuella kärnan till standardvärden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_OPTIONS_FLUSH,
   "Skriv alternativ till disk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CORE_OPTIONS_FLUSH,
   "Tvinga aktuella inställningar att skrivas till den aktiva alternativfilen. Säkerställer att alternativ bevaras i händelse av att en kärnbugg orsakar felaktig avstängning av frontend."
   )

/* - Legacy (unused) */
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS_CREATE,
   "Skapa spelalternativ-fil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_SPECIFIC_OPTIONS_IN_USE,
   "Spara spelalternativ-fil"
   )

/* Quick Menu > Controls */


/* Quick Menu > Controls > Manage Remap Files */

MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_LOAD,
   "Läs in och ersätt nuvarande inmatningsmappningar."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_SAVE_AS,
   "Spara aktuella inmatningsmappningar som en ny ommappningsfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_SAVE_GAME,
   "Spara spelommappningsfil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_REMOVE_GAME,
   "Ta bort fil för spelommappningar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMAP_FILE_RESET,
   "Nollställ inmatningsmappning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMAP_FILE_RESET,
   "Ställ in alla inmatningsalternativ till standardvärden."
   )

/* Quick Menu > Controls > Manage Remap Files > Load Remap File */


/* Quick Menu > Cheats */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_OR_CONT,
   "Starta eller fortsätt fusksökning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_CHEAT_START_OR_CONT,
   "Sök i minnet för att skapa nya fusk."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_LOAD,
   "Läs in fuskfil (ersätt)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_LOAD,
   "Läs in en fuskfil och ersätt befintliga fusk."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_LOAD_APPEND,
   "Läs in fuskfil (lägg till)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_LOAD_APPEND,
   "Läs in en fuskfil och lägg till i befintliga fusk."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RELOAD_CHEATS,
   "Läs om spelspecifika fusk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_SAVE_AS,
   "Spara fuskfil som"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_FILE_SAVE_AS,
   "Spara aktuella fusk som en fuskfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_TOP,
   "Lägg till nytt fusk överst"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_BOTTOM,
   "Lägg till nytt fusk nederst"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_ALL,
   "Radera alla fusk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_AFTER_LOAD,
   "Tillämpa fusk automatiskt under spelinläsning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_AFTER_LOAD,
   "Tillämpa fusk automatiskt när spelet läses in."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_AFTER_TOGGLE,
   "Verkställ efter växling"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_AFTER_TOGGLE,
   "Tillämpa fusk direkt efter växling."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_APPLY_CHANGES,
   "Tillämpa ändringar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_APPLY_CHANGES,
   "Fuskändringar kommer aktiveras direkt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT,
   "Fusk"
   )

/* Quick Menu > Cheats > Start or Continue Cheat Search */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_OR_RESTART,
   "Starta eller starta om fusksökning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_START_OR_RESTART,
   "Tryck Vänster eller Höger för att ändra bitstorlek."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EXACT,
   "Sök i minnet efter värden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EXACT,
   "Tryck vänster eller höger för att ändra värde."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EXACT_VAL,
   "Lika med %u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_LT,
   "Sök i minnet efter värden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_LT_VAL,
   "Mindre än innan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_LTE,
   "Sök i minnet efter värden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_LTE_VAL,
   "Mindre än eller lika med innan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_GT,
   "Sök i minnet efter värden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_GT_VAL,
   "Större än innan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_GTE,
   "Sök i minnet efter värden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_GTE_VAL,
   "Större än eller lika med innan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQ,
   "Sök i minnet efter värden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQ_VAL,
   "Lika med innan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_NEQ,
   "Sök i minnet efter värden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_NEQ_VAL,
   "Inte lika med innan"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQPLUS,
   "Sök i minnet efter värden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EQPLUS,
   "Tryck vänster eller höger för att ändra värde."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQPLUS_VAL,
   "Lika med innan +%u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_EQMINUS,
   "Sök i minnet efter värden"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_SEARCH_EQMINUS,
   "Tryck vänster eller höger för att ändra värde."
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_EQMINUS_VAL,
   "Lika med innan -%u (%X)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_MATCHES,
   "Lägg till %u matchningar till din lista"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_MATCH,
   "Ta bort matchning #"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_MATCH,
   "Skapa kodmatchning #"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MATCH,
   "Matchadress: %08X Mask: %02X"
   )

/* Quick Menu > Cheats > Load Cheat File (Replace) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE,
   "Fuskfil (ersätt)"
   )

/* Quick Menu > Cheats > Load Cheat File (Append) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_FILE_APPEND,
   "Fuskfil (lägg till)"
   )

/* Quick Menu > Cheats > Cheat Details */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DETAILS_SETTINGS,
   "Fuskdetaljer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_IDX,
   "Fuskposition i listan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_STATE,
   "Aktiverad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DESC,
   "Beskrivning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_HANDLER,
   "Hanterare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MEMORY_SEARCH_SIZE,
   "Sökstorlek för minne"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_TYPE,
   "Typ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_VALUE,
   "Värde"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADDRESS,
   "Minnesadress"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_BROWSE_MEMORY,
   "Bläddra adress: %08X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADDRESS_BIT_POSITION,
   "Mask för minnesadress"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_ADDRESS_BIT_POSITION,
   "Adressbitmask när minnesstorlek för sökning < 8-bitars."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_COUNT,
   "Antal iterationer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_COUNT,
   "Antal gånger fusket kommer att tillämpas. Använd tillsammans med de andra två alternativen för ”Iteration” för att påverka stora minnesområden."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_ADD_TO_ADDRESS,
   "Adressökning vid varje iteration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_ADD_TO_ADDRESS,
   "Efter varje iteration kommer ”Minnesadress” att ökas med detta tal gånger ”Sökstorlek för minne”."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_REPEAT_ADD_TO_VALUE,
   "Värdeökning vid varje iteration"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_REPEAT_ADD_TO_VALUE,
   "Efter varje iteration kommer ”Värde” att ökas med denna mängd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_VALUE,
   "Rumble-värde"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PORT,
   "Rumble-port"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_RUMBLE_PRIMARY_STRENGTH,
   "Primär Rumble-styrka"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CODE,
   "Kod"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_AFTER,
   "Lägg till nytt fusk efter denna"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_ADD_NEW_BEFORE,
   "Lägg till nytt fusk före denna"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_AFTER,
   "Kopiera detta fusk efter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_COPY_BEFORE,
   "Kopiera detta fusk före"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE,
   "Ta bort detta fusk"
   )

/* Quick Menu > Disc Control */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_TRAY_EJECT,
   "Mata ut skiva"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_TRAY_EJECT,
   "Öppna virtuellt skivfack och ta bort den laddade skivan. Om 'Pausa innehåll när menyn är aktiv' är aktiverat kanske vissa kärnor inte registrera ändringar om inte innehållet återupptas i några sekunder efter varje skivkontrollsåtgärd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_TRAY_INSERT,
   "Sätt i skiva"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_TRAY_INSERT,
   "Mata in skiva som matchar 'Nuvarande skivindex' och stäng virtuellt diskfack. Om 'Pausa innehåll när menyn är aktiv' är aktiverat kanske vissa kärnor inte registrera ändringar om inte innehållet återupptas i några sekunder efter varje skivkontrollsåtgärd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_IMAGE_APPEND,
   "Läs in ny skiva"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_IMAGE_APPEND,
   "Mata ut aktuell skiva, välj en ny skiva från filsystemet, och mata sedan in den och stäng det virtuella skivfacket.\nOBS: Detta är en äldre funktion. Det rekommenderas istället att läsa in flerskivstitlar via M3U-spellistor vilket tillåter val av skiva med alternativen 'Mata ut/in skiva' och 'Aktuellt skivindex'."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_IMAGE_APPEND_TRAY_OPEN,
   "Välj en ny skiva från filsystemet och mata in utan att stänga det virtuella skivfacket.\nOBS: Detta är en äldre funktion. Det rekommenderas istället att läsa in flerskivstitlar via M3U-spellistor vilket tillåter val av skiva med alternativen 'Mata ut/in skiva' och 'Aktuellt skivindex'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISK_INDEX,
   "Aktuellt skivindex"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DISK_INDEX,
   "Välj aktuell skiva från listan över tillgängliga avbilder. Skivan läses in när ”Mata in skiva” väljs."
   )

/* Quick Menu > Shaders */

MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADERS_ENABLE,
   "Aktivera pipeline för video shader."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_WATCH_FOR_CHANGES,
   "Bevaka shader-filer för ändringar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_WATCH_FOR_CHANGES,
   "Tillämpa automatiskt ändringar som gjorts i shader-filer på disken."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_SHADER_WATCH_FOR_CHANGES,
   "Bevaka shader-filer för nya ändringar. När du har sparat ändringar i en shader på disken kommer den automatiskt att kompileras om och tillämpas på innehållet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_REMEMBER_LAST_DIR,
   "Kom ihåg senast använda Shader-katalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_REMEMBER_LAST_DIR,
   "Öppna filbläddrare vid senast använda katalog när shader-förval och pass läses in."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET,
   "Läs in förinställd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET,
   "Läs in en förinställd Shader. Shader pipelinen kommer automatiskt att konfigureras."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_SHADER_PRESET,
   "Läs in en shader-förinställning direkt. Shader-menyn uppdateras i enlighet med detta.\nSkaleringsfaktorn som visas i menyn är tillförlitlig endast om förinställningen använder enkla skalningsmetoder (dvs. källskalning, samma skalningsfaktor för X/Y)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_PREPEND,
   "Lägg till förinställning före"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_PREPEND,
   "Lägg till förinställning före den aktuella inlästa förinställningen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_APPEND,
   "Lägg till förval"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_APPEND,
   "Lägg till förval till de redan inlästa förvalen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE,
   "Spara förinställning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE,
   "Spara aktuella shader-förvalet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE,
   "Ta bort förinställning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE,
   "Ta bort ett automatiskt shader-förval."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_APPLY_CHANGES,
   "Tillämpa ändringar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SHADER_APPLY_CHANGES,
   "Ändringar i shaderkonfigurationen träder i kraft omedelbart. Använd detta om du har ändrat antalet shaderpass, filtrering, FBO-skala etc."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_SHADER_APPLY_CHANGES,
   "När du har ändrat shaderinställningar, t.ex. antal shaderpass, filtrering, FBO-skala, använder du detta för att tillämpa ändringarna.\nAtt ändra dessa shaderinställningar är en ganska dyr operation så det måste göras uttryckligen.\nNär du tillämpar shaders sparas shaderinställningarna i en tillfällig fil (retroarch.slangp/.cgp/.glslp) och läses in. Filen finns kvar efter att RetroArch har avslutats och sparas i Shader-katalogen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PARAMETERS,
   "Shader parametrar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PARAMETERS,
   "Modifiera den aktuella shadern direkt. Ändringar sparas inte i den förinställda filen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_NUM_PASSES,
   "Shaderpass"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_NUM_PASSES,
   "Öka eller minska antalet shader-pipeline-pass. Separata shaders kan kopplas till varje pipeline-pass och dess skala och filtrering kan konfigureras."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_SHADER_NUM_PASSES,
   "RetroArch gör det möjligt att blanda och matcha olika shaders med godtyckliga shaderpass, med anpassade hårdvarufilter och skalfaktorer.\nDetta alternativ anger antalet shaderpass som ska användas. Om du ställer in det på 0 och använder Apply Shader Changes använder du en ”tom” shader."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_SHADER_PASS,
   "Sökväg till shader. Alla shaders måste vara av samma typ (t.ex. Cg, GLSL eller Slang). Ställ in Shader Directory för att ange var webbläsaren börjar leta efter shaders."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_SHADER_FILTER_PASS,
   "Hårdvarufilter för detta pass. Om ”Default” är inställt kommer filtret att vara antingen ”Linear” eller ”Nearest” beroende på inställningen ”Bilinear Filtering” under Video settings."
  )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCALE,
   "Skala"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_SHADER_SCALE_PASS,
   "Skala för detta pass. Skalfaktorn ackumuleras, dvs. 2x för första passet och 2x för andra passet ger dig en total skala på 4x.\nOm det finns en skalfaktor för sista passet sträcks resultatet till skärmen med standardfiltret, beroende på inställningen Bilineär filtrering under Videoinställningar.\nOm ”Standard” är inställt används antingen 1x skala eller sträckning till fullskärm beroende på om det inte är sista passet eller inte."
   )

/* Quick Menu > Shaders > Save */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_REFERENCE,
   "Enkla förinställningar"
   )

MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_REFERENCE,
   "Spara en shader-förinställning som har en länk till den ursprungliga förinställningen och som endast innehåller de parameterändringar som du har gjort."
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_AS,
   "Spara förinställd Shader som"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_AS,
   "Spara de aktuella shaderinställningarna som en ny shaderförinställning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_GLOBAL,
   "Spara globalt förval"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_GLOBAL,
   "Spara de aktuella shaderinställningarna som global standardinställning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_CORE,
   "Spara kärnförval"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_CORE,
   "Spara de aktuella shaderinställningarna som standard för den här kärnan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_PARENT,
   "Spara förval för innehållskatalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_PARENT,
   "Spara de aktuella shaderinställningarna som standard för alla filer i den aktuella innehållskatalogen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_SAVE_GAME,
   "Förval för sparat spel"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_SAVE_GAME,
   "Spara de aktuella shaderinställningarna som standardinställningar för innehållet."
   )

/* Quick Menu > Shaders > Remove */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PRESETS_FOUND,
   "Inga automatiska shader-förinställningar hittades"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_GLOBAL,
   "Ta bort globalt förval"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_GLOBAL,
   "Ta bort den globala förinställningen, som används av allt innehåll och alla kärnor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_CORE,
   "Ta bort kärnförval"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_CORE,
   "Ta bort förinställningen för kärna, som används av allt innehåll som körs med den för närvarande inlästa kärnan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_PARENT,
   "Ta bort förval för innehållskatalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_PARENT,
   "Ta bort förvalet för innehållskatalogen, som används av allt innehåll i den aktuella arbetskatalogen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SHADER_PRESET_REMOVE_GAME,
   "Ta bort spelförval"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_REMOVE_GAME,
   "Ta bort förinställningen för spel, som endast används för det specifika spelet i fråga."
   )

/* Quick Menu > Shaders > Shader Parameters */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_SHADER_PARAMETERS,
   "Inga shader-parametrar"
   )

/* Quick Menu > Overrides */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERRIDE_FILE_INFO,
   "Aktiv åsidosättningsfil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERRIDE_FILE_INFO,
   "Den aktuella åsidosättningsfilen som används."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERRIDE_FILE_LOAD,
   "Läs in åsidosättningsfil"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERRIDE_FILE_LOAD,
   "Läs in och ersätt aktuell konfiguration."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERRIDE_FILE_SAVE_AS,
   "Spara åsidosättningar som"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERRIDE_FILE_SAVE_AS,
   "Spara aktuell konfiguration som en ny åsidosättningsfil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Spara åsidosättningar för kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Spara en åsidosatt konfigurationsfil som kommer att gälla för allt innehåll som laddas med denna kärna. Kommer att ha företräde framför huvudkonfigurationen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMOVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Ta bort åsidosättningar för kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMOVE_CURRENT_CONFIG_OVERRIDE_CORE,
   "Ta bort den åsidosättande konfigurationsfilen som kommer att gälla för allt innehåll som läses in med denna kärna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "Spara åsidosättningar för innehållskatalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "Spara en överordnad konfigurationsfil som kommer att gälla för allt innehåll som laddas från samma katalog som den aktuella filen. Kommer att ha företräde framför huvudkonfigurationen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMOVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "Ta bort åsidosättningar för innehållskatalog"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMOVE_CURRENT_CONFIG_OVERRIDE_CONTENT_DIR,
   "Ta bort den åsidosättande konfigurationsfilen som gäller för allt innehåll som läses in från samma katalog som den aktuella filen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SAVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Åsidosättning för sparade spel"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Spara en åsidosättande konfigurationsfil som endast gäller för det aktuella innehållet. Har företräde framför huvudkonfigurationen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REMOVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Ta bort åsidosättningar för spel"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_REMOVE_CURRENT_CONFIG_OVERRIDE_GAME,
   "Ta bort konfigurationsfil för åsidosättningar som tillämpas endast på aktuellt innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERRIDE_UNLOAD,
   "Läs ur åsidosättning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OVERRIDE_UNLOAD,
   "Nollställ alla alternativ till globala konfigurationsvärden."
   )

/* Quick Menu > Achievements */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ACHIEVEMENTS_TO_DISPLAY,
   "Inga prestationer att visa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_PAUSE_CANCEL,
   "Avbryt paus för hardcore-läget för prestationer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_PAUSE_CANCEL,
   "Lämna hardcore-läget för prestationer aktiverat för den aktuella sessionen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_RESUME_CANCEL,
   "Avbryt återupptagning av hardcore-läget för prestationer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_RESUME_CANCEL,
   "Lämna hardcore-läget för prestationer inaktiverat för den aktuella sessionen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_PAUSE,
   "Pausa hardcore-läget för prestationer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_PAUSE,
   "Pausa hardcore-läget för prestationer för den aktuella sessionen. Den här åtgärden aktiverar fusk, spola tillbaka, slowmotion och läsa in sparade tillstånd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_RESUME,
   "Återuppta hardcore-läget för prestationer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_RESUME,
   "Återuppta hardcore-läget för prestationer för den aktuella sessionen. Den här åtgärden inaktiverar fusk, spola tillbaka, slowmotion och ladda sparade tillstånd och återställer det aktuella spelet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_SERVER_UNREACHABLE,
   "RetroAchievements-servern går inte att nå"
)
MSG_HASH(
   MENU_ENUM_SUBLABEL_ACHIEVEMENT_SERVER_UNREACHABLE,
   "En eller flera upplåsningar av prestationer nådde inte fram till servern. Upplåsningarna kommer att försöka igen så länge du lämnar appen öppen."
)
MSG_HASH(
   MENU_ENUM_LABEL_CHEEVOS_SERVER_DISCONNECTED,
   "RetroAchievements server går inte att nå. Kommer att försöka igen tills det lyckas eller appen stängs."
)
MSG_HASH(
   MENU_ENUM_LABEL_CHEEVOS_SERVER_RECONNECTED,
   "Alla väntande förfrågningar har synkroniserats till RetroAchievements-servern."
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_IDENTIFYING_GAME,
   "Identifierar spelet"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_FETCHING_GAME_DATA,
   "Hämtar speldata"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_STARTING_SESSION,
   "Startar session"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NOT_LOGGED_IN,
   "Inte inloggad"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETWORK_ERROR,
   "Nätverksfel"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNKNOWN_GAME,
   "Okänt spel"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CANNOT_ACTIVATE_ACHIEVEMENTS_WITH_THIS_CORE,
   "Prestationer kan inte aktiveras med denna kärna"
)

/* Quick Menu > Information */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_INFO_CHEEVOS_HASH,
   "Kontrollsumma för RetroAchievements"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_DETAIL,
   "Databaspost"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RDB_ENTRY_DETAIL,
   "Visa databasinformation för aktuellt innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ENTRIES_TO_DISPLAY,
   "Inga poster att visa"
   )

/* Miscellaneous UI Items */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORES_AVAILABLE,
   "Inga kärnor tillgängliga"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_OPTIONS_AVAILABLE,
   "Inga kärnalternativ tillgängliga"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_INFORMATION_AVAILABLE,
   "Ingen kärninformation tillgänglig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE_BACKUPS_AVAILABLE,
   "Inga kärnsäkerhetskopior är tillgängliga"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_FAVORITES_AVAILABLE,
   "Inga favoriter tillgängliga"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_HISTORY_AVAILABLE,
   "Ingen historik tillgänglig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_IMAGES_AVAILABLE,
   "Inga bilder tillgängliga"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_MUSIC_AVAILABLE,
   "Ingen musik tillgänglig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_VIDEOS_AVAILABLE,
   "Inga videor tillgängliga"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_INFORMATION_AVAILABLE,
   "Ingen information tillgänglig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PLAYLIST_ENTRIES_AVAILABLE,
   "Inga poster i spellistan finns tillgängliga"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_SETTINGS_FOUND,
   "Inga inställningar hittades"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_BT_DEVICES_FOUND,
   "Inga Bluetoothenheter hittades"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_NETWORKS_FOUND,
   "Inga nätverk hittades"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_CORE,
   "Ingen kärna"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SEARCH,
   "Sök"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CYCLE_THUMBNAILS,
   "Växla miniatyrbilder"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RANDOM_SELECT,
   "Välj slumpmässigt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_CONTROLS_BACK,
   "Tillbaka"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PARENT_DIRECTORY,
   "Föräldrakatalog"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_PARENT_DIRECTORY,
   "Gå bakåt till föräldrakatalogen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DIRECTORY_NOT_FOUND,
   "Katalogen hittades inte"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_ITEMS,
   "Inga föremål"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SELECT_FILE,
   "Välj fil"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION_90_DEG,
   "90 gr."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION_180_DEG,
   "180 gr."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ROTATION_270_DEG,
   "270 gr."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ORIENTATION_VERTICAL,
   "90 gr."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ORIENTATION_FLIPPED,
   "180 gr."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_ORIENTATION_FLIPPED_ROTATED,
   "270 gr."
   )

/* Settings Options */

MSG_HASH( /* FIXME Should be MENU_LABEL_VALUE */
   MSG_UNKNOWN_COMPILER,
   "Okänd kompilator"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL_OR,
   "Dela"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_DIGITAL_VOTE,
   "Rösta"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_ANALOG,
   "Analog ingångsdelning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_ANALOG_AVERAGE,
   "Medelvärde"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_NONE,
   "Ingen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SHARE_NO_PREFERENCE,
   "Ingen inställning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE_BOUNCE,
   "Studsa vänster/höger"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_TICKER_TYPE_LOOP,
   "Rulla åt vänster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_IMAGE_MODE,
   "Bildläge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_SPEECH_MODE,
   "Talläge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AI_SERVICE_NARRATOR_MODE,
   "Berättarläge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_HIST_FAV,
   "Historik & Favoriter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_ALL,
   "Alla spellistor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_ENTRY_REMOVE_ENABLE_NONE,
   "AV"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_HIST_FAV,
   "Historik och favoriter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_ALWAYS,
   "Alltid"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_INLINE_CORE_DISPLAY_NEVER,
   "Aldrig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_RUNTIME_PER_CORE,
   "Per kärna"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_RUNTIME_AGGREGATE,
   "Aggregera"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_CHARGED,
   "Laddad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_CHARGING,
   "Laddar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_DISCHARGING,
   "Urladdning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_POWER_SOURCE_NO_SOURCE,
   "Ingen källa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_USE_THIS_DIRECTORY,
   "Välj det här för att ställa in detta som katalog."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RETROPAD_WITH_ANALOG,
   "RetroPad med Analog"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NONE,
   "Ingen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNKNOWN,
   "Okänd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWN_Y_L_R,
   "Ner + Y + L1 + R1"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HOLD_START,
   "Start intryckt (2 sekunder)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HOLD_SELECT,
   "Select intryckt (2 sekunder)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DOWN_SELECT,
   "Ner + Select"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_CHANGES,
   "Ändringar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DOES_NOT_CHANGE,
   "Ändras inte"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_INCREASE,
   "Ökar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_DECREASE,
   "Minskar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_LT_VALUE,
   "< Rumble-värde"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_TYPE_GT_VALUE,
   "> Rumble-värde"
   )
MSG_HASH(
   MENU_ENUM_LABEL_RUMBLE_PORT_16,
   "Alla"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_SET_TO_VALUE,
   "Sätt till värde"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_INCREASE_VALUE,
   "Öka med värde"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_DECREASE_VALUE,
   "Minska med värde"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_EQ,
   "Kör nästa fusk om värde = minne"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_NEQ,
   "Kör nästa fusk om värde != minne"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_LT,
   "Kör nästa fusk om värde < minne"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_TYPE_RUN_NEXT_IF_GT,
   "Kör nästa fusk om värde > minne"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_1,
   "1-Bit, Maximalt värde = 0x01"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_2,
   "2-Bit, Maximalt värde = 0x03"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_4,
   "4-Bit, Maximalt värde = 0x0F"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_8,
   "8-Bit, Maximalt värde= 0xFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_16,
   "16-Bit, Maximalt värde = 0xFFFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_MEMORY_SIZE_32,
   "32-Bit, Maximalt värde = 0xFFFFFFFF"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_DEFAULT,
   "System förinställt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_ALPHABETICAL,
   "Alfabetisk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_SORT_MODE_OFF,
   "Ingen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_DEFAULT,
   "Visa hela titel etiketter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_PARENS,
   "Ta bort () innehåll"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_BRACKETS,
   "Ta bort [] innehåll"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_REMOVE_PARENS_AND_BRACKETS,
   "Ta bort () och []"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_REGION,
   "Behåll region"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_DISC_INDEX,
   "Behåll skivindex"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_LABEL_DISPLAY_MODE_KEEP_REGION_AND_DISC_INDEX,
   "Behåll region och skivindex"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PLAYLIST_MANAGER_THUMBNAIL_MODE_DEFAULT,
   "System förinställt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_BOXARTS,
   "Omslagskonst"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_SCREENSHOTS,
   "Skärmdump"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_TITLE_SCREENS,
   "Titelskärm"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAIL_MODE_LOGOS,
   "Innehållslogotyp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCROLL_FAST,
   "Snabb"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ON,
   "PÅ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OFF,
   "AV"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_YES,
   "Ja"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO,
   "Nej"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TRUE,
   "Sant"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FALSE,
   "Falskt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ENABLED,
   "Aktiverad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISABLED,
   "Inaktiverad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_LOCKED_ENTRY,
   "Låst"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNLOCKED_ENTRY,
   "Upplåst"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNOFFICIAL_ENTRY,
   "Inofficiell"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_UNSUPPORTED_ENTRY,
   "Stöds inte"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_RECENTLY_UNLOCKED_ENTRY,
   "Nyligen upplåst"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_ALMOST_THERE_ENTRY,
   "Nästan där"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_ACTIVE_CHALLENGES_ENTRY,
   "Aktiva utmaningar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_TRACKERS_ONLY,
   "Endast spårare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_NOTIFICATIONS_ONLY,
   "Endast meddelanden"
)
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DONT_CARE,
   "Standard"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LINEAR,
   "Linjär"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NEAREST,
   "Närmsta"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MAIN,
   "Huvudsaklig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT,
   "Innehåll"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANUAL_CONTENT_SCAN_CORE_NAME_DETECT,
   "<Ospecificerat>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_ANALOG,
   "Vänster Analog"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RIGHT_ANALOG,
   "Höger Analog"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_ANALOG_FORCED,
   "Vänster Analog (Tvingad)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RIGHT_ANALOG_FORCED,
   "Höger Analog (Tvingad)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_KEY,
   "Knapp %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_LEFT,
   "Mus 1"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_RIGHT,
   "Mus 2"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_MIDDLE,
   "Mus 3"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_BUTTON4,
   "Mus 4"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_BUTTON5,
   "Mus 5"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_WHEEL_UP,
   "Mushjul Upp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_WHEEL_DOWN,
   "Mushjul Ner"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_HORIZ_WHEEL_UP,
   "Mushjul Vänster"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_HORIZ_WHEEL_DOWN,
   "Mushjul Höger"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR_EARLY,
   "Tidig"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_POLL_TYPE_BEHAVIOR_LATE,
   "Sen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEDATE_AGO,
   "sedan"
   )

/* RGUI: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BACKGROUND_FILLER_THICKNESS_ENABLE,
   "Bakgrundsfyllnad Fet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BACKGROUND_FILLER_THICKNESS_ENABLE,
   "Öka storlek på bakgrundsfyllnadens schackbrädsrutor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BORDER_FILLER_ENABLE,
   "Kantfyllnad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_BORDER_FILLER_THICKNESS_ENABLE,
   "Kantfyllnad Fet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BORDER_FILLER_THICKNESS_ENABLE,
   "Öka storlek på kantfyllnadens schackbrädsrutor."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_BORDER_FILLER_ENABLE,
   "Visa menyram."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_FULL_WIDTH_LAYOUT,
   "Använd fullbreddslayout"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_FULL_WIDTH_LAYOUT,
   "Ändra storlek och placera menyposter för att utnyttja tillgängligt skärmutrymme på bästa sätt. Inaktivera detta för att använda klassisk tvåkolumnslayout med fast bredd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_LINEAR_FILTER,
   "Linjärt filter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_LINEAR_FILTER,
   "Lägger till en liten oskärpa till menyn för att mjuka upp hårda pixelkanter."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_INTERNAL_UPSCALE_LEVEL,
   "Intern uppskalning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_INTERNAL_UPSCALE_LEVEL,
   "Uppskalar menygränssnittet innan det ritas upp på skärmen. När det används med ”Linjärt menyfilter” aktiverat, tar det bort skalningsartefakter (ojämna bildpunkter) samtidigt som bilden förblir skarp. Har en betydande inverkan på prestandan som ökar med uppskalningsnivån."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_ASPECT_RATIO,
   "Bildformat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_ASPECT_RATIO,
   "Välj bildformat för meny. Bredbildsformat ökar den horisontella upplösningen i menygränssnittet. (Kan kräva en omstart om 'Lås bildformat' är inaktiverad)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_ASPECT_RATIO_LOCK,
   "Lås bildformat"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_ASPECT_RATIO_LOCK,
   "Säkerställer att menyn alltid visas med rätt bildformat. Inaktiverad kommer snabbmenyn att sträckas ut för att matcha det för närvarande laddade innehållet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME,
   "Färgtema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RGUI_MENU_COLOR_THEME,
   "Välj ett annat färgtema. Om du väljer ”Anpassad” kan du använda förinställda filer för menyteman."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_THEME_PRESET,
   "Anpassat temaförval"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_RGUI_MENU_THEME_PRESET,
   "Välj ett förinställt menytema från filbläddraren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_TRANSPARENCY,
   "Genomskinlighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_TRANSPARENCY,
   "Aktivera bakgrundsvisning av innehåll när snabbmenyn är aktiv. Om du inaktiverar transparens kan temafärgerna ändras."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SHADOWS,
   "Skuggeffekter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SHADOWS,
   "Aktivera skuggor för menytext, ramar och miniatyrer. Har en blygsam prestandapåverkan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT,
   "Animerad bakgrund"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT,
   "Aktivera animeringseffekt för bakgrundspartiklar. Har en betydande prestandapåverkan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT_SPEED,
   "Animerad bakgrunds hastighet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT_SPEED,
   "Justera hastigheten på animationseffekterna för bakgrundspartiklar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_PARTICLE_EFFECT_SCREENSAVER,
   "Bakgrundsanimering för skärmsläckare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_PARTICLE_EFFECT_SCREENSAVER,
   "Visa partikelanimationseffekt i bakgrunden när menyskärmsläckaren är aktiv."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_INLINE_THUMBNAILS,
   "Visa miniatyrbilder för spellista"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_INLINE_THUMBNAILS,
   "Aktivera visning av nedskalade miniatyrbilder inline när du visar spellistor. Växlingsbar med RetroPad Select. När funktionen är inaktiverad kan miniatyrbilderna fortfarande växlas till helskärm med RetroPad Start."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_RGUI,
   "Övre miniatyrbild"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_RGUI,
   "Nedre miniatyrbild"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SWAP_THUMBNAILS,
   "Växla miniatyrbilder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_THUMBNAIL_DOWNSCALER,
   "Omsamplingsmetod som används när stora miniatyrbilder krymps för att passa skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_THUMBNAIL_DELAY,
   "Miniatyrbildsfördröjning (ms)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_THUMBNAIL_DELAY,
   "Tillämpar en tidsfördröjning mellan valet av en spellistepost och laddningen av dess tillhörande miniatyrbilder. Om du ställer in detta till ett värde på minst 256 ms möjliggörs snabb och fördröjningsfri rullning även på de långsammaste enheterna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_EXTENDED_ASCII,
   "Utökat ASCII-stöd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_EXTENDED_ASCII,
   "Aktivera visning av icke-standardiserade ASCII-tecken. Krävs för kompatibilitet med vissa icke-engelska västerländska språk. Har en måttlig prestationspåverkan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_RGUI_SWITCH_ICONS,
   "Skifta ikoner/text"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_RGUI_SWITCH_ICONS,
   "Använd ikoner istället för PÅ/AV-text för att representera 'omkopplare' menyinställningar."
   )

/* RGUI: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_POINT,
   "Närmsta granne (Snabb)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_BILINEAR,
   "Bilinjär"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_THUMB_SCALE_SINC,
   "Sinc/Lanczos3 (Långsam)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_UPSCALE_NONE,
   "Ingen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_16_9_CENTRE,
   "16:9 (Centrerad)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_16_10_CENTRE,
   "16:10 (Centrerad)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_21_9_CENTRE,
   "21:9 (Centrerad)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_3_2_CENTRE,
   "3:2 (Centrerad)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_5_3_CENTRE,
   "5:3 (Centrerad)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_NONE,
   "AV"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_FIT_SCREEN,
   "Anpassa till skärm"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_INTEGER,
   "Heltalsskala"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_ASPECT_RATIO_LOCK_FILL_SCREEN,
   "Fyll skärm (Sträckt)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CUSTOM,
   "Anpassa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_RED,
   "Klassisk röd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_ORANGE,
   "Klassisk orange"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_YELLOW,
   "Klassisk gul"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_GREEN,
   "Klassisk grön"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_BLUE,
   "Klassisk blå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_VIOLET,
   "Klassisk violett"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_CLASSIC_GREY,
   "Klassisk grå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_LEGACY_RED,
   "Äldre röd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_DARK_PURPLE,
   "Mörklila"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_MIDNIGHT_BLUE,
   "Midnattsblå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GOLDEN,
   "Gyllene"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_ELECTRIC_BLUE,
   "Elektrisk blå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_APPLE_GREEN,
   "Äppelgrön"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_VOLCANIC_RED,
   "Vulkanröd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRUVBOX_DARK,
   "Gruvbox Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRUVBOX_LIGHT,
   "Gruvbox Ljus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_SOLARIZED_DARK,
   "Solarized Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_SOLARIZED_LIGHT,
   "Solarized Ljus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_TANGO_DARK,
   "Tango Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_TANGO_LIGHT,
   "Tango Ljus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRAY_DARK,
   "Grå Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_MENU_COLOR_THEME_GRAY_LIGHT,
   "Grå Ljus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_NONE,
   "AV"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_SNOW,
   "Snö (Lätt)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_SNOW_ALT,
   "Snö (Tungt)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_RAIN,
   "Regn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_VORTEX,
   "Virvel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RGUI_PARTICLE_EFFECT_STARFIELD,
   "Stjärnfält"
   )

/* XMB: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS,
   "Sekundär miniatyrbild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS,
   "Typ av miniatyrbild att visa till vänster."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ICON_THUMBNAILS,
   "Miniatyrbild för ikon"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_ICON_THUMBNAILS,
   "Typ av miniatyrbild för spellisteikon att visa."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DYNAMIC_WALLPAPER,
   "Dynamisk bakgrund"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_DYNAMIC_WALLPAPER,
   "Läs in en ny bakgrundsbild dynamiskt beroende på kontext."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_HORIZONTAL_ANIMATION,
   "Horisontell animering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_HORIZONTAL_ANIMATION,
   "Aktivera horisontell animering för menyn. Detta kommer att påverka prestandan."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_HORIZONTAL_HIGHLIGHT,
   "Animeringen som aktiveras vid rullning mellan flikar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_MOVE_UP_DOWN,
   "Animering för flytta uppåt/neråt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_MOVE_UP_DOWN,
   "Animationen som aktiveras när du flyttar uppåt eller nedåt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_ANIMATION_OPENING_MAIN_MENU,
   "Animering för huvudmenyns öppna/stänga"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_ANIMATION_OPENING_MAIN_MENU,
   "Animationen som aktiveras när ett undermeny öppnas."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ALPHA_FACTOR,
   "Alfafaktor för färgtema"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_FONT,
   "Typsnitt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_FONT,
   "Välj ett annat huvudsakligt teckensnitt som ska användas av menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_RED,
   "Teckenfärg (röd)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_GREEN,
   "Teckenfärg (grön)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_FONT_COLOR_BLUE,
   "Teckenfärg (blå)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_LAYOUT,
   "Välj en annan layout för XMB-gränssnittet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_THEME,
   "Ikontema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_THEME,
   "Välj ett annat ikontema för RetroArch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_SWITCH_ICONS,
   "Skifta ikoner/text"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_SWITCH_ICONS,
   "Använd ikoner istället för PÅ/AV-text för att representera 'omkopplare' menyinställningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_SHADOWS_ENABLE,
   "Skuggeffekter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_SHADOWS_ENABLE,
   "Rita skuggor för ikoner, miniatyrbilder och bokstäver. Detta kommer att påverka prestandan något."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_RIBBON_ENABLE,
   "Shader-rörledning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_RIBBON_ENABLE,
   "Välj en animerad bakgrundseffekt. Kan vara GPU-intensiv beroende på effekten. Om prestandan är otillfredsställande kan du antingen stänga av den eller återgå till en enklare effekt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME,
   "Färgtema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_MENU_COLOR_THEME,
   "Välj ett annat bakgrundsfärg tema."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_VERTICAL_THUMBNAILS,
   "Visa den vänstra miniatyrbilden under den högra, på den högra sidan av skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_THUMBNAIL_SCALE_FACTOR,
   "Miniatyrskalfaktor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_XMB_THUMBNAIL_SCALE_FACTOR,
   "Minska visningsstorlek för miniatyrbild genom att skala maximal tillåten bredd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_SHOW_TITLE_HEADER,
   "Visa titelrubrik"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_XMB_TITLE_MARGIN,
   "Titelmarginal"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MAIN_MENU_ENABLE_SETTINGS,
   "Aktivera inställningsflik (omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_XMB_MAIN_MENU_ENABLE_SETTINGS,
   "Visa inställningsfliken som innehåller programinställningar."
   )

/* XMB: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_RIBBON_SIMPLIFIED,
   "Ribbon (Förenklad)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SIMPLE_SNOW,
   "Enkel snö"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOW,
   "Snö"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHADER_PIPELINE_SNOWFLAKE,
   "Snöflingor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_CUSTOM,
   "Anpassa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_MONOCHROME,
   "Monokrom"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_MONOCHROME_INVERTED,
   "Monokrom inverterad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_SYSTEMATIC,
   "Systematisk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_AUTOMATIC,
   "Automatisk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_ICON_THEME_AUTOMATIC_INVERTED,
   "Automatisk inverterad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_APPLE_GREEN,
   "Äppelgrön"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_DARK,
   "Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LIGHT,
   "Ljus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_MORNING_BLUE,
   "Morgon blå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_SUNBEAM,
   "Solstråle"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_DARK_PURPLE,
   "Mörklila"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_ELECTRIC_BLUE,
   "Elektrisk blå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_GOLDEN,
   "Gyllene"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LEGACY_RED,
   "Äldre röd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_MIDNIGHT_BLUE,
   "Midnattsblå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_PLAIN,
   "Bakgrundsbild"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_UNDERSEA,
   "Under havet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_VOLCANIC_RED,
   "Vulkanröd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_LIME,
   "Limegrön"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_PIKACHU_YELLOW,
   "Pikachu Gul"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_GAMECUBE_PURPLE,
   "Cube Lila"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_FAMICOM_RED,
   "Family Röd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_ICE_COLD,
   "Iskall"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_GRAY_DARK,
   "Grå Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_XMB_MENU_COLOR_THEME_GRAY_LIGHT,
   "Grå Ljus"
   )

/* Ozone: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_FONT,
   "Typsnitt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_FONT,
   "Välj ett annat huvudsakligt teckensnitt som ska användas av menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_FONT_SCALE,
   "Typsnittsskala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_FONT_SCALE,
   "Ange om teckenstorleken i menyn ska ha egen skalning och om den ska skalas globalt eller med separata värden för varje del av menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_FONT_SCALE_GLOBAL,
   "Globalt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_FONT_SCALE_SEPARATE,
   "Separata värden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_FONT_SCALE_FACTOR_GLOBAL,
   "Skalningsfaktor för typsnitt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_FONT_SCALE_FACTOR_GLOBAL,
   "Skala typsnittsstorleken linjärt över hela menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_FONT_SCALE_FACTOR_TITLE,
   "Skalningsfaktor för titeltypsnitt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_FONT_SCALE_FACTOR_LABEL,
   "Skala teckenstorleken för etiketterna för menyalternativ och spellistposter. Påverkar även textstorleken i hjälpfönstren."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_FONT_SCALE_FACTOR_SUBLABEL,
   "Faktor för typsnittsskalning för underetiketter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_FONT_SCALE_FACTOR_SUBLABEL,
   "Skala teckenstorleken för underetiketterna för menyalternativ och spellistposter."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_FONT_SCALE_FACTOR_TIME,
   "Faktor för typsnittsskalning för tid och datum"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_FONT_SCALE_FACTOR_TIME,
   "Skala teckenstorleken för tids- och datumindikatorn i det övre högra hörnet av menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_FONT_SCALE_FACTOR_FOOTER,
   "Faktor för typsnittsskalning för menyfot"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_FONT_SCALE_FACTOR_FOOTER,
   "Skala teckenstorleken för texten i menyfoten. Påverkar även textstorleken i den högra miniatyrbildsfältet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLLAPSE_SIDEBAR,
   "Dölj sidofältet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_COLLAPSE_SIDEBAR,
   "Har alltid det vänstra sidofältet hopfällt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_TRUNCATE_PLAYLIST_NAME,
   "Korta ner namn för spellistor (omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_TRUNCATE_PLAYLIST_NAME,
   "Ta bort tillverkarens namn från spellistorna. Till exempel, 'Sony - PlayStation' blir 'PlayStation'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_SORT_AFTER_TRUNCATE_PLAYLIST_NAME,
   "Sortera spellistor efter avkortat namn (omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_SORT_AFTER_TRUNCATE_PLAYLIST_NAME,
   "Spellistorna kommer att sorteras om i alfabetisk ordning efter att tillverkarkomponenten i deras namn har tagits bort."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_OZONE,
   "Sekundär miniatyrbild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_OZONE,
   "Ersätt panelen med innehållsmetadata med en annan miniatyrbild."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_SCROLL_CONTENT_METADATA,
   "När den är aktiverad kommer varje metadataobjekt som visas i spellistornas högra sidofält (associerad kärna, speltid) att uppta en enda rad; strängar som överskrider sidofältets bredd kommer att visas som rullande tickertext. När den är inaktiverad visas varje innehållsmetadata statiskt, omslaget så att det upptar så många rader som krävs."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_THUMBNAIL_SCALE_FACTOR,
   "Miniatyrskalfaktor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_THUMBNAIL_SCALE_FACTOR,
   "Skala storleken på miniatyrfältet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_PADDING_FACTOR,
   "Utfyllnadsfaktor"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_PADDING_FACTOR,
   "Skala storleken på horisontell utfyllnad."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_HEADER_SEPARATOR,
   "Rubrikavgränsare"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_HEADER_SEPARATOR,
   "Alternativ bredd för avgränsare för rubrik och sidfot."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_HEADER_SEPARATOR_NONE,
   "Ingen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_HEADER_SEPARATOR_MAXIMUM,
   "Maximalt"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_MENU_COLOR_THEME,
   "Färgtema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_OZONE_MENU_COLOR_THEME,
   "Välj ett annat färgtema."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BASIC_WHITE,
   "Simpel vit"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_BASIC_BLACK,
   "Simpel svart"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_GRUVBOX_DARK,
   "Gruvbox Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_SOLARIZED_DARK,
   "Solarized Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_SOLARIZED_LIGHT,
   "Solarized Ljus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_GRAY_DARK,
   "Grå Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OZONE_COLOR_THEME_GRAY_LIGHT,
   "Grå Ljus"
   )


/* MaterialUI: Settings > User Interface > Appearance */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_ICONS_ENABLE,
   "Ikoner"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_ICONS_ENABLE,
   "Visa ikoner till vänster om menyposterna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_SWITCH_ICONS,
   "Skifta ikoner/text"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_SWITCH_ICONS,
   "Använd ikoner istället för PÅ/AV-text för att representera 'omkopplare' menyinställningar."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_PLAYLIST_ICONS_ENABLE,
   "Spellistikoner (omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_PLAYLIST_ICONS_ENABLE,
   "Visa systemspecifika ikoner i spellistorna."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION,
   "Optimera landskapslayout"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION,
   "Justera menylayouten automatiskt för att bättre passa skärmen när du använder liggande visningsorientering."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_SHOW_NAV_BAR,
   "Visa navigeringsfältet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_SHOW_NAV_BAR,
   "Visa permanenta menynavigeringsgenvägar på skärmen. Möjliggör snabb växling mellan menykategorier. Rekommenderas för pekskärmsenheter."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_AUTO_ROTATE_NAV_BAR,
   "Autorotera navigationsfältet"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_AUTO_ROTATE_NAV_BAR,
   "Flytta automatiskt navigeringsfältet till höger sida av skärmen när du använder liggande visningsorientering."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME,
   "Färgtema"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_COLOR_THEME,
   "Välj ett annat bakgrundsfärg tema."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIMATION,
   "Övergångsanimation"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_TRANSITION_ANIMATION,
   "Aktivera mjuka animeringseffekter när du navigerar mellan olika nivåer i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_THUMBNAIL_VIEW_PORTRAIT,
   "Stående miniatyrvy"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_THUMBNAIL_VIEW_PORTRAIT,
   "Ange miniatyrvisningsläge för spellistan när du använder stående visningsorientering."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_THUMBNAIL_VIEW_LANDSCAPE,
   "Liggande miniatyrvy"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_THUMBNAIL_VIEW_LANDSCAPE,
   "Ange miniatyrvisningsläge för spellistan när du använder liggande visningsorientering."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_DUAL_THUMBNAIL_LIST_VIEW_ENABLE,
   "Visa sekundär miniatyrbild i listvyer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_DUAL_THUMBNAIL_LIST_VIEW_ENABLE,
   "Visar en sekundär miniatyrbild när du använder miniatyrvisningslägen av typen 'Lista'. Den här inställningen gäller endast när skärmen har tillräcklig fysisk bredd för att visa två miniatyrer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_BACKGROUND_ENABLE,
   "Miniatyrbildsbakgrunder"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MATERIALUI_THUMBNAIL_BACKGROUND_ENABLE,
   "Möjliggör utfyllnad av oanvänt utrymme i miniatyrbilder med en solid bakgrund. Detta säkerställer en enhetlig visningsstorlek för alla bilder, vilket förbättrar menyutseendet när du tittar på miniatyrbilder av blandat innehåll med olika basmått."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_THUMBNAILS_MATERIALUI,
   "Primär miniatyrbild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_THUMBNAILS_MATERIALUI,
   "Huvudtyp av miniatyrbild som ska associeras med varje spellistepost. Fungerar vanligtvis som innehållsikon."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LEFT_THUMBNAILS_MATERIALUI,
   "Sekundär miniatyrbild"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LEFT_THUMBNAILS_MATERIALUI,
   "Hjälptyp av miniatyrbild som ska associeras med varje spellistepost. Användningen beror på det aktuella visningsläget för miniatyrbilder i spellistan."
   )

/* MaterialUI: Settings Options */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_BLUE,
   "Blå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_BLUE_GREY,
   "Blågrå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_DARK_BLUE,
   "Mörkblå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_GREEN,
   "Grön"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_RED,
   "Röd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_YELLOW,
   "Gul"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_MATERIALUI_DARK,
   "Material UI Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_OZONE_DARK,
   "Ozone Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_GRUVBOX_DARK,
   "Gruvbox Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_SOLARIZED_DARK,
   "Solarized Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_BLUE,
   "Cutie Blå"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_CYAN,
   "Cutie Turkos"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_GREEN,
   "Cutie Grön"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_PINK,
   "Cutie Rosa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_PURPLE,
   "Cutie Lila"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_CUTIE_RED,
   "Cutie Röd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_GRAY_DARK,
   "Grå Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_COLOR_THEME_GRAY_LIGHT,
   "Grå Ljus"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_FADE,
   "Tona"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_SLIDE,
   "Glid"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_TRANSITION_ANIM_NONE,
   "AV"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_DISABLED,
   "AV"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_LIST_SMALL,
   "Lista (Liten)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_LIST_MEDIUM,
   "Lista (Medium)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_PORTRAIT_DUAL_ICON,
   "Dubbel ikon"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_DISABLED,
   "AV"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_SMALL,
   "Lista (Liten)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_MEDIUM,
   "Lista (Medium)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_THUMBNAIL_VIEW_LANDSCAPE_LIST_LARGE,
   "Lista (stor)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_DISABLED,
   "AV"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_ALWAYS,
   "PÅ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MATERIALUI_LANDSCAPE_LAYOUT_OPTIMIZATION_EXCLUDE_THUMBNAIL_VIEWS,
   "Exkludera miniatyrvisningar"
   )

/* Qt (Desktop Menu) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE,
   "&Arkiv"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE_LOAD_CORE,
   "&Läs in kärna..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE_UNLOAD_CORE,
   "Läs &ur kärna"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_FILE_EXIT,
   "A&vsluta"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_EDIT,
   "&Redigera"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_EDIT_SEARCH,
   "&Sök"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW,
   "Vis&a"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_CLOSED_DOCKS,
   "Stängda dockor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_SHADER_PARAMS,
   "Shader parametrar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS,
   "&Inställningar..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_DOCK_POSITIONS,
   "Kom ihåg dockpositioner:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_GEOMETRY,
   "Kom ihåg fönstergeometri:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SAVE_LAST_TAB,
   "Kom ihåg senaste filk i innehållsbläddraren:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME,
   "Tema:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME_DARK,
   "Mörk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THEME_CUSTOM,
   "Anpassad..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_TITLE,
   "Inställningar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_TOOLS,
   "&Verktyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP,
   "&Hjälp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_ABOUT,
   "Om RetroArch"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_DOCUMENTATION,
   "Dokumentation"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD_CUSTOM_CORE,
   "Läs in anpassad kärna..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD_CORE,
   "Läs in kärna"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOADING_CORE,
   "Läser in kärna..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_NAME,
   "Namn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_PLAYLISTS,
   "Spellistor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER,
   "Filhanterare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER_TOP,
   "Toppen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_TAB_FILE_BROWSER_UP,
   "Upp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_DOCK_CONTENT_BROWSER,
   "Innehållsbläddrare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_BOXART,
   "Omslagskonst"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_SCREENSHOT,
   "Skärmdump"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_TITLE_SCREEN,
   "Titelskärm"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_LOGO,
   "Logotyp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ALL_PLAYLISTS,
   "Alla spellistor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE,
   "Kärna"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_INFO,
   "Kärninformation"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_SELECTION_ASK,
   "<fråga mig>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_WARNING,
   "Varning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ERROR,
   "Fel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_NETWORK_ERROR,
   "Nätverksfel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESTART_TO_TAKE_EFFECT,
   "Starta om programmet för att ändringarna ska börja gälla."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOG,
   "Logg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ITEMS_COUNT,
   "%1 objekt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DROP_IMAGE_HERE,
   "Dra och släpp bilden här"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DONT_SHOW_AGAIN,
   "Visa inte detta igen"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_STOP,
   "Stopp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ASSOCIATE_CORE,
   "Associera kärna"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_HIDDEN_PLAYLISTS,
   "Dolda spellistor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_HIDE,
   "Dölj"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_HIGHLIGHT_COLOR,
   "Highlight färg:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CHOOSE,
   "V&älj..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_COLOR,
   "Välj färg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_THEME,
   "Välj tema"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CUSTOM_THEME,
   "Anpassat tema"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_PATH_IS_BLANK,
   "Sökväg till filen är tom."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_IS_EMPTY,
   "Filen är tom."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_READ_OPEN_FAILED,
   "Kunde inte öppna filen för att läsa."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_WRITE_OPEN_FAILED,
   "Kunde inte öppna filen för att skriva."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FILE_DOES_NOT_EXIST,
   "Filen existerar inte."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SUGGEST_LOADED_CORE_FIRST,
   "Föreslå inläst kärna först:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW,
   "Visa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW_TYPE_ICONS,
   "Ikoner"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_VIEW_TYPE_LIST,
   "Lista"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_SEARCH_CLEAR,
   "Rensa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PROGRESS,
   "Förlopp:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_ALL_PLAYLISTS_LIST_MAX_COUNT,
   "Max antal listposter för \"Alla spellistor\":"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_ALL_PLAYLISTS_GRID_MAX_COUNT,
   "Max antal rutnätsposter för \"Alla spellistor\":"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_SHOW_HIDDEN_FILES,
   "Visa dolda filer och mappar:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_NEW_PLAYLIST,
   "Ny spellista"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ENTER_NEW_PLAYLIST_NAME,
   "Ange namn för ny spellista:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DELETE_PLAYLIST,
   "Radera Spellista"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RENAME_PLAYLIST,
   "Byt namn Spellista"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CONFIRM_DELETE_PLAYLIST,
   "Är du säker på att du vill radera spellistan \"%1\"?"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_QUESTION,
   "Fråga"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_COULD_NOT_DELETE_FILE,
   "Kunde inte radera fil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_COULD_NOT_RENAME_FILE,
   "Kunde inte döpa om fil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_GATHERING_LIST_OF_FILES,
   "Samlar in en lista över filer..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADDING_FILES_TO_PLAYLIST,
   "Lägger till filer i spellista..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY,
   "Spellistpost"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_NAME,
   "Namn:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_PATH,
   "Sökväg:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_CORE,
   "Kärna:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_DATABASE,
   "Databas:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_EXTENSIONS,
   "Tillägg:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_EXTENSIONS_PLACEHOLDER,
   "(blankstegsseparerade; inkluderar alla som standard)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLAYLIST_ENTRY_FILTER_INSIDE_ARCHIVES,
   "Filtrera inuti arkiv"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FOR_THUMBNAILS,
   "(används för att hitta miniatyrbilder)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CONFIRM_DELETE_PLAYLIST_ITEM,
   "Är du säker på att du vill radera objektet \"%1\"?"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CANNOT_ADD_TO_ALL_PLAYLISTS,
   "Välj en spellista först."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DELETE,
   "Radera"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_ENTRY,
   "Lägg till post..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_FILES,
   "Lägg till fil(er)..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_ADD_FOLDER,
   "Lägg till mapp..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_EDIT,
   "Redigera"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_FILES,
   "Välj filer"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SELECT_FOLDER,
   "Välj mapp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_FIELD_MULTIPLE,
   "<flera>"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_COULD_NOT_UPDATE_PLAYLIST_ENTRY,
   "Fel vid uppdatering av spellistepost."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_PLEASE_FILL_OUT_REQUIRED_FIELDS,
   "Fyll i alla nödvändiga fält."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_NIGHTLY,
   "Uppdatera RetroArch (nightly)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_FINISHED,
   "RetroArch uppdaterades. Starta om programmet för att ändringarna ska ta effekt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_UPDATE_RETROARCH_FAILED,
   "Uppdateringen misslyckades."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_HELP_ABOUT_CONTRIBUTORS,
   "Bidragsgivare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CURRENT_SHADER,
   "Aktuell shader"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MOVE_DOWN,
   "Flytta ner"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MOVE_UP,
   "Flytta upp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_LOAD,
   "Läs in"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SAVE,
   "Spara"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_REMOVE,
   "Ta bort"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_REMOVE_PASSES,
   "Ta bort pass"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_APPLY,
   "Tillämpa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_ADD_PASS,
   "Lägg till pass"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_CLEAR_ALL_PASSES,
   "Töm alla pass"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SHADER_NO_PASSES,
   "Inga shader-pass."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_PASS,
   "Nollställ pass"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_ALL_PASSES,
   "Nollställ alla pass"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_PARAMETER,
   "Återställ parameter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_THUMBNAIL,
   "Hämta miniatyrbild"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALREADY_IN_PROGRESS,
   "En hämtning pågår redan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_STARTUP_PLAYLIST,
   "Starta med spellista:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THUMBNAIL_TYPE,
   "Miniatyrbild"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_MENU_VIEW_OPTIONS_THUMBNAIL_CACHE_LIMIT,
   "Cachegräns för miniatyrbilder:"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS,
   "Hämta alla miniatyrbilder"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS_ENTIRE_SYSTEM,
   "Hela systemet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_ALL_THUMBNAILS_THIS_PLAYLIST,
   "Denna spellista"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_THUMBNAIL_PACK_DOWNLOADED_SUCCESSFULLY,
   "Miniatyrbilder hämtades ner."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_DOWNLOAD_PLAYLIST_THUMBNAIL_PROGRESS,
   "Lyckades: %1 Misslyckades: %2"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_CORE_OPTIONS,
   "Kärnalternativ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET,
   "Återställ"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_RESET_ALL,
   "Återställ alla"
   )

/* Unsorted */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_UPDATER_SETTINGS,
   "Inställningar för kärnuppdateraren"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TURBO_DEADZONE_LIST,
   "Turbo/Dödzon"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_COUNTERS,
   "Kärnräknare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_DISK,
   "Ingen skiva vald"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRONTEND_COUNTERS,
   "Frontend-räknare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HORIZONTAL_MENU,
   "Horisontell meny"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_OVERLAY_SETTINGS,
   "Skärmöverlagring"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOAD_CONTENT_HISTORY,
   "Historik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOAD_CONTENT_HISTORY,
   "Välj innehåll från spellistan med senaste historik."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_LOAD_CONTENT_HISTORY,
   "När innehåll läses in sparas innehåll och libretro core-kombinationer i historiken.\nHistoriken sparas i en fil i samma katalog som konfigurationsfilen för RetroArch. Om ingen konfigurationsfil lästs in vid uppstart sparas eller läses inte historiken in och den finns inte i huvudmenyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUBSYSTEM_SETTINGS,
   "Delsystem"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUBSYSTEM_CONTENT_INFO,
   "Aktuellt Innehåll: %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_NETPLAY_HOSTS_FOUND,
   "Inga Netplay värdar hittades."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_NETPLAY_CLIENTS_FOUND,
   "Inga netplay-klienter hittades."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PERFORMANCE_COUNTERS,
   "Inga prestandaräknare."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NO_PLAYLISTS,
   "Inga spellistor."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BT_CONNECTED,
   "Ansluten"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PORT_DEVICE_NAME,
   "Port %d Enhetsnamn: %s (#%d)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PORT_DEVICE_INFO,
   "Enhetens skärmnamn: %s\nEnhetens konfigurationsnamn: %s\nEnhets-VID/PID: %d/%d"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SETTINGS,
   "Fuskinställningar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_SEARCH_SETTINGS,
   "Starta eller fortsätt fusksökning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RUN_MUSIC,
   "Spela i Media Player"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SECONDS,
   "sekunder"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_START_CORE,
   "Starta kärna"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_START_CORE,
   "Starta kärnan utan innehåll."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUPPORTED_CORES,
   "Föreslagna kärnor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UNABLE_TO_READ_COMPRESSED_FILE,
   "Kan inte läsa komprimerad fil."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_USER,
   "Användare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_KEYBOARD,
   "Tgb"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MAX_SWAPCHAIN_IMAGES,
   "Säger till videodrivrutinen att uttryckligen använda ett specificerat buffringsläge."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_VIDEO_MAX_SWAPCHAIN_IMAGES,
   "Maximalt antal swapchain-bilder. Detta kan tala om för videodrivrutinen att den ska använda ett specifikt videobuffringsläge.\nEnkel buffring - 1\nDubbel buffring - 2\nTrippel buffring - 3\nAtt välja rätt buffringsläge kan ha stor inverkan på latensen."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_WAITABLE_SWAPCHAINS,
   "Hårdsynkronisera CPU och GPU. Minskar latens på bekostnad av prestanda."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_MAX_FRAME_LATENCY,
   "Säger till videodrivrutinen att uttryckligen använda ett specificerat buffringsläge."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_SHADER_PRESET_PARAMETERS,
   "Ändrar den förinställda shader som för närvarande används i menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VIDEO_SHADER_PRESET_TWO,
   "Förinställd Shader"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VIDEO_SHADER_PRESET_PREPEND_TWO,
   "Förinställd Shader"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VIDEO_SHADER_PRESET_APPEND_TWO,
   "Förinställd Shader"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_URL_LIST,
   "Bläddra URL"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_URL,
   "URL-sökväg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BROWSE_START,
   "Starta"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ROOM_NICKNAME,
   "Nicknamn: %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_LOOK,
   "Letar efter kompatibelt innehåll..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_NO_CORE,
   "Ingen kärna hittades"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_NO_PLAYLISTS,
   "Inga spellistor hittades"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_FOUND,
   "Kompatibelt innehåll hittades"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_COMPAT_CONTENT_NOT_FOUND,
   "Det gick inte att hitta något matchande innehåll med hjälp av CRC eller filnamn"
   )

/* Unused (Only Exist in Translation Files) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_ROOM_NICKNAME_LAN,
   "Nicknamn (LAN): %s"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_ENABLE,
   "Inspelning-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_PATH,
   "Spara utdatainspelning som..."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RECORD_USE_OUTPUT_DIRECTORY,
   "Spara inspelningar i utdatakatalog"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_MATCH_IDX,
   "Visa träff #"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_MATCH_IDX,
   "Välj matchningen för att visa."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_VIEW_MATCHES,
   "Visa listan över %u träffar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CREATE_OPTION,
   "Skapa kod från denna matchning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_DELETE_OPTION,
   "Ta bort denna matchning"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_FOOTER_OPACITY,
   "Sidfots opacitet"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_FOOTER_OPACITY,
   "Ändra opaciteten för sidfotens grafik."
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_LABEL_VALUE_MATERIALUI_MENU_HEADER_OPACITY,
   "Sidhuvuds opacitet"
   )
MSG_HASH( /* FIXME Still exists in a comment about being removed */
   MENU_ENUM_SUBLABEL_MATERIALUI_MENU_HEADER_OPACITY,
   "Ändra opaciteten för sidhuvudets grafik."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_RDB_ENTRY_START_CONTENT,
   "Starta innehåll"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_HISTORY_PATH,
   "Sökväg för innehållshistorik"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CRT_SWITCH_RESOLUTION_OUTPUT_DISPLAY_ID,
   "Välj utgångsporten som är ansluten till CRT-skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP,
   "Hjälp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CLEAR_SETTING,
   "Rensa"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_AUDIO_VIDEO_TROUBLESHOOTING,
   "Felsökning för ljud/video"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_LOADING_CONTENT,
   "Läser in innehåll"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_SCANNING_CONTENT,
   "Letar efter innehåll"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_HELP_WHAT_IS_A_CORE,
   "Vad är en kärna?"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MANAGEMENT,
   "Databasinställningar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_LAN_SCAN_SETTINGS,
   "Sök på lokalt nätverk"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NETPLAY_LAN_SCAN_SETTINGS,
   "Sök efter och anslut till netplay-värdar på det lokala nätverket."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_MODE,
   "Netplay-klient"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SPECTATOR_MODE_ENABLE,
   "Netplay åskådare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEEVOS_DESCRIPTION,
   "Beskrivning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FRAME_THROTTLE_ENABLE,
   "Begränsa maximal körhastighet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_START_SEARCH,
   "Starta sökning efter ny fuskkod"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_START_SEARCH,
   "Starta sökning efter ett nytt fusk. Antal bitar kan ändras."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_CONTINUE_SEARCH,
   "Fortsätt sök"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_CONTINUE_SEARCH,
   "Fortsätt söka efter nytt fusk."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ACHIEVEMENT_LIST_HARDCORE,
   "Prestationer (Hardcore)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_DETAILS,
   "Fuskdetaljer"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_DETAILS,
   "Hanterar inställningar för fuskdetaljer."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_CHEAT_SEARCH,
   "Starta eller fortsätt fusksökning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_CHEAT_SEARCH,
   "Starta eller fortsätt en sökning efter fuskkoder."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CHEAT_NUM_PASSES,
   "Fuskpass"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CHEAT_NUM_PASSES,
   "Öka eller minska antalet fusk."
   )

/* Unused (Needs Confirmation) */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_X,
   "Vänster analog X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_LEFT_Y,
   "Vänster analog Y"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_X,
   "Höger analog X"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ANALOG_RIGHT_Y,
   "Höger analog Y"
   )
MSG_HASH(
   MENU_ENUM_LABEL_CHEAT_SEARCH_SETTINGS,
   "Starta eller fortsätt fusksökning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_DEVELOPER,
   "Databas - Filter: Utvecklare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_PUBLISHER,
   "Databas - Filter: Utgivare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ORIGIN,
   "Databas - Filter: Ursprung"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_FRANCHISE,
   "Databas - Filter: Franchise"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ESRB_RATING,
   "Databas - Filter: ESRB-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_ELSPA_RATING,
   "Databas - Filter: ELSPA-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_PEGI_RATING,
   "Databas - Filter: PEGI-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_CERO_RATING,
   "Databas - Filter: CERO-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_BBFC_RATING,
   "Databas - Filter: BBFC-betyg"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_MAX_USERS,
   "Databas - Filter: Max användare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_RELEASEDATE_BY_MONTH,
   "Databas - Filter: Lanseringsdatum efter månad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_RELEASEDATE_BY_YEAR,
   "Databas - Filter: Lanseringsdatum efter år"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DATABASE_CURSOR_LIST_ENTRY_DATABASE_INFO,
   "Databasinformation"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONFIG,
   "Konfig"
   )
MSG_HASH( /* FIXME Seems related to MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIRECTORY, possible duplicate */
   MENU_ENUM_LABEL_VALUE_CORE_ASSETS_DIR,
   "Hämtningar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NETPLAY_SETTINGS,
   "Inställningar för Netplay"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_SLANG_SUPPORT,
   "Slang-stöd"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FBO_SUPPORT,
   "OpenGL/Direct3D render-to-texture-stöd (multipass shaders)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CONTENT_DIR,
   "Innehåll"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_CONTENT_DIR,
   "Vanligtvis inställd av utvecklare som paketerar libretro/RetroArch-appar för att peka på resurser."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_ASK_ARCHIVE,
   "Fråga"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS,
   "Grundläggannde menykontroller"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_CONFIRM,
   "Bekräfta/OK"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_QUIT,
   "Avsluta"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_SCROLL_UP,
   "Rulla upp"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_START,
   "Standardvärden"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_KEYBOARD,
   "Visa/dölj tangentbord"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BASIC_MENU_ENUM_CONTROLS_TOGGLE_MENU,
   "Visa/dölj meny"
   )

/* Discord Status */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_MENU,
   "I meny"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_GAME,
   "I spel"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_IN_GAME_PAUSED,
   "I spel (Pausad)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_STATUS_PLAYING,
   "Spelar"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_DISCORD_STATUS_PAUSED,
   "Pausad"
   )

/* Notifications */

MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_NETPLAY_START_WHEN_LOADED,
   "Netplay kommer starta när innehållet har lästs in."
   )
MSG_HASH(
   MSG_NETPLAY_NEED_CONTENT_LOADED,
   "Innehållet måste läsas in innan netplay kan startas."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_NETPLAY_LOAD_CONTENT_MANUALLY,
   "Kunde inte hitta en lämplig kärna eller innehållsfil, läs in manuellt."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_VIDEO_DRIVER_FALLBACK,
   "Din grafikdrivrutin är inte kompatibel med aktuella videodrivrutinen i RetroArch, faller tillbaka på drivrutinen %s. Starta om RetroArch för att ändringen ska ta effekt."
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_SUCCESS,
   "Kärninstallation lyckades"
   )
MSG_HASH( /* FIXME Should be MSG_ */
   MENU_ENUM_LABEL_VALUE_SIDELOAD_CORE_ERROR,
   "Kärninstallation misslyckades"
   )
MSG_HASH(
   MSG_CHEAT_DELETE_ALL_INSTRUCTIONS,
   "Tryck höger 5 gånger för att radera alla fusk."
   )
MSG_HASH(
   MSG_AUDIO_MIXER_VOLUME,
   "Global ljudmixervolym"
   )
MSG_HASH(
   MSG_NETPLAY_LAN_SCAN_COMPLETE,
   "Netplay-sökning färdigställd."
   )
MSG_HASH(
   MSG_SORRY_UNIMPLEMENTED_CORES_DONT_DEMAND_CONTENT_NETPLAY,
   "Tyvärr, inte implementerat: kärnor som inte efterfrågar innehåll kan inte delta i netplay."
   )
MSG_HASH(
   MSG_NATIVE,
   "Inbyggd"
   )
MSG_HASH(
   MSG_UNKNOWN_NETPLAY_COMMAND_RECEIVED,
   "Okänt netplay-kommando togs emot"
   )
MSG_HASH(
   MSG_FILE_ALREADY_EXISTS_SAVING_TO_BACKUP_BUFFER,
   "Filen finns redan. Sparar till reservbuffert"
   )
MSG_HASH(
   MSG_GOT_CONNECTION_FROM,
   "Fick anslutning från: \"%s\""
   )
MSG_HASH(
   MSG_GOT_CONNECTION_FROM_NAME,
   "Fick anslutning från: \"%s (%s)\""
   )
MSG_HASH(
   MSG_PUBLIC_ADDRESS,
   "Portmappning för Netplay lyckades"
   )
MSG_HASH(
   MSG_PRIVATE_OR_SHARED_ADDRESS,
   "Externt nätverk har en privat eller delad adress. Överväg att använda en reläserver."
   )
MSG_HASH(
   MSG_UPNP_FAILED,
   "Netplay UPnP-portmappning misslyckades"
   )
MSG_HASH(
   MSG_NO_ARGUMENTS_SUPPLIED_AND_NO_MENU_BUILTIN,
   "Inga argument angavs och ingen meny inbyggd, visar hjälp..."
   )
MSG_HASH(
   MSG_SETTING_DISK_IN_TRAY,
   "Matar in skiva i släden"
   )
MSG_HASH(
   MSG_WAITING_FOR_CLIENT,
   "Väntar på klient..."
   )
MSG_HASH(
   MSG_ROOM_NOT_CONNECTABLE,
   "Ditt rum är inte möjligt att ansluta till från internet."
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_LEFT_THE_GAME,
   "Du har lämnat spelet"
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_JOINED_AS_PLAYER_N,
   "Du är ansluten, som spelare %u"
   )
MSG_HASH(
   MSG_NETPLAY_YOU_HAVE_JOINED_WITH_INPUT_DEVICES_S,
   "Du är ansluten, med inmatningsenheter %.*s"
   )
MSG_HASH(
   MSG_NETPLAY_PLAYER_S_LEFT,
   "Spelare %.*s har lämnat spelet"
   )
MSG_HASH(
   MSG_NETPLAY_S_HAS_JOINED_AS_PLAYER_N,
   "%.*s är ansluten, som spelare %u"
   )
MSG_HASH(
   MSG_NETPLAY_S_HAS_JOINED_WITH_INPUT_DEVICES_S,
   "%.*s är ansluten, med inmatningsenheter %.*s"
   )
MSG_HASH(
   MSG_NETPLAY_NOT_RETROARCH,
   "Ett försök till Netplay-anslutning misslyckades eftersom motparten inte kör RetroArch eller kör en gammal version av RetroArch."
   )
MSG_HASH(
   MSG_NETPLAY_OUT_OF_DATE,
   "En netplay-peer kör en gammal version av RetroArch. Det går inte att ansluta."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_VERSIONS,
   "VARNING: En netplay-peer kör en annan version av RetroArch. Om problem uppstår, använd samma version."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_CORES,
   "En netplay-peer kör en annan kärna. Det går inte att ansluta."
   )
MSG_HASH(
   MSG_NETPLAY_DIFFERENT_CORE_VERSIONS,
   "VARNING: En netplay-peer kör en annan version av kärnan. Om problem uppstår ska du använda samma version."
   )
MSG_HASH(
   MSG_NETPLAY_ENDIAN_DEPENDENT,
   "Denna kärna stöder inte netplay mellan dessa plattformar"
   )
MSG_HASH(
   MSG_NETPLAY_PLATFORM_DEPENDENT,
   "Denna kärna stöder inte netplay mellan olika plattformar"
   )
MSG_HASH(
   MSG_NETPLAY_ENTER_PASSWORD,
   "Ange Netplay-serverlösenord:"
   )
MSG_HASH(
   MSG_NETPLAY_ENTER_CHAT,
   "Ange Netplay-chattmeddelande:"
   )
MSG_HASH(
   MSG_DISCORD_CONNECTION_REQUEST,
   "Tillåta anslutning för användare:"
   )
MSG_HASH(
   MSG_NETPLAY_INCORRECT_PASSWORD,
   "Felaktigt lösenord"
   )
MSG_HASH(
   MSG_NETPLAY_SERVER_NAMED_HANGUP,
   "\"%s\" har kopplat från"
   )
MSG_HASH(
   MSG_NETPLAY_SERVER_HANGUP,
   "En netplay-klient har kopplat från"
   )
MSG_HASH(
   MSG_NETPLAY_CLIENT_HANGUP,
   "Netplay frånkopplad"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_UNPRIVILEGED,
   "Du har inte behörighet att spela"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_NO_SLOTS,
   "Detfinns inga lediga spelarplatser"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY_NOT_AVAILABLE,
   "De begärda inmatningsenheterna är inte tillgängliga"
   )
MSG_HASH(
   MSG_NETPLAY_CANNOT_PLAY,
   "Kan inte växla till spelläget"
   )
MSG_HASH(
   MSG_NETPLAY_PEER_PAUSED,
   "Netplay-peer ”%s” pausad"
   )
MSG_HASH(
   MSG_NETPLAY_CHANGED_NICK,
   "Ditt nicknamn ändrades till \"%s\""
   )
MSG_HASH(
   MSG_NETPLAY_KICKED_CLIENT_S,
   "Sparkade klient: \"%s\""
   )
MSG_HASH(
   MSG_NETPLAY_FAILED_TO_KICK_CLIENT_S,
   "Misslyckades sparka klient: \"%s\""
   )
MSG_HASH(
   MSG_NETPLAY_BANNED_CLIENT_S,
   "Blockerade klient: \"%s\""
   )
MSG_HASH(
   MSG_NETPLAY_FAILED_TO_BAN_CLIENT_S,
   "Misslyckades blockera klient: \"%s\""
   )
MSG_HASH(
   MSG_NETPLAY_STATUS_PLAYING,
   "Spelar"
   )
MSG_HASH(
   MSG_NETPLAY_STATUS_SPECTATING,
   "Åskådar"
   )
MSG_HASH(
   MSG_NETPLAY_CLIENT_DEVICES,
   "Enheter"
   )
MSG_HASH(
   MSG_NETPLAY_CHAT_SUPPORTED,
   "Chatt stöds"
   )
MSG_HASH(
   MSG_NETPLAY_SLOWDOWNS_CAUSED,
   "Fördröjningar orsakade"
   )

MSG_HASH(
   MSG_AUDIO_VOLUME,
   "Ljudvolym"
   )
MSG_HASH(
   MSG_AUTODETECT,
   "Autoupptäck"
   )
MSG_HASH(
   MSG_CAPABILITIES,
   "Förmågor"
   )
MSG_HASH(
   MSG_CONNECTING_TO_NETPLAY_HOST,
   "Ansluter till Netplay-värd"
   )
MSG_HASH(
   MSG_CONNECTING_TO_PORT,
   "Ansluter till port"
   )
MSG_HASH(
   MSG_CONNECTION_SLOT,
   "Anslutningsplats"
   )
MSG_HASH(
   MSG_FETCHING_CORE_LIST,
   "Hämtar kärnlista..."
   )
MSG_HASH(
   MSG_CORE_LIST_FAILED,
   "Hämta kärnlista misslyckad!"
   )
MSG_HASH(
   MSG_LATEST_CORE_INSTALLED,
   "Senaste version redan installerad: "
   )
MSG_HASH(
   MSG_UPDATING_CORE,
   "Uppdaterar kärna: "
   )
MSG_HASH(
   MSG_DOWNLOADING_CORE,
   "Hämtar ner kärna: "
   )
MSG_HASH(
   MSG_EXTRACTING_CORE,
   "Extraherar kärna: "
   )
MSG_HASH(
   MSG_CORE_INSTALLED,
   "Kärna installerad: "
   )
MSG_HASH(
   MSG_CORE_INSTALL_FAILED,
   "Misslyckades installera kärna: "
   )
MSG_HASH(
   MSG_SCANNING_CORES,
   "Söker igenom kärnor..."
   )
MSG_HASH(
   MSG_CHECKING_CORE,
   "Kontrollerar kärna: "
   )
MSG_HASH(
   MSG_ALL_CORES_UPDATED,
   "Alla installerade kärnor är senaste versionen"
   )
MSG_HASH(
   MSG_ALL_CORES_SWITCHED_PFD,
   "Alla kärnor som stöds ersatta till Play-butiksversioner"
   )
MSG_HASH(
   MSG_NUM_CORES_UPDATED,
   "Kärnor uppdaterade: "
   )
MSG_HASH(
   MSG_NUM_CORES_LOCKED,
   "Kärnor överhoppade: "
   )
MSG_HASH(
   MSG_CORE_UPDATE_DISABLED,
   "Kärnuppdatering inaktiverad - kärnan är låst: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_RESETTING_CORES,
   "Återställer kärnor: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_CORES_RESET,
   "Kärnor återställd: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_CLEANING_PLAYLIST,
   "Rensar spellista: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_PLAYLIST_CLEANED,
   "Spellista rensad: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_MISSING_CONFIG,
   "Uppdatering misslyckades - spellistan innehåller inga giltiga sökposter: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_INVALID_CONTENT_DIR,
   "Uppdatering misslyckades - ogiltig/saknad innehållskatalog: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_INVALID_SYSTEM_NAME,
   "Uppdatering misslyckades - ogiltigt/saknat systemnamn: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_INVALID_CORE,
   "Uppdatering misslyckades - ogiltig kärna: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_INVALID_DAT_FILE,
   "Uppdatering misslyckades - ogiltig/saknad arcade DAT-fil: "
   )
MSG_HASH(
   MSG_PLAYLIST_MANAGER_REFRESH_DAT_FILE_TOO_LARGE,
   "Uppdatering misslyckades - arcade DAT-filen är för stor (otillräckligt med minne): "
   )
MSG_HASH(
   MSG_ADDED_TO_FAVORITES,
   "Tillagd i favoriter"
   )
MSG_HASH(
   MSG_ADD_TO_FAVORITES_FAILED,
   "Misslyckades med att lägga till favorit: spellistan full"
   )
MSG_HASH(
   MSG_ADDED_TO_PLAYLIST,
   "Lades till i spellistan"
   )
MSG_HASH(
   MSG_ADD_TO_PLAYLIST_FAILED,
   "Misslyckades med att lägga till i spellista: spellistan är full"
   )
MSG_HASH(
   MSG_SET_CORE_ASSOCIATION,
   "Kärnuppsättning: "
   )
MSG_HASH(
   MSG_APPENDED_DISK,
   "Lade till skivan på slutet"
   )
MSG_HASH(
   MSG_FAILED_TO_APPEND_DISK,
   "Misslyckades med att lägga till skivan"
   )
MSG_HASH(
   MSG_APPLICATION_DIR,
   "Programkatalog"
   )
MSG_HASH(
   MSG_APPLYING_CHEAT,
   "Tillämpar fuskändringar."
   )
MSG_HASH(
   MSG_APPLYING_PATCH,
   "Tillämpar patch: %s"
   )
MSG_HASH(
   MSG_APPLYING_SHADER,
   "Tillämpar shader"
   )
MSG_HASH(
   MSG_AUDIO_MUTED,
   "Ljudet tystat."
   )
MSG_HASH(
   MSG_AUDIO_UNMUTED,
   "Ljudet aktiverat."
   )
MSG_HASH(
   MSG_AUTOCONFIG_FILE_ERROR_SAVING,
   "Fel vid sparande av handkontrollerprofil."
   )
MSG_HASH(
   MSG_AUTOCONFIG_FILE_SAVED_SUCCESSFULLY,
   "Kontrollerprofilen sparades."
   )
MSG_HASH(
   MSG_AUTOCONFIG_FILE_SAVED_SUCCESSFULLY_NAMED,
   "Kontrollerprofilen sparad i katalogen för kontrollerprofiler som\n\"%s\""
   )
MSG_HASH(
   MSG_AUTOSAVE_FAILED,
   "Kunde inte initiera automatisk sparning."
   )
MSG_HASH(
   MSG_AUTO_SAVE_STATE_TO,
   "Spara tillstånd automatiskt till"
   )
MSG_HASH(
   MSG_BRINGING_UP_COMMAND_INTERFACE_ON_PORT,
   "Tar upp kommandogränssnitt på port"
   )
MSG_HASH(
   MSG_CANNOT_INFER_NEW_CONFIG_PATH,
   "Kan inte sluta sig till ny konfigurationssökväg. Använd aktuell tid."
   )
MSG_HASH(
   MSG_COMPARING_WITH_KNOWN_MAGIC_NUMBERS,
   "Jämför med kända magic numbers..."
   )
MSG_HASH(
   MSG_COMPILED_AGAINST_API,
   "Kompilerad mot API"
   )
MSG_HASH(
   MSG_CONFIG_DIRECTORY_NOT_SET,
   "Konfigurationskatalog inte inställd. Kan inte spara ny konfiguration."
   )
MSG_HASH(
   MSG_CONNECTED_TO,
   "Ansluten till"
   )
MSG_HASH(
   MSG_CONTENT_CRC32S_DIFFER,
   "Innehållets CRC32 skiljer sig. Kan inte använda olika spel."
   )
MSG_HASH(
   MSG_CONTENT_NETPACKET_CRC32S_DIFFER,
   "Värden kör ett annat spel."
   )
MSG_HASH(
   MSG_PING_TOO_HIGH,
   "Din pingtid är för hög för denna värd."
   )
MSG_HASH(
   MSG_CONTENT_LOADING_SKIPPED_IMPLEMENTATION_WILL_DO_IT,
   "Inläsning av innehåll hoppades över. Implementeringen läser in det själv."
   )
MSG_HASH(
   MSG_CORE_DOES_NOT_SUPPORT_SAVESTATES,
   "Kärnan har inget stöd för sparat tillstånd."
   )
MSG_HASH(
   MSG_CORE_DOES_NOT_SUPPORT_DISK_OPTIONS,
   "Kärnan har inte stöd för Disc Control."
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FILE_CREATED_SUCCESSFULLY,
   "Kärnans alternativfil skapades."
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FILE_REMOVED_SUCCESSFULLY,
   "Kärnans alternativfil togs bort."
   )
MSG_HASH(
   MSG_CORE_OPTIONS_RESET,
   "Alla kärnalternativ nollställda till standard."
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FLUSHED,
   "Kärnalternativ sparades till:"
   )
MSG_HASH(
   MSG_CORE_OPTIONS_FLUSH_FAILED,
   "Misslyckades med att spara kärnalternativen till:"
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_ANY_NEXT_DRIVER,
   "Kunde inte hitta någon nästa drivrutin"
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_COMPATIBLE_SYSTEM,
   "Kunde inte hitta ett kompatibelt system."
   )
MSG_HASH(
   MSG_COULD_NOT_FIND_VALID_DATA_TRACK,
   "Kunde inte hitta ett giltigt dataspår"
   )
MSG_HASH(
   MSG_COULD_NOT_OPEN_DATA_TRACK,
   "Kunde inte öppna dataspåret"
   )
MSG_HASH(
   MSG_COULD_NOT_READ_CONTENT_FILE,
   "Kunde inte läsa innehållsfilen"
   )
MSG_HASH(
   MSG_COULD_NOT_READ_MOVIE_HEADER,
   "Kunde inte läsa filmhuvud."
   )
MSG_HASH(
   MSG_COULD_NOT_READ_STATE_FROM_MOVIE,
   "Kunde inte läsa tillstånd från film."
   )
MSG_HASH(
   MSG_CRC32_CHECKSUM_MISMATCH,
   "CRC32-kontrollsumman stämmer inte överens mellan innehållsfilen och kontrollsumman för sparat innehåll i uppspelningsfilens huvud. Uppspelningen kommer med stor sannolikhet att desynkroniseras vid uppspelning."
   )
MSG_HASH(
   MSG_CUSTOM_TIMING_GIVEN,
   "Anpassad timing angiven"
   )
MSG_HASH(
   MSG_DECOMPRESSION_ALREADY_IN_PROGRESS,
   "Dekomprimering pågår redan."
   )
MSG_HASH(
   MSG_DECOMPRESSION_FAILED,
   "Dekomprimeringen misslyckades."
   )
MSG_HASH(
   MSG_DETECTED_VIEWPORT_OF,
   "Upptäckte visningsområde för"
   )
MSG_HASH(
   MSG_DID_NOT_FIND_A_VALID_CONTENT_PATCH,
   "Hittade inte någon giltig innehållspatch."
   )
MSG_HASH(
   MSG_DISCONNECT_DEVICE_FROM_A_VALID_PORT,
   "Koppla från enhet från en giltig port."
   )
MSG_HASH(
   MSG_DISK_CLOSED,
   "Stängde virtuell skivsläde."
   )
MSG_HASH(
   MSG_DISK_EJECTED,
   "Matade ut virtuell skivsläde."
   )
MSG_HASH(
   MSG_DOWNLOADING,
   "Hämtar ner"
   )
MSG_HASH(
   MSG_DOWNLOAD_FAILED,
   "Hämtningen misslyckades"
   )
MSG_HASH(
   MSG_ERROR,
   "Fel"
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_CONTENT,
   "Libretros kärna kräver innehåll men ingenting tillhandahölls."
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_SPECIAL_CONTENT,
   "Libretros kärna kräver speciellt innehåll men ingenting tillhandahölls."
   )
MSG_HASH(
   MSG_ERROR_LIBRETRO_CORE_REQUIRES_VFS,
   "Kärnan har inte stöd för VFS och inläsning från lokal kopia misslyckades"
   )
MSG_HASH(
   MSG_ERROR_PARSING_ARGUMENTS,
   "Fel vid tolkning av argument."
   )
MSG_HASH(
   MSG_ERROR_SAVING_CORE_OPTIONS_FILE,
   "Fel vid sparning av kärnans alternativfil."
   )
MSG_HASH(
   MSG_ERROR_REMOVING_CORE_OPTIONS_FILE,
   "Fel vid borttagning av kärnans alternativfil."
   )
MSG_HASH(
   MSG_EXTERNAL_APPLICATION_DIR,
   "Extern programkatalog"
   )
MSG_HASH(
   MSG_EXTRACTING,
   "Extraherar"
   )
MSG_HASH(
   MSG_EXTRACTING_FILE,
   "Extraherar fil"
   )
MSG_HASH(
   MSG_FAILED_SAVING_CONFIG_TO,
   "Misslyckades med att spara konfig till"
   )
MSG_HASH(
   MSG_FAILED_TO_ACCEPT_INCOMING_SPECTATOR,
   "Misslyckades med att acceptera inkommande åskådare."
   )
MSG_HASH(
   MSG_FAILED_TO_ALLOCATE_MEMORY_FOR_PATCHED_CONTENT,
   "Misslyckades med att tilldela minne för korrigerat innehåll..."
   )
MSG_HASH(
   MSG_FAILED_TO_APPLY_SHADER,
   "Misslyckades med att tillämpa shader."
   )
MSG_HASH(
   MSG_FAILED_TO_APPLY_SHADER_PRESET,
   "Misslyckades med att tillämpa shader förinställning:"
   )
MSG_HASH(
   MSG_FAILED_TO_BIND_SOCKET,
   "Misslyckades med att binda uttag."
   )
MSG_HASH(
   MSG_FAILED_TO_CREATE_THE_DIRECTORY,
   "Misslyckades med att skapa katalogen."
   )
MSG_HASH(
   MSG_FAILED_TO_EXTRACT_CONTENT_FROM_COMPRESSED_FILE,
   "Misslyckades med att extrahera innehåll från komprimerad fil"
   )
MSG_HASH(
   MSG_FAILED_TO_GET_NICKNAME_FROM_CLIENT,
   "Misslyckades med att få smeknamn från klient."
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD,
   "Misslyckades att läsa in"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_CONTENT,
   "Misslyckades att läsa in innehåll"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_MOVIE_FILE,
   "Misslyckades med att läsa filmfilen"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_OVERLAY,
   "Misslyckades med att läsa in överlägg."
   )
MSG_HASH(
   MSG_OSK_OVERLAY_NOT_SET,
   "Tangentbordsöverlägg är inte inställt."
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_STATE,
   "Misslyckades med att läsa in tillstånd från"
   )
MSG_HASH(
   MSG_FAILED_TO_OPEN_LIBRETRO_CORE,
   "Misslyckades med att öppna libretro-kärna"
   )
MSG_HASH(
   MSG_FAILED_TO_PATCH,
   "Misslyckades med att patcha"
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME,
   "Misslyckades med att ta emot smeknamn."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME_FROM_HOST,
   "Misslyckades med att ta emot smeknamn från värd."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_NICKNAME_SIZE_FROM_HOST,
   "Misslyckades med att ta emot smeknamnsstorlek från värd."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_SRAM_DATA_FROM_HOST,
   "Misslyckades med att ta emot SRAM-data från värd."
   )
MSG_HASH(
   MSG_FAILED_TO_REMOVE_DISK_FROM_TRAY,
   "Misslyckades med att ta bort skiva från facket."
   )
MSG_HASH(
   MSG_FAILED_TO_REMOVE_TEMPORARY_FILE,
   "Misslyckades med att ta bort temporärfilen"
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_SRAM,
   "Det gick inte att spara SRAM"
   )
MSG_HASH(
   MSG_FAILED_TO_LOAD_SRAM,
   "Det gick inte att läsa in SRAM"
   )
MSG_HASH(
   MSG_FAILED_TO_SAVE_STATE_TO,
   "Misslyckades att spara tillstånd till"
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME,
   "Misslyckades att skicka nicknamn."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_SIZE,
   "Misslyckades att skicka nicknamnsstorlek."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_TO_CLIENT,
   "Misslyckades med att skicka smeknamn till klient."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_NICKNAME_TO_HOST,
   "Misslyckades med att skicka smeknamn till värd."
   )
MSG_HASH(
   MSG_FAILED_TO_SEND_SRAM_DATA_TO_CLIENT,
   "Misslyckades med att skicka SRAM-data till klient."
   )
MSG_HASH(
   MSG_FAILED_TO_START_AUDIO_DRIVER,
   "Misslyckades med att starta ljuddrivrutin. Fortsätter utan ljud."
   )
MSG_HASH(
   MSG_FAILED_TO_START_MOVIE_RECORD,
   "Misslyckades med att starta filminspelning."
   )
MSG_HASH(
   MSG_FAILED_TO_START_RECORDING,
   "Misslyckades med att starta inspelning."
   )
MSG_HASH(
   MSG_FAILED_TO_TAKE_SCREENSHOT,
   "Misslyckades med att ta skärmbild."
   )
MSG_HASH(
   MSG_FAILED_TO_UNDO_LOAD_STATE,
   "Misslyckades med att ångra inläst tillstånd."
   )
MSG_HASH(
   MSG_FAILED_TO_UNDO_SAVE_STATE,
   "Misslyckades att ångra sparat tillstånd."
   )
MSG_HASH(
   MSG_FAILED_TO_UNMUTE_AUDIO,
   "Misslyckades med att starta ljudet igen."
   )
MSG_HASH(
   MSG_FATAL_ERROR_RECEIVED_IN,
   "Ödesdigert fel påträffades i"
   )
MSG_HASH(
   MSG_FILE_NOT_FOUND,
   "Filen hittas ej"
   )
MSG_HASH(
   MSG_FOUND_AUTO_SAVESTATE_IN,
   "Hittade automatiskt sparat tillstånd i"
   )
MSG_HASH(
   MSG_FOUND_DISK_LABEL,
   "Hittade skivetikett"
   )
MSG_HASH(
   MSG_FOUND_FIRST_DATA_TRACK_ON_FILE,
   "Hittade första dataspåret på fil"
   )
MSG_HASH(
   MSG_FOUND_LAST_STATE_SLOT,
   "Hittade senaste tillståndsplats"
   )
MSG_HASH(
   MSG_REPLAY_LOAD_STATE_FAILED_INCOMPAT,
   "Inte från aktuell inspelning"
   )
MSG_HASH(
   MSG_REPLAY_LOAD_STATE_FAILED_FUTURE_STATE,
   "Kan inte läsa in framtida tillstånd under uppspelning"
   )
MSG_HASH(
   MSG_REPLAY_LOAD_STATE_FAILED_WRONG_TIMELINE,
   "Felaktigt tidslinjefel under uppspelning"
   )
MSG_HASH(
   MSG_REPLAY_LOAD_STATE_OVERWRITING_REPLAY,
   "Felaktig tidslinje; skriver över inspelning"
   )
MSG_HASH(
   MSG_FOUND_SHADER,
   "Hittade shader"
   )
MSG_HASH(
   MSG_FRAMES,
   "Bildrutor"
   )
MSG_HASH(
   MSG_GAME_SPECIFIC_CORE_OPTIONS_FOUND_AT,
   "Spelspecifika kärnalternativ hittades i"
   )
MSG_HASH(
   MSG_FOLDER_SPECIFIC_CORE_OPTIONS_FOUND_AT,
   "Mappspecifika kärnalternativ hittades i"
   )
MSG_HASH(
   MSG_GOT_INVALID_DISK_INDEX,
   "Fick ogiltigt skivindex."
   )
MSG_HASH(
   MSG_GRAB_MOUSE_STATE,
   "Tillstånd för musfångst"
   )
MSG_HASH(
   MSG_GAME_FOCUS_ON,
   "Game Focus aktiv"
   )
MSG_HASH(
   MSG_GAME_FOCUS_OFF,
   "Game Focus inaktiv"
   )
MSG_HASH(
   MSG_HW_RENDERED_MUST_USE_POSTSHADED_RECORDING,
   "Libretro core är hårdvarurenderad. Måste använda post-shaded inspelning också."
   )
MSG_HASH(
   MSG_INFLATED_CHECKSUM_DID_NOT_MATCH_CRC32,
   "Uppblåst kontrollsumma matchade inte CRC32."
   )
MSG_HASH(
   MSG_INPUT_CHEAT,
   "Mata in fusk"
   )
MSG_HASH(
   MSG_INPUT_CHEAT_FILENAME,
   "Filnamn för inmatningsfusk"
   )
MSG_HASH(
   MSG_INPUT_PRESET_FILENAME,
   "Filnamn för inmatningsförval"
   )
MSG_HASH(
   MSG_INPUT_OVERRIDE_FILENAME,
   "Filnamn för inmatningsåsidosättning"
   )
MSG_HASH(
   MSG_INPUT_REMAP_FILENAME,
   "Filnamn för inmatningsommappning"
   )
MSG_HASH(
   MSG_INPUT_RENAME_ENTRY,
   "Döp om titel"
   )
MSG_HASH(
   MSG_INTERFACE,
   "Gränssnitt"
   )
MSG_HASH(
   MSG_INTERNAL_STORAGE,
   "Intern lagring"
   )
MSG_HASH(
   MSG_REMOVABLE_STORAGE,
   "Flyttbar lagring"
   )
MSG_HASH(
   MSG_INVALID_NICKNAME_SIZE,
   "Ogiltig nicknamnsstorlek."
   )
MSG_HASH(
   MSG_IN_BYTES,
   "i bytes"
   )
MSG_HASH(
   MSG_IN_MEGABYTES,
   "i megabytes"
   )
MSG_HASH(
   MSG_IN_GIGABYTES,
   "i gigabyte"
   )
MSG_HASH(
   MSG_LIBRETRO_ABI_BREAK,
   "är kompilerad mot en annan version av libretro än denna libretro-implementation."
   )
MSG_HASH(
   MSG_LIBRETRO_FRONTEND,
   "Frontend för libretro"
   )
MSG_HASH(
   MSG_LOADED_STATE_FROM_SLOT,
   "Läste in tillstånd från plats #%d."
   )
MSG_HASH(
   MSG_LOADED_STATE_FROM_SLOT_AUTO,
   "Läste in tillstånd från plats #-1 (Auto)."
   )
MSG_HASH(
   MSG_LOADING,
   "Läser in"
   )
MSG_HASH(
   MSG_FIRMWARE,
   "En eller flera firmwarefiler saknas"
   )
MSG_HASH(
   MSG_LOADING_CONTENT_FILE,
   "Läser in innehållsfil"
   )
MSG_HASH(
   MSG_LOADING_HISTORY_FILE,
   "Läser in historikfil"
   )
MSG_HASH(
   MSG_LOADING_FAVORITES_FILE,
   "Läser in favoriterfil"
   )
MSG_HASH(
   MSG_LOADING_STATE,
   "Läser in tillstånd"
   )
MSG_HASH(
   MSG_MEMORY,
   "Minne"
   )
MSG_HASH(
   MSG_MOVIE_RECORD_STOPPED,
   "Stoppar filminspelning."
   )
MSG_HASH(
   MSG_NETPLAY_FAILED,
   "Misslyckades med att initiera netplay."
   )
MSG_HASH(
   MSG_NETPLAY_UNSUPPORTED,
   "Kärnan har inte stöd för netplay."
   )
MSG_HASH(
   MSG_NO_CONTENT_STARTING_DUMMY_CORE,
   "Inget innehåll, startar dummykärna."
   )
MSG_HASH(
   MSG_NO_SAVE_STATE_HAS_BEEN_OVERWRITTEN_YET,
   "Inget sparat tillstånd har ännu blivit överskriven."
   )
MSG_HASH(
   MSG_NO_STATE_HAS_BEEN_LOADED_YET,
   "Inget tillstånd har lästs in än."
   )
MSG_HASH(
   MSG_OVERRIDES_ERROR_SAVING,
   "Fel vid sparning av åsidosättningar."
   )
MSG_HASH(
   MSG_OVERRIDES_ERROR_REMOVING,
   "Fel vid borttagning av åsidosättningar."
   )
MSG_HASH(
   MSG_OVERRIDES_SAVED_SUCCESSFULLY,
   "Åsidosättningar sparades."
   )
MSG_HASH(
   MSG_OVERRIDES_REMOVED_SUCCESSFULLY,
   "Åsidosättningar togs bort."
   )
MSG_HASH(
   MSG_OVERRIDES_UNLOADED_SUCCESSFULLY,
   "Åsidosättningar lästes ur."
   )
MSG_HASH(
   MSG_OVERRIDES_NOT_SAVED,
   "Inget att spara. Åsidosättningar inte sparade."
   )
MSG_HASH(
   MSG_OVERRIDES_ACTIVE_NOT_SAVING,
   "Sparar inte. Åsidosättningar aktiva."
   )
MSG_HASH(
   MSG_PAUSED,
   "Pausad."
   )
MSG_HASH(
   MSG_READING_FIRST_DATA_TRACK,
   "Läser första dataspåret..."
   )
MSG_HASH(
   MSG_RECORDING_TERMINATED_DUE_TO_RESIZE,
   "Inspelning avslutad på grund av storleksändring."
   )
MSG_HASH(
   MSG_RECORDING_TO,
   "Spelar in till"
   )
MSG_HASH(
   MSG_REDIRECTING_CHEATFILE_TO,
   "Dirigerar om fuskfil till"
   )
MSG_HASH(
   MSG_REDIRECTING_SAVEFILE_TO,
   "Omdirigerar sparad fil till"
   )
MSG_HASH(
   MSG_REDIRECTING_SAVESTATE_TO,
   "Omdirigerar sparat tillstånd till"
   )
MSG_HASH(
   MSG_REMAP_FILE_RESET,
   "Alla alternativ för inmatningsommappningar återställda till standard."
   )
MSG_HASH(
   MSG_REMOVED_DISK_FROM_TRAY,
   "Tog bort skiva från släde."
   )
MSG_HASH(
   MSG_REMOVING_TEMPORARY_CONTENT_FILE,
   "Tar bort temporär innehållsfil"
   )
MSG_HASH(
   MSG_RESET,
   "Återställ"
   )
MSG_HASH(
   MSG_RESTORED_OLD_SAVE_STATE,
   "Återställde äldre sparat tillstånd."
   )
MSG_HASH(
   MSG_RESTORING_DEFAULT_SHADER_PRESET_TO,
   "Shaders: återställer standardförval för shader till"
   )
MSG_HASH(
   MSG_REVERTING_SAVEFILE_DIRECTORY_TO,
   "Återställer katalog för sparade filer till"
   )
MSG_HASH(
   MSG_REVERTING_SAVESTATE_DIRECTORY_TO,
   "Återställer katalogen för sparade tillståndsfiler till"
   )
MSG_HASH(
   MSG_REWINDING,
   "Spolar tillbaka."
   )
MSG_HASH(
   MSG_REWIND_BUFFER_CAPACITY_INSUFFICIENT,
   "Buffertkapaciteten räcker inte till."
   )
MSG_HASH(
   MSG_REWIND_INIT_FAILED_THREADED_AUDIO,
   "Implementation använder trådat ljud. Kan inte använda tillbakaspolning."
   )
MSG_HASH(
   MSG_REWIND_REACHED_END,
   "Nådde slutet på tillbakaspolningsbufferten."
   )
MSG_HASH(
   MSG_SAVED_NEW_CONFIG_TO,
   "Sparade konfiguration till"
   )
MSG_HASH(
   MSG_SAVED_STATE_TO_SLOT,
   "Sparade tillstånd till plats #%d."
   )
MSG_HASH(
   MSG_SAVED_STATE_TO_SLOT_AUTO,
   "Sparade tillstånd till plats #-1 (Auto)."
   )
MSG_HASH(
   MSG_SAVED_SUCCESSFULLY_TO,
   "Sparades till"
   )
MSG_HASH(
   MSG_SAVING_RAM_TYPE,
   "Sparar RAM-typ"
   )
MSG_HASH(
   MSG_SAVING_STATE,
   "Sparar tillstånd"
   )
MSG_HASH(
   MSG_SCANNING,
   "Skannar"
   )
MSG_HASH(
   MSG_SCANNING_OF_DIRECTORY_FINISHED,
   "Genomsökning av katalog färdig."
   )
MSG_HASH(
   MSG_SENDING_COMMAND,
   "Skickar kommando"
   )
MSG_HASH(
   MSG_SEVERAL_PATCHES_ARE_EXPLICITLY_DEFINED,
   "Flera patchar är explicit definierade, ignorerar alla..."
   )
MSG_HASH(
   MSG_FAST_FORWARD,
   "Snabbspolning."
   )
MSG_HASH(
   MSG_SLOW_MOTION_REWIND,
   "Tillbakaspolning i slow-motion."
   )
MSG_HASH(
   MSG_SKIPPING_SRAM_LOAD,
   "Hoppar över SRAM-inläsning."
   )
MSG_HASH(
   MSG_SRAM_WILL_NOT_BE_SAVED,
   "SRAM kommer inte att sparas."
   )
MSG_HASH(
   MSG_BLOCKING_SRAM_OVERWRITE,
   "Blockerar SRAM-överskrivning"
   )
MSG_HASH(
   MSG_STARTING_MOVIE_PLAYBACK,
   "Startar uppspelning av film."
   )
MSG_HASH(
   MSG_STARTING_MOVIE_RECORD_TO,
   "Startar filminspelning till"
   )
MSG_HASH(
   MSG_STATE_SIZE,
   "Tillståndsstorlek"
   )
MSG_HASH(
   MSG_STATE_SLOT,
   "Tillståndsplats"
   )
MSG_HASH(
   MSG_TAKING_SCREENSHOT,
   "Tar skärmdump."
   )
MSG_HASH(
   MSG_SCREENSHOT_SAVED,
   "Skärmdump sparad"
   )
MSG_HASH(
   MSG_ACHIEVEMENT_UNLOCKED,
   "Prestation upplåst"
   )
MSG_HASH(
   MSG_RARE_ACHIEVEMENT_UNLOCKED,
   "Sällsynt prestation upplåst"
   )
MSG_HASH(
   MSG_LEADERBOARD_STARTED,
   "Topplisteförsök startat"
   )
MSG_HASH(
   MSG_LEADERBOARD_FAILED,
   "Topplisteförsök misslyckades"
   )
MSG_HASH(
   MSG_LEADERBOARD_SUBMISSION,
   "Skickade in %s för %s" /* Submitted [value] for [leaderboard name] */
   )
MSG_HASH(
   MSG_LEADERBOARD_BEST,
   "Bästa: %s" /* Best: [value] */
   )
MSG_HASH(
   MSG_CHANGE_THUMBNAIL_TYPE,
   "Ändra miniatyrbildstyp"
   )
MSG_HASH(
   MSG_TOGGLE_FULLSCREEN_THUMBNAILS,
   "Helskärmsminiatyrer"
   )
MSG_HASH(
   MSG_TOGGLE_CONTENT_METADATA,
   "Växla metadata"
   )
MSG_HASH(
   MSG_NO_THUMBNAIL_AVAILABLE,
   "Ingen miniatyrbild tillgänglig"
   )
MSG_HASH(
   MSG_NO_THUMBNAIL_DOWNLOAD_POSSIBLE,
   "Alla möjliga hämtningar av miniatyrbilder har redan provats för den här spellisteposten."
   )
MSG_HASH(
   MSG_PRESS_AGAIN_TO_QUIT,
   "Tryck igen för att avsluta..."
   )
MSG_HASH(
   MSG_PRESS_AGAIN_TO_CLOSE_CONTENT,
   "Tryck igen för att stänga innehållet..."
   )
MSG_HASH(
   MSG_PRESS_AGAIN_TO_RESET,
   "Tryck igen för att starta om..."
   )
MSG_HASH(
   MSG_TO,
   "till"
   )
MSG_HASH(
   MSG_UNDID_LOAD_STATE,
   "Ångrade inläsningstillstånd."
   )
MSG_HASH(
   MSG_UNDOING_SAVE_STATE,
   "Ångrar sparat tillstånd"
   )
MSG_HASH(
   MSG_UNKNOWN,
   "Okänd"
   )
MSG_HASH(
   MSG_UNPAUSED,
   "Opausad."
   )
MSG_HASH(
   MSG_UNRECOGNIZED_COMMAND,
   "Okänt kommando \"%s\" togs emot.\n"
   )
MSG_HASH(
   MSG_USING_CORE_NAME_FOR_NEW_CONFIG,
   "Använder kärnnamnet för ny konfiguration."
   )
MSG_HASH(
   MSG_USING_LIBRETRO_DUMMY_CORE_RECORDING_SKIPPED,
   "Använder libretros dummy-kärna. Hoppar över inspelning."
   )
MSG_HASH(
   MSG_VALUE_CONNECT_DEVICE_FROM_A_VALID_PORT,
   "Anslut enhet från en giltig port."
   )
MSG_HASH(
   MSG_VALUE_DISCONNECTING_DEVICE_FROM_PORT,
   "Kopplar bort enheten från porten"
   )
MSG_HASH(
   MSG_VALUE_REBOOTING,
   "Startar om..."
   )
MSG_HASH(
   MSG_VALUE_SHUTTING_DOWN,
   "Stänger ner..."
   )
MSG_HASH(
   MSG_VERSION_OF_LIBRETRO_API,
   "Version av libretro API"
   )
MSG_HASH(
   MSG_VIRTUAL_DISK_TRAY_EJECT,
   "Misslyckades med att mata ut virtuell skivsläde."
   )
MSG_HASH(
   MSG_VIRTUAL_DISK_TRAY_CLOSE,
   "Misslyckades med att stänga virtuell skivsläde."
   )
MSG_HASH(
   MSG_AUTOLOADING_SAVESTATE_FROM,
   "Läs automatiskt in sparade tillstånd från"
   )
MSG_HASH(
   MSG_AUTOLOADING_SAVESTATE_FAILED,
   "Misslyckades med att automatiskt läsa in sparat tillstånd från \"%s\"."
   )
MSG_HASH(
   MSG_AUTOLOADING_SAVESTATE_SUCCEEDED,
   "Automatisk inläsning av sparat tillstånd från \"%s\" lyckades."
   )
MSG_HASH(
   MSG_DEVICE_CONFIGURED_IN_PORT,
   "konfigurerad i port"
   )
MSG_HASH(
   MSG_DEVICE_CONFIGURED_IN_PORT_NR,
   "%s konfigurerad i port %u"
   )
MSG_HASH(
   MSG_DEVICE_DISCONNECTED_FROM_PORT,
   "kopplades från port"
   )
MSG_HASH(
   MSG_DEVICE_DISCONNECTED_FROM_PORT_NR,
   "%s kopplades från port %u"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED,
   "inte konfigurerad"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED_NR,
   "%s (%u/%u) är inte konfigurerad"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED_FALLBACK,
   "inte konfigurerad, faller tillbaka"
   )
MSG_HASH(
   MSG_DEVICE_NOT_CONFIGURED_FALLBACK_NR,
   "%s (%u/%u) inte konfigurerad, faller tillbaka"
   )
MSG_HASH(
   MSG_BLUETOOTH_SCAN_COMPLETE,
   "Bluetooth-skanning slutförd."
   )
MSG_HASH(
   MSG_BLUETOOTH_PAIRING_REMOVED,
   "Parkoppling borttagen. Starta om RetroArch för att ansluta/para igen."
   )
MSG_HASH(
   MSG_WIFI_SCAN_COMPLETE,
   "Wi-Fi-skanning slutförd."
   )
MSG_HASH(
   MSG_SCANNING_BLUETOOTH_DEVICES,
   "Skannar efter bluetooth-enheter..."
   )
MSG_HASH(
   MSG_SCANNING_WIRELESS_NETWORKS,
   "Skannar trådlösa nätverk..."
   )
MSG_HASH(
   MSG_ENABLING_WIRELESS,
   "Aktiverar Wi-Fi..."
   )
MSG_HASH(
   MSG_DISABLING_WIRELESS,
   "Inaktiverar Wi-Fi..."
   )
MSG_HASH(
   MSG_DISCONNECTING_WIRELESS,
   "Kopplar från Wi-Fi..."
   )
MSG_HASH(
   MSG_NETPLAY_LAN_SCANNING,
   "Letar efter netplay-värdar..."
   )
MSG_HASH(
   MSG_PREPARING_FOR_CONTENT_SCAN,
   "Förbereder för innehållssökning..."
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD,
   "Ange lösenord"
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD_OK,
   "Lösenord korrekt."
   )
MSG_HASH(
   MSG_INPUT_ENABLE_SETTINGS_PASSWORD_NOK,
   "Lösenord felaktigt."
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD,
   "Ange lösenord"
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD_OK,
   "Lösenord korrekt."
   )
MSG_HASH(
   MSG_INPUT_KIOSK_MODE_PASSWORD_NOK,
   "Lösenord felaktigt."
   )
MSG_HASH(
   MSG_CONFIG_OVERRIDE_LOADED,
   "Åsidosättning av konfiguration inläst."
   )
MSG_HASH(
   MSG_RUNAHEAD_ENABLED,
   "Run-Ahead aktiverat. Latensbildrutor borttagna: %u."
   )
MSG_HASH(
   MSG_RUNAHEAD_ENABLED_WITH_SECOND_INSTANCE,
   "Run-Ahead aktiverat med sekundär instans. Latensbildrutor borttagna: %u."
   )
MSG_HASH(
   MSG_RUNAHEAD_DISABLED,
   "Run-Ahead inaktiverat."
   )
MSG_HASH(
   MSG_RUNAHEAD_CORE_DOES_NOT_SUPPORT_SAVESTATES,
   "Run-Ahead har inaktiverats för att denna kärna saknar stöd för sparade tillstånd."
   )
MSG_HASH(
   MSG_RUNAHEAD_CORE_DOES_NOT_SUPPORT_RUNAHEAD,
   "Run-Ahead är inte tillgänglig på grund av bristande stöd i denna kärna för deterministisk sparning av tillstånd."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_SAVE_STATE,
   "Misslyckades med att spara tillstånd. Run-Ahead har inaktiverats."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_LOAD_STATE,
   "Misslyckades med att läsa in tillstånd. Run-Ahead har inaktiverats."
   )
MSG_HASH(
   MSG_RUNAHEAD_FAILED_TO_CREATE_SECONDARY_INSTANCE,
   "Misslyckades med att skapa sekundär instans. Run-Ahead kommer nu endast använda en instans."
   )
MSG_HASH(
   MSG_PREEMPT_CORE_DOES_NOT_SUPPORT_PREEMPT,
   "Preemptive Frames är inte tillgängligt eftersom denna kärna saknar stöd för deterministisk sparning av tillstånd."
   )
MSG_HASH(
   MSG_PREEMPT_FAILED_TO_ALLOCATE,
   "Det gick inte att allokera minne för Preemptive Frames."
   )
MSG_HASH(
   MSG_PREEMPT_FAILED_TO_SAVE_STATE,
   "Det gick inte att spara tillståndet. Preemptive Frames har inaktiverats."
   )
MSG_HASH(
   MSG_PREEMPT_FAILED_TO_LOAD_STATE,
   "Det gick inte att läsa in tillståndet. Preemptive Frames har inaktiverats."
   )
MSG_HASH(
   MSG_SCANNING_OF_FILE_FINISHED,
   "Genomsökning av fil genomförd."
   )
MSG_HASH(
   MSG_CHEAT_INIT_SUCCESS,
   "Startade sökning efter fusk."
   )
MSG_HASH(
   MSG_CHEAT_INIT_FAIL,
   "Misslyckades med att starta sökning efter fusk."
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_NOT_INITIALIZED,
   "Sökningen har inte initierats/startats."
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_FOUND_MATCHES,
   "Nya matchantal = %u"
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_SUCCESS,
   "Lade till %u matchningar."
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_FAIL,
   "Misslyckades med att lägga till matchningar."
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADD_MATCH_SUCCESS,
   "Skapade kod från matchning."
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADD_MATCH_FAIL,
   "Misslyckades med att skapa kod."
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_DELETE_MATCH_SUCCESS,
   "Tog bort matchning."
   )
MSG_HASH(
   MSG_CHEAT_SEARCH_ADDED_MATCHES_TOO_MANY,
   "Slut på plats. Maximalt antal samtidiga fusk är 100."
   )
MSG_HASH(
   MSG_CHEAT_ADD_TOP_SUCCESS,
   "Nytt fusk lades till överst i listan."
   )
MSG_HASH(
   MSG_CHEAT_ADD_BOTTOM_SUCCESS,
   "Nytt fusk lades till nederst i listan."
   )
MSG_HASH(
   MSG_CHEAT_DELETE_ALL_SUCCESS,
   "Alla fusk borttagna."
   )
MSG_HASH(
   MSG_CHEAT_ADD_BEFORE_SUCCESS,
   "Nytt fusk lades till före denna."
   )
MSG_HASH(
   MSG_CHEAT_ADD_AFTER_SUCCESS,
   "Nytt fusk lades till efter denna."
   )
MSG_HASH(
   MSG_CHEAT_COPY_BEFORE_SUCCESS,
   "Fusk kopierat till före denna."
   )
MSG_HASH(
   MSG_CHEAT_COPY_AFTER_SUCCESS,
   "Fusk kopierat till efter denna."
   )
MSG_HASH(
   MSG_CHEAT_DELETE_SUCCESS,
   "Fusk raderat."
   )
MSG_HASH(
   MSG_FAILED_TO_SET_DISK,
   "Misslyckades med att ställa in skiva."
   )
MSG_HASH(
   MSG_FAILED_TO_SET_INITIAL_DISK,
   "Misslyckades med att ställa in sista använda skiva."
   )
MSG_HASH(
   MSG_FAILED_TO_CONNECT_TO_CLIENT,
   "Misslyckades med att ansluta till klient."
   )
MSG_HASH(
   MSG_FAILED_TO_CONNECT_TO_HOST,
   "Misslyckades med att ansluta till värd."
   )
MSG_HASH(
   MSG_NETPLAY_HOST_FULL,
   "Netplay-värden är full."
   )
MSG_HASH(
   MSG_NETPLAY_BANNED,
   "Du är bannlyst från denna värd."
   )
MSG_HASH(
   MSG_FAILED_TO_RECEIVE_HEADER_FROM_HOST,
   "Misslyckades med att ta bort rubrik från värd."
   )
MSG_HASH(
   MSG_CHEEVOS_LOGGED_IN_AS_USER,
   "RetroAchievements: Inloggad som \"%s\"."
   )
MSG_HASH(
   MSG_CHEEVOS_LOAD_STATE_PREVENTED_BY_HARDCORE_MODE,
   "Du måste pausa eller inaktivera Hardcore-läget för prestationer för att läsa in tillstånd."
   )
MSG_HASH(
   MSG_CHEEVOS_LOAD_SAVEFILE_PREVENTED_BY_HARDCORE_MODE,
   "Du måste pausa eller inaktivera hardcoreläget för prestationer för att läsa in srm-sparningar."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_DISABLED,
   "Ett sparat tillstånd lästes in. Hardcore-läget för prestationer inaktiverades för aktuell session."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_DISABLED_CHEAT,
   "Ett fusk aktiverades. Hardcore-läget för prestationer inaktiverades för aktuell session."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_CHANGED_BY_HOST,
   "Hardcore-läget för prestationer ändrades av värden."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_REQUIRES_NEWER_HOST,
   "Netplay-värden behöver uppdateras. Hardcore-läget för prestationer inaktiverades för aktuell session."
   )
MSG_HASH(
   MSG_CHEEVOS_MASTERED_GAME,
   "Bemästrat: %s"
   )
MSG_HASH(
   MSG_CHEEVOS_COMPLETED_GAME,
   "Klarade av %s"
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_MODE_ENABLE,
   "Hardcore-läget för prestationer aktiverades, sparade tillstånd och tillbakaspolning inaktiverades."
   )
MSG_HASH(
   MSG_CHEEVOS_GAME_HAS_NO_ACHIEVEMENTS,
   "Detta spel har inga prestationer."
   )
MSG_HASH(
   MSG_CHEEVOS_ALL_ACHIEVEMENTS_ACTIVATED,
   "Alla %d prestationer har aktiverats för denna session"
)
MSG_HASH(
   MSG_CHEEVOS_UNOFFICIAL_ACHIEVEMENTS_ACTIVATED,
   "Aktiverade %d inofficiella prestationer"
)
MSG_HASH(
   MSG_CHEEVOS_NUMBER_ACHIEVEMENTS_UNLOCKED,
   "Du har låst upp %d av %d prestationer"
)
MSG_HASH(
   MSG_CHEEVOS_UNSUPPORTED_COUNT,
   "%d stöds inte"
)
MSG_HASH(
   MSG_CHEEVOS_UNSUPPORTED_WARNING,
   "Prestationer som inte stöds upptäcktes. Prova en annan kärna eller uppdatera RetroArch."
)
MSG_HASH(
   MSG_CHEEVOS_RICH_PRESENCE_SPECTATING,
   "Åskådarläge för %s"
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_PAUSED_MANUAL_FRAME_DELAY,
   "Hardcore pausad. Manuell inställning av fördröjning av bildrutor för video är inte tillåten."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_PAUSED_VSYNC_SWAP_INTERVAL,
   "Hardcore pausad. vsync swap-intervall över 1 tillåts inte."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_PAUSED_BLACK_FRAME_INSERTION,
   "Hardcore pausad. Infogning av svarta bildrutor är inte tillåtet."
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_PAUSED_SETTING_NOT_ALLOWED,
   "Hardcore pausat. Inställningen tillåts inte: %s=%s"
   )
MSG_HASH(
   MSG_CHEEVOS_HARDCORE_PAUSED_SYSTEM_NOT_FOR_CORE,
   "Hardcore pausat. Du kan inte tjäna hardcore-prestationer för %s med %s"
   )
MSG_HASH(
   MSG_CHEEVOS_GAME_NOT_IDENTIFIED,
   "RetroAchievements: Spelet kunde inte identifieras."
   )
MSG_HASH(
   MSG_CHEEVOS_GAME_LOAD_FAILED,
   "Spelinläsning för RetroAchievements misslyckades: %s"
   )
MSG_HASH(
   MSG_CHEEVOS_CHANGE_MEDIA_FAILED,
   "Mediabyte för RetroAchievements misslyckades: %s"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_LOWEST,
   "Lägsta"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_LOWER,
   "Lägre"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_HIGHER,
   "Högre"
   )
MSG_HASH(
   MSG_RESAMPLER_QUALITY_HIGHEST,
   "Högsta"
   )
MSG_HASH(
   MSG_MISSING_ASSETS,
   "Varning: Saknade resurser, använd online-uppdateraren om tillgänglig."
   )
MSG_HASH(
   MSG_RGUI_MISSING_FONTS,
   "Varning: Saknade typsnitt för valt språk, använd online-uppdateraren om tillgänglig."
   )
MSG_HASH(
   MSG_RGUI_INVALID_LANGUAGE,
   "Varning: Språket stöds inte - använder engelska."
   )
MSG_HASH(
   MSG_DUMPING_DISC,
   "Dumpar skiva..."
   )
MSG_HASH(
   MSG_DRIVE_NUMBER,
   "Enhet %d"
   )
MSG_HASH(
   MSG_LOAD_CORE_FIRST,
   "Läs in en kärna först."
   )
MSG_HASH(
   MSG_DISC_DUMP_FAILED_TO_READ_FROM_DRIVE,
   "Misslyckades med att läsa från enhet. Dumpning avbröts."
   )
MSG_HASH(
   MSG_DISC_DUMP_FAILED_TO_WRITE_TO_DISK,
   "Misslyckades med att skriva till disk. Dumpning avbröts."
   )
MSG_HASH(
   MSG_NO_DISC_INSERTED,
   "Ingen skiva har matats in i enheten."
   )
MSG_HASH(
   MSG_SHADER_PRESET_REMOVED_SUCCESSFULLY,
   "Förval för shader togs bort."
   )
MSG_HASH(
   MSG_ERROR_REMOVING_SHADER_PRESET,
   "Fel vid borttagning av shader-förval."
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_INVALID,
   "Ogiltig arcade DAT-fil vald."
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_TOO_LARGE,
   "Vald arcade DAT-fil är för stor (otillräckligt med ledigt minne)."
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_DAT_FILE_LOAD_ERROR,
   "Misslyckades med att läsa in arcade DAT-fil (ogiltigt format?)"
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_INVALID_CONFIG,
   "Ogiltig konfiguration för manuell genomsökning."
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_INVALID_CONTENT,
   "Inget giltigt innehåll hittades."
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_START,
   "Skannar innehåll: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_PLAYLIST_CLEANUP,
   "Kontrollerar aktuella poster: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_IN_PROGRESS,
   "Skannar: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_M3U_CLEANUP,
   "Städar upp M3U-poster: "
   )
MSG_HASH(
   MSG_MANUAL_CONTENT_SCAN_END,
   "Genomsökning färdig: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_SCANNING_CORE,
   "Söker igenom kärna: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_ALREADY_EXISTS,
   "Säkerhetskopia av installerad kärna finns redan: "
   )
MSG_HASH(
   MSG_BACKING_UP_CORE,
   "Säkerhetskopierar kärna: "
   )
MSG_HASH(
   MSG_PRUNING_CORE_BACKUP_HISTORY,
   "Tar bort föråldrade säkerhetskopior: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_COMPLETE,
   "Säkerhetskopiering av kärna slutförd: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_ALREADY_INSTALLED,
   "Vald säkerhetskopia för kärna redan installerad: "
   )
MSG_HASH(
   MSG_RESTORING_CORE,
   "Återställer kärna: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_COMPLETE,
   "Kärnåterställningen färdig: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_ALREADY_INSTALLED,
   "Vald kärnfil är redan installerad: "
   )
MSG_HASH(
   MSG_INSTALLING_CORE,
   "Installerar kärna: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_COMPLETE,
   "Kärninstallationen färdig: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_INVALID_CONTENT,
   "Ogiltig kärnfil vald: "
   )
MSG_HASH(
   MSG_CORE_BACKUP_FAILED,
   "Säkerhetskopiering av kärna misslyckades: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_FAILED,
   "Återställning av kärna misslyckades: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_FAILED,
   "Installation av kärna misslyckades: "
   )
MSG_HASH(
   MSG_CORE_RESTORATION_DISABLED,
   "Återställning av kärna inaktiverad - kärnan är låst: "
   )
MSG_HASH(
   MSG_CORE_INSTALLATION_DISABLED,
   "Kärninstallation inaktiverad - kärnan är låst: "
   )
MSG_HASH(
   MSG_CORE_LOCK_FAILED,
   "Misslyckades med att låsa kärnan: "
   )
MSG_HASH(
   MSG_CORE_UNLOCK_FAILED,
   "Misslyckades med att låsa upp kärnan: "
   )
MSG_HASH(
   MSG_CORE_SET_STANDALONE_EXEMPT_FAILED,
   "Misslyckades att ta bort kärna från listan 'Innehållslösa kärnor': "
   )
MSG_HASH(
   MSG_CORE_UNSET_STANDALONE_EXEMPT_FAILED,
   "Misslyckades att lägga till kärna i listan 'Innehållslösa kärnor': "
   )
MSG_HASH(
   MSG_CORE_DELETE_DISABLED,
   "Kärnborttagning inaktiverad - kärnan är låst: "
   )
MSG_HASH(
   MSG_UNSUPPORTED_VIDEO_MODE,
   "Videoläget stöds inte"
   )
MSG_HASH(
   MSG_CORE_INFO_CACHE_UNSUPPORTED,
   "Kan inte skriva till kärnans informationskatalog - kärninfocachen kommer att inaktiveras"
   )
MSG_HASH(
   MSG_FOUND_ENTRY_STATE_IN,
   "Hittade ingångstillstånd i"
   )
MSG_HASH(
   MSG_LOADING_ENTRY_STATE_FROM,
   "Läser in ingångstillstånd från"
   )
MSG_HASH(
   MSG_FAILED_TO_ENTER_GAMEMODE,
   "Misslyckades med att gå in i GameMode"
   )
MSG_HASH(
   MSG_FAILED_TO_ENTER_GAMEMODE_LINUX,
   "Misslyckades med att gå in i GameMode - kontrollera att GameMode-daemon är installerad och körs"
   )
MSG_HASH(
   MSG_VRR_RUNLOOP_ENABLED,
   "Synkronisera till innehållets exakta bildfrekvens aktiverat."
   )
MSG_HASH(
   MSG_VRR_RUNLOOP_DISABLED,
   "Synkronisera till innehållets exakta bildfrekvens inaktiverat."
   )
MSG_HASH(
   MSG_VIDEO_REFRESH_RATE_CHANGED,
   "Videouppdateringsfrekvens ändrad till %s Hz."
   )

/* Lakka */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_UPDATE_LAKKA,
   "Uppdatera Lakka"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SYSTEM_INFO_FRONTEND_NAME,
   "Frontend-namn"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_REBOOT,
   "Starta om"
   )

/* Environment Specific Settings */

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SPLIT_JOYCON,
   "Delade Joy-Con"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_WIDGET_SCALE_FACTOR,
   "Åsidosätt skalning av grafikwidgetar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_WIDGET_SCALE_FACTOR,
   "Tillämpa en manuell skalningsfaktor vid ritning av grafikwidgetar. Gäller endast när ”Skala grafikwidgetar automatiskt” är inaktiverat. Kan användas för att öka eller minska storleken på dekorerade meddelanden, indikatorer och kontroller oberoende av själva menyn."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SCREEN_RESOLUTION,
   "Skärmupplösning"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_DEFAULT,
   "Skärmupplösning: Standard"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_NO_DESC,
   "Skärmupplösning: %dx%d"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_DESC,
   "Skärmupplösning: %dx%d - %s"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_APPLYING_DEFAULT,
   "Verkställer: Standard"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_APPLYING_NO_DESC,
   "Verkställer: %dx%d\nSTART för att starta om"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_APPLYING_DESC,
   "Verkställer: %dx%d - %s\nSTART för att starta om"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_RESETTING_DEFAULT,
   "Återställer till: Standard"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_RESETTING_NO_DESC,
   "Återställer till: %dx%d"
   )
MSG_HASH(
   MSG_SCREEN_RESOLUTION_RESETTING_DESC,
   "Återställer till: %dx%d - %s"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SCREEN_RESOLUTION,
   "Ange upplösningen för skärm (omstart krävs)"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SHUTDOWN,
   "Stäng av"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "Aktivera extern filåtkomst"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "Öppna Windows-inställningar för filåtkomstbehörighet"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_FILE_BROWSER_OPEN_UWP_PERMISSIONS,
   "Öppna Windows inställningar för behörighet för att aktivera funktionen broadFileSystemAccess."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_FILE_BROWSER_OPEN_PICKER,
   "Öppna..."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_FILE_BROWSER_OPEN_PICKER,
   "Öppna en annan katalog med hjälp av systemets filväljare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_FILTER_FLICKER,
   "Flimmerfilter"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_GAMMA,
   "Videogamma"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_SOFT_FILTER,
   "Mjukt filter"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_SETTINGS,
   "Skanna efter bluetooth-enheter och anslut dem."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_WIFI_SETTINGS,
   "Skanna efter trådlösa nätverk och etablera anslutning."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_ENABLED,
   "Aktivera Wi-Fi"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_NETWORK_SCAN,
   "Anslut till nätverk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_NETWORKS,
   "Anslut till nätverk"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_WIFI_DISCONNECT,
   "Koppla från"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OVERSCAN_CORRECTION_TOP,
   "Överskanningskorrigering (Topp)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OVERSCAN_CORRECTION_TOP,
   "Justera beskärning av överskanning av skärmen genom att minska bildstorleken med ett angivet antal skanningslinjer (tagen från skärmens övre del). Kan orsaka skalningsartefakter."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_OVERSCAN_CORRECTION_BOTTOM,
   "Överskanningskorrigering (Botten)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_OVERSCAN_CORRECTION_BOTTOM,
   "Justera beskärning av överskanning av skärmen genom att minska bildstorleken med ett angivet antal skanlinjer (tagen från skärmens nedre kant). Kan orsaka skalningsartefakter."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SUSTAINED_PERFORMANCE_MODE,
   "Långvarigt prestandaläge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERFPOWER,
   "CPU-prestanda och ström"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE,
   "Styrande läge"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MANUAL,
   "Manuell"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MANUAL,
   "Gör det möjligt att manuellt justera varje detalj i varje CPU: regulator, frekvenser etc. Rekommenderas endast för avancerade användare."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MANAGED_PERF,
   "Prestanda (hanterad)"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MANAGED_PERF,
   "Standard och rekommenderat läge. Maximal prestanda vid spel och strömsparläge vid paus eller menybläddring."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MANAGED_PER_CONTEXT,
   "Anpassad hanterad"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MANAGED_PER_CONTEXT,
   "Gör det möjligt att välja vilka styrande faktorer som ska användas i menyer och under spel. Prestanda, Ondemand eller Schedutil rekommenderas under spel."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MAX_PERF,
   "Maximal prestanda"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MAX_PERF,
   "Alltid maximal prestanda: högsta frekvenser för bästa upplevelse."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_MIN_POWER,
   "Minimal ström"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_MIN_POWER,
   "Använd den lägsta tillgängliga frekvensen för att spara ström. Användbart på batteridrivna enheter, men prestandan försämras avsevärt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_PERF_MODE_BALANCED,
   "Balanserad"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VALUE_CPU_PERF_MODE_BALANCED,
   "Anpassar sig till den aktuella arbetsbelastningen. Fungerar bra med de flesta enheter och emulatorer och hjälper till att spara ström. Krävande spel och kärnor kan drabbas av prestandaförsämring på vissa enheter."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_MIN_FREQ,
   "Minimal frekvens"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_MAX_FREQ,
   "Maximal frekvens"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_MANAGED_MIN_FREQ,
   "Minimum kärnfrekvens"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_MANAGED_MAX_FREQ,
   "Maximal kärnfrekvens"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_GOVERNOR,
   "CPU-regulator"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_CORE_GOVERNOR,
   "Kärnregulator"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CPU_POLICY_MENU_GOVERNOR,
   "Menyregulator"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAMEMODE_ENABLE,
   "Spelläge"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAMEMODE_ENABLE_LINUX,
   "Kan förbättra prestanda, minska fördröjningar och åtgärda problem med knastrande ljud. Du behöver https://github.com/FeralInteractive/gamemode för att detta ska fungera."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_GAMEMODE_ENABLE,
   "Om du aktiverar Linux GameMode kan du förbättra latensen, åtgärda problem med sprakande ljud och maximera den totala prestandan genom att automatiskt konfigurera CPU och GPU för bästa prestanda.\nProgramvaran GameMode måste installeras för att detta ska fungera. Se https://github.com/FeralInteractive/gamemode för information om hur du installerar GameMode."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_PAL60_ENABLE,
   "Använd PAL60-läget"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_META_RESTART_KEY,
   "Starta om RetroArch"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_META_RESTART_KEY,
   "Avsluta och starta sedan om RetroArch. Krävs för aktivering av vissa menyinställningar (t. ex. vid byte av menydrivrutin)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_AUDIO_BLOCK_FRAMES,
   "Blockera bildrutor"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_PREFER_FRONT_TOUCH,
   "Föredra främre tryck"
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_INPUT_PREFER_FRONT_TOUCH,
   "Använd främre istället för bakre tryck."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_ENABLE,
   "Tryck"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_ICADE_ENABLE,
   "Mappning för tangentbordskontroller"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_KEYBOARD_GAMEPAD_MAPPING_TYPE,
   "Mappningstyp för tangentbordskontroller"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_SMALL_KEYBOARD_ENABLE,
   "Litet tangentbord"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_BLOCK_TIMEOUT,
   "Tidsgräns för inmatningsblock"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_BLOCK_TIMEOUT,
   "Antalet millisekunders väntetid för att få ett komplett inmatningsprov. Använd det om du har problem med samtidiga knapptryckningar (endast Android)."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_REBOOT,
   "Visa 'Starta om'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_REBOOT,
   "Visa alternativet 'Starta om'."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_MENU_SHOW_SHUTDOWN,
   "Visa 'Stäng av'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_MENU_SHOW_SHUTDOWN,
   "Visa alternativet 'Stäng av'."
   )
MSG_HASH(
   MSG_ROOM_PASSWORDED,
   "Lösenordsskyddat"
   )
MSG_HASH(
   MSG_INTERNET_RELAY,
   "Internet (relä)"
   )
MSG_HASH(
   MSG_INTERNET_NOT_CONNECTABLE,
   "Internet (inte anslutningsbart)"
   )
MSG_HASH(
   MSG_LOCAL,
   "Lokal"
   )
MSG_HASH(
   MSG_READ_WRITE,
   "Status för intern lagring: Läs/skriv"
   )
MSG_HASH(
   MSG_READ_ONLY,
   "Status för intern lagring: Skrivskyddad"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BRIGHTNESS_CONTROL,
   "Skärmens ljusstyrka"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BRIGHTNESS_CONTROL,
   "Öka eller minska skärmens ljusstyrka."
   )
#ifdef HAVE_LIBNX
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_CPU_PROFILE,
   "Överklocka CPU"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_CPU_PROFILE,
   "Överklocka Switch CPUn."
   )
#endif
#ifdef HAVE_LAKKA
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_ENABLE,
   "Ange tillståndet för Bluetooth."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LAKKA_SERVICES,
   "Tjänster"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SERVICES_SETTINGS,
   "Hantera tjänster på operativsystemsnivå."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SAMBA_ENABLE,
   "Dela nätverksmappar genom SMB-protokollet."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SSH_ENABLE,
   "Använd SSH för att komma åt kommandoraden utifrån."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LOCALAP_ENABLE,
   "Wi-Fi accesspunkt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LOCALAP_ENABLE,
   "Aktivera/Inaktivera Wi-Fi accesspunkt."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_TIMEZONE,
   "Tidszon"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_TIMEZONE,
   "Välj din tidszon för att justera datum och tid till din plats."
   )
MSG_HASH(
   MENU_ENUM_LABEL_HELP_TIMEZONE,
   "Visar en lista över tillgängliga tidszoner. Efter att du valt en tidszon justeras tid och datum till den valda tidszonen. Det antar, att system/hårdvaruklockan är inställd på UTC."
   )
#ifdef HAVE_LAKKA_SWITCH
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_LAKKA_SWITCH_OPTIONS,
   "Alternativ för Nintendo Switch"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_LAKKA_SWITCH_OPTIONS,
   "Hantera specifika alternativ för Nintendo Switch."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_OC_ENABLE,
   "Överklocka CPU"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_OC_ENABLE,
   "Aktivera CPU-överklockningsfrekvenser"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_SWITCH_CEC_ENABLE,
   "CEC-stöd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_SWITCH_CEC_ENABLE,
   "Aktivera CPU-handskakning med TV vid dockning"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BLUETOOTH_ERTM_DISABLE,
   "Inaktivera Bluetooth ERTM"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BLUETOOTH_ERTM_DISABLE,
   "Inaktivera Bluetooth ERTM för att fixa parkoppling av vissa enheter"
   )
#endif
MSG_HASH(
   MSG_LOCALAP_SWITCHING_OFF,
   "Stänger av Wi-Fi-åtkomstpunkt."
   )
MSG_HASH(
   MSG_WIFI_DISCONNECT_FROM,
   "Kopplar från Wi-Fi '%s'"
   )
MSG_HASH(
   MSG_WIFI_CONNECTING_TO,
   "Ansluter till Wi-Fi '%s'"
   )
MSG_HASH(
   MSG_WIFI_EMPTY_SSID,
   "[Inget SSID]"
   )
MSG_HASH(
   MSG_LOCALAP_ALREADY_RUNNING,
   "Wi-Fi-åtkomstpunkt är redan startad"
   )
MSG_HASH(
   MSG_LOCALAP_NOT_RUNNING,
   "Wi-Fi-åtkomstpunkt är inte igång"
   )
MSG_HASH(
   MSG_LOCALAP_STARTING,
   "Startar Wi-Fi-åtkomstpunkt med SSID=%s och lösennyckel=%s"
   )
MSG_HASH(
   MSG_LOCALAP_ERROR_CONFIG_CREATE,
   "Kunde inte skapa konfigurationsfil för Wi-Fi-åtkomstpunkt."
   )
MSG_HASH(
   MSG_LOCALAP_ERROR_CONFIG_PARSE,
   "Felaktig konfigurationsfil - kunde inte hitta APNAME eller PASSWORD i %s"
   )
#endif
#ifdef HAVE_LAKKA_SWITCH
#endif
#ifdef GEKKO
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_MOUSE_SCALE,
   "Musskala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_MOUSE_SCALE,
   "Justera x/y-hastighetsskala för Wiimotes ljuspistol."
   )
#endif
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_SCALE,
   "Tryckskala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TOUCH_SCALE,
   "Justera x/y-skalan för pekskärmens koordinater för att anpassa den till OS-nivåns skärmskalning."
   )
#ifdef UDEV_TOUCH_SUPPORT
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_VMOUSE_POINTER,
   "Tryck på VMouse som pekare"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_VMOUSE_MOUSE,
   "Tryck på VMouse som mus"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TOUCH_VMOUSE_MOUSE,
   "Aktivera virtuell musemulering med hjälp av inmatningshändelser vid beröring."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TOUCH_VMOUSE_TOUCHPAD,
   "Aktivera tillsammans med mus för att använda pekskärmen som pekplatta."
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TOUCH_VMOUSE_TRACKBALL,
   "Aktivera tillsammans med musen för att använda pekskärmen som en styrkula, vilket ger pekaren tröghet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_INPUT_TOUCH_VMOUSE_GESTURE,
   "Gester för tryck på VMouse"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_INPUT_TOUCH_VMOUSE_GESTURE,
   "Aktivera pekskärmsgester, inklusive tryck, tryck-dra och svep med fingret."
   )
#endif
#ifdef HAVE_ODROIDGO2
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_RGA_SCALING,
   "RGA-skalning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_RGA_SCALING,
   "RGA-skalning och bikubisk filtrering. Kan göra sönder widgetar."
   )
#else
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_CTX_SCALING,
   "Kontextspecifik skalning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_CTX_SCALING,
   "Kontextskalning med hårdvara (om tillgänglig)."
   )
#endif
#ifdef _3DS
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_NEW3DS_SPEEDUP_ENABLE,
   "Aktivera New3DS-klocka / L2-cache"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_NEW3DS_SPEEDUP_ENABLE,
   "Aktivera New3DS-klockhastighet (804 Mhz) och L2-cache."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_LCD_BOTTOM,
   "Nedre 3DS-skärm"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_3DS_LCD_BOTTOM,
   "Aktivera visning av statusinformation på den nedre skärmen. Inaktivera för att öka batteritiden och förbättra prestandan."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_VIDEO_3DS_DISPLAY_MODE,
   "Läge för 3DS-skärmar"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_VIDEO_3DS_DISPLAY_MODE,
   "Väljer mellan visningslägena 3D och 2D. I ”3D”-läget är bildpunkterna kvadratiska och en djupeffekt tillämpas när snabbmenyn visas. ”2D\"-läget ger bäst prestanda."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CTR_VIDEO_MODE_2D_800X240,
   "2D (hög upplösning)"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_DEFAULT,
   "Tryck på pekskärmen för att gå\ntill Retroarch-menyn"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_ASSET_NOT_FOUND,
   "Tillgång(ar) hittades inte"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_NO_STATE_DATA,
   "Inga\ndata"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_NO_STATE_THUMBNAIL,
   "Ingen\nskärmdump"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_RESUME,
   "Återuppta spel"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_SAVE_STATE,
   "Skapa\nÅterställ punkt"
   )
MSG_HASH(
   MSG_3DS_BOTTOM_MENU_LOAD_STATE,
   "Läs in\nåterställningspunkt"
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_ASSETS_DIRECTORY,
   "Nedre skärmens Tillgångsmapp"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_ASSETS_DIRECTORY,
   "Nedre skärmens katalog för tillgångar. Katalogen måste inkludera \"bottom_menu.png\"."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_ENABLE,
   "Typsnittsaktivering"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_ENABLE,
   "Visa nedre menyns typsnitt. Aktivera för att visa knappbeskrivningar på nedre skärmen. Detta exkluderar datum för sparat tillstånd."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_RED,
   "Typsnittsfärg röd"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_RED,
   "Justera den röda färgen på teckensnittet i nedre skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_GREEN,
   "Typsnittsfärg grön"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_GREEN,
   "Justera den gröna färgen på teckensnittet i nedre skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_BLUE,
   "Typsnittsfärg blå"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_BLUE,
   "Justera den blåa färgen på teckensnittet i nedre skärmen."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_COLOR_OPACITY,
   "Färgopacitet för typsnitt"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_COLOR_OPACITY,
   "Justera nedre skärmens typsnittsopacitet."
   )
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_BOTTOM_FONT_SCALE,
   "Typsnittsskala"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_BOTTOM_FONT_SCALE,
   "Justera nedre skärmens typsnittsskala."
   )
#endif
#ifdef HAVE_QT
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QT_SCAN_FINISHED,
   "Genomsökning slutförd.<br><br>\nFör att innehållet ska sökas igenom korrekt måste du:\n<ul><li>ha en kompatibel kärna redan hämtat</li>\n<li>ha ”Kärninfofiler” uppdaterade via Online-uppdaterare</li>\n<li>ha ”Databaser” uppdaterade via Online-uppdaterare</li>\n<li>starta om RetroArch om något av ovanstående just har gjorts</li></ul>\nSlutligen måste innehållet matcha befintliga databaser från <a href=\"https://docs. libretro.com/guides/roms-playlists-thumbnails/#sources\">här</a>. Om det fortfarande inte fungerar kan du överväga att <a href=”https://www.github.com/libretro/RetroArch/issues”>skicka in en felrapport</a>."
   )
#endif
MSG_HASH(
   MSG_IOS_TOUCH_MOUSE_ENABLED,
   "Tryckmus är aktiverad"
   )
MSG_HASH(
   MSG_IOS_TOUCH_MOUSE_DISABLED,
   "Tryckmus är inaktiverad"
   )
MSG_HASH(
   MSG_SDL2_MIC_NEEDS_SDL2_AUDIO,
   "sdl2-mikrofonen kräver sdl2-ljuddrivrutin"
   )
MSG_HASH(
   MSG_ACCESSIBILITY_STARTUP,
   "RetroArchs hjälpmedelsfunktioner på. Huvudmeny Läs in kärna."
   )
MSG_HASH(
   MSG_AI_SERVICE_STOPPED,
   "stoppad."
   )
#ifdef HAVE_GAME_AI
MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_AI_MENU_OPTION,
   "Åsidosätt AI-spelare"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_CORE_GAME_AI_OPTIONS,
   "Spel-AI"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_AI_OVERRIDE_P1,
   "Åsidosätt p1"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_AI_OVERRIDE_P1,
   "Åsidosätt spelare 01"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_AI_OVERRIDE_P2,
   "Åsidosätt p2"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_AI_OVERRIDE_P2,
   "Åsidosätt spelare 02"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_GAME_AI_SHOW_DEBUG,
   "Visa felsökning"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_GAME_AI_SHOW_DEBUG,
   "Visa felsökning"
   )

MSG_HASH(
   MENU_ENUM_LABEL_VALUE_QUICK_MENU_SHOW_GAME_AI,
   "Visa 'Spel-AI'"
   )
MSG_HASH(
   MENU_ENUM_SUBLABEL_QUICK_MENU_SHOW_GAME_AI,
   "Visa alternativet 'Spel-AI'."
   )
#endif
