#pragma once
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

// ============================================================================
// Port Config (136 settings from khorne-hub/gu-native g_settings @ 0x00a65ce0)
// Symbol-isolated with `port_` / `g_port_config` so it NEVER collides with
// the host WiseManChris/MHGURecomp-iOS `runtime/config.h` (`g_config`).
// ============================================================================

typedef struct MhguPortConfig {
    // --- Restart-Required Settings (f8 == 1, 24 items, shown in nxnative Launcher) ---
    int32_t mode;                  // 0=Windowed, 1=Borderless, 2=Fullscreen
    int32_t resolution;            // 0=720p, 1=1080p, 2=1440p, 3=4K
    int32_t render_resolution;     // 0=720p, 1=1080p, 2=1440p, 3=4K, 4=Custom
    float   render_scale;          // 0.25 - 4.00 (1.00 default)
    int32_t aspect_ratio;          // 0=16:9, 1=21:9, 2=32:9, 3=Auto(Device)
    int32_t ui_anchor;             // 0=16:9 Centered, 1=Screen Edges
    int32_t msaa;                  // 0=Off, 2=2x, 4=4x
    bool    stretch;               // Stretch to fill viewport
    bool    UltrawideUI;           // Ultrawide 2D HUD anchor fix
    bool    LowEndMode;            // Low-end device optimization
    int32_t FsrMode;               // 0=Off, 1=FSR1, 2=FSR3.1 Quality, 3=FSR3.1 Balanced, 4=FSR3.1 Perf
    float   FsrSharpness;          // 0.0 - 1.0 (0.5 default)
    bool    FrameGen;              // FSR 3.1 Frame Generation
    bool    BonusContent;          // Unlock all DLC bonus content
    bool    VillageQuestsInHub;    // Show Village quests in Hub
    int32_t HubHP;                 // 0=Default(4P), 1=1P, 2=2P, 3=3P, 4=Dynamic
    bool    SyncSmallMonsters;     // Synchronize small monsters in multiplayer
    float   hp_1p;                 // 1Player HP multiplier
    float   hp_2p;                 // 2Players HP multiplier
    float   hp_3p;                 // 3Players HP multiplier
    float   hp_4p;                 // 4Players HP multiplier
    float   hp_quest;              // Per-quest HP multiplier
    int32_t port;                  // Multiplayer UDP/TCP port (default 27888)
    char    join[64];              // Room IP / Join code

    // --- Real-Time Hot-Reload Settings (f8 == 0, 112 items, In-Game Liquid Glass Overlay) ---
    int32_t fov;                   // Field of View (50 - 120, default 70)
    bool    fxaa;                  // Fast Approximate Anti-Aliasing
    bool    vsync;                 // Vertical Sync
    int32_t fps;                   // Target FPS (30, 60, 120, 0=Unlimited)
    int32_t face_buttons;          // 0=Nintendo(B/A/Y/X), 1=Xbox(A/B/X/Y), 2=PlayStation
    bool    background_input;      // Allow controller input in background
    bool    mute_in_background;    // Mute audio when backgrounded
    int32_t combo_window;          // Combo input window in ms (0 - 200, default 33)
    float   mouse_sensitivity;     // Camera sensitivity (0.1 - 5.0, default 1.0)

    // --- Native APK Touch Controls (khorne-hub/gu-native runtime/touch.cpp) ---
    bool    touch_controls;        // Master touch virtual controls toggle (default true on iOS)
    int32_t touch_mode;            // 0=Show Touch, 1=Auto Hide on Gamepad, 2=Hide Touch
    float   touch_opacity;         // 0.05 - 1.00 (default 0.65)
    float   touch_scale;           // 0.50 - 2.00 (default 1.00)
    float   touch_cam_sens;        // 0.10 - 5.00 (default 1.20)
    int32_t touch_attack_style;    // 0=Oblique Pill(胶囊双键), 1=Separate(独立X/A), 2=Corner Arc(角落弧形带)
    bool    touch_fixed_stick;     // Fixed virtual joystick center
    bool    touch_sheathe_run;     // Auto R-sprint when dragging stick past 0.85 while sheathed
    bool    touch_lock_on;         // Continuous monster lock-on toggle (ZL)
    bool    touch_aim_body;        // Ranged lock-on aims at monster torso
    bool    touch_ranged_swap;     // Auto swap to ranged virtual buttons when using LBG/HBG/Bow
    bool    touch_itembar_swipe;   // Swipe horizontal item bar to cycle items & tap to use
    bool    touch_dpad_menu;       // Show compact menupad in menus
    bool    touch_haptics;         // CoreHaptics / UIImpactFeedbackGenerator tactile feedback
    int32_t touch_combo[6];        // Combo1..6 action indices (0..7)
    int32_t touch_gesture[4];      // 2-finger / 3-finger gesture bindings

    // --- Native APK 8-Piece HUD Remap & Editor (runtime/hud/hud_remap_ios.cpp) ---
    bool    hud_custom_enable;     // Enable 8-piece HUD custom layout & scaling
    bool    hud_touch_auto_shift;  // Apply APK default touch HUD avoidance shifts

    // --- QoL & Cheats / Forge Plugins ---
    int32_t fast_consume_mode;     // 0=Off, 1=Speed Eating+2 (1.7x), 2=Instant Consume (2.5x)
    bool    show_fps_overlay;      // Show real-time FPS / frame time pill
    bool    show_MonsterHP;        // Show monster HP overlay (Forge plugin hook)
} MhguPortConfig;

extern MhguPortConfig g_port_config;

void port_config_defaults(void);
bool port_config_load(const char* path);
bool port_config_save(const char* path);
void port_config_sync_to_host_ini(const char* host_ini_path);
const char* port_config_default_path(void);
const char* port_config_host_ini_path(void);

#ifdef __cplusplus
}
#endif
