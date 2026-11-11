#include "config_ios.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <sys/stat.h>

#if defined(__APPLE__)
#include <TargetConditionals.h>
#endif

MhguPortConfig g_port_config;

static std::string s_port_ini_path;
static std::string s_host_ini_path;

static void ensure_paths_initialized(void) {
    if (!s_port_ini_path.empty() && !s_host_ini_path.empty()) return;
    const char* home = std::getenv("HOME");
    std::string docs = home ? (std::string(home) + "/Documents") : ".";
    s_port_ini_path = docs + "/mhgurecomp_port.ini";
    s_host_ini_path = docs + "/mhgurecomp.ini";
}

const char* port_config_default_path(void) {
    ensure_paths_initialized();
    return s_port_ini_path.c_str();
}

const char* port_config_host_ini_path(void) {
    ensure_paths_initialized();
    return s_host_ini_path.c_str();
}

void port_config_defaults(void) {
    std::memset(&g_port_config, 0, sizeof(g_port_config));
    g_port_config.mode = 2;                  // Fullscreen
    g_port_config.resolution = 1;            // 1080p
    g_port_config.render_resolution = 1;     // 1080p
    g_port_config.render_scale = 1.0f;
    g_port_config.aspect_ratio = 3;          // Auto device aspect
    g_port_config.ui_anchor = 0;             // 16:9 centered
    g_port_config.msaa = 0;
    g_port_config.stretch = false;
    g_port_config.UltrawideUI = true;
    g_port_config.LowEndMode = false;
    g_port_config.FsrMode = 0;
    g_port_config.FsrSharpness = 0.5f;
    g_port_config.FrameGen = false;
    g_port_config.BonusContent = true;
    g_port_config.VillageQuestsInHub = false;
    g_port_config.HubHP = 0;
    g_port_config.SyncSmallMonsters = true;
    g_port_config.hp_1p = 1.0f;
    g_port_config.hp_2p = 1.0f;
    g_port_config.hp_3p = 1.0f;
    g_port_config.hp_4p = 1.0f;
    g_port_config.hp_quest = 1.0f;
    g_port_config.port = 27888;
    std::snprintf(g_port_config.join, sizeof(g_port_config.join), "127.0.0.1");

    g_port_config.fov = 70;
    g_port_config.fxaa = true;
    g_port_config.vsync = true;
    g_port_config.fps = 60;
    g_port_config.face_buttons = 0;
    g_port_config.background_input = true;
    g_port_config.mute_in_background = true;
    g_port_config.combo_window = 33;
    g_port_config.mouse_sensitivity = 1.0f;

    g_port_config.touch_controls = true;
    g_port_config.touch_mode = 0;            // Show touch controls by default
    g_port_config.touch_opacity = 0.65f;
    g_port_config.touch_scale = 1.00f;
    g_port_config.touch_cam_sens = 1.20f;
    g_port_config.touch_attack_style = 0;    // APK Oblique Pill (X / A / X+A)
    g_port_config.touch_fixed_stick = false;
    g_port_config.touch_sheathe_run = true;
    g_port_config.touch_lock_on = true;
    g_port_config.touch_aim_body = false;
    g_port_config.touch_ranged_swap = true;
    g_port_config.touch_itembar_swipe = true;
    g_port_config.touch_dpad_menu = true;
    g_port_config.touch_haptics = true;

    // APK default combo bindings: 0=X+A, 1=R+X+A, 2=Y+B, 3=ZL, 4=R+X, 5=R+A
    g_port_config.touch_combo[0] = 0;
    g_port_config.touch_combo[1] = 1;
    g_port_config.touch_combo[2] = 2;
    g_port_config.touch_combo[3] = 3;
    g_port_config.touch_combo[4] = 4;
    g_port_config.touch_combo[5] = 5;

    g_port_config.hud_custom_enable = true;
    g_port_config.hud_touch_auto_shift = true;
    g_port_config.fast_consume_mode = 0;
    g_port_config.show_fps_overlay = false;
    g_port_config.show_MonsterHP = false;
}

static std::string trim_copy(const std::string& s) {
    size_t a = 0;
    while (a < s.size() && (s[a] == ' ' || s[a] == '\t' || s[a] == '\r' || s[a] == '\n')) a++;
    size_t b = s.size();
    while (b > a && (s[b - 1] == ' ' || s[b - 1] == '\t' || s[b - 1] == '\r' || s[b - 1] == '\n')) b--;
    return s.substr(a, b - a);
}

static bool parse_bool_val(const std::string& v) {
    return (v == "1" || v == "true" || v == "True" || v == "TRUE" || v == "yes" || v == "on");
}

static void apply_kv(const std::string& section, const std::string& k, const std::string& v) {
    if (section == "MonsterHP") {
        if (k == "1Player")  g_port_config.hp_1p = std::strtof(v.c_str(), nullptr);
        else if (k == "2Players") g_port_config.hp_2p = std::strtof(v.c_str(), nullptr);
        else if (k == "3Players") g_port_config.hp_3p = std::strtof(v.c_str(), nullptr);
        else if (k == "4Players") g_port_config.hp_4p = std::strtof(v.c_str(), nullptr);
        else if (k == "quest")    g_port_config.hp_quest = std::strtof(v.c_str(), nullptr);
        return;
    }

    if (k == "Mode") g_port_config.mode = std::atoi(v.c_str());
    else if (k == "Resolution") g_port_config.resolution = std::atoi(v.c_str());
    else if (k == "RenderResolution") g_port_config.render_resolution = std::atoi(v.c_str());
    else if (k == "RenderScale") g_port_config.render_scale = std::strtof(v.c_str(), nullptr);
    else if (k == "AspectRatio") g_port_config.aspect_ratio = std::atoi(v.c_str());
    else if (k == "FOV") g_port_config.fov = std::atoi(v.c_str());
    else if (k == "UIAnchor") g_port_config.ui_anchor = std::atoi(v.c_str());
    else if (k == "MSAA") g_port_config.msaa = std::atoi(v.c_str());
    else if (k == "FXAA") g_port_config.fxaa = parse_bool_val(v);
    else if (k == "VSync") g_port_config.vsync = parse_bool_val(v);
    else if (k == "FPS" || k == "Framerate") g_port_config.fps = std::atoi(v.c_str());
    else if (k == "FaceButtons") g_port_config.face_buttons = std::atoi(v.c_str());
    else if (k == "BackgroundInput") g_port_config.background_input = parse_bool_val(v);
    else if (k == "MuteInBackground") g_port_config.mute_in_background = parse_bool_val(v);
    else if (k == "ComboInputWindow" || k == "ComboWindow") g_port_config.combo_window = std::atoi(v.c_str());
    else if (k == "Stretch") g_port_config.stretch = parse_bool_val(v);
    else if (k == "MouseSensitivity") g_port_config.mouse_sensitivity = std::strtof(v.c_str(), nullptr);
    else if (k == "Port") g_port_config.port = std::atoi(v.c_str());
    else if (k == "Join") std::snprintf(g_port_config.join, sizeof(g_port_config.join), "%s", v.c_str());
    else if (k == "BonusContent") g_port_config.BonusContent = parse_bool_val(v);
    else if (k == "VillageQuestsInHub") g_port_config.VillageQuestsInHub = parse_bool_val(v);
    else if (k == "HubHP") g_port_config.HubHP = std::atoi(v.c_str());
    else if (k == "SyncSmallMonsters") g_port_config.SyncSmallMonsters = parse_bool_val(v);
    else if (k == "UltrawideUI") g_port_config.UltrawideUI = parse_bool_val(v);
    else if (k == "LowEndMode") g_port_config.LowEndMode = parse_bool_val(v);
    else if (k == "FsrMode") g_port_config.FsrMode = std::atoi(v.c_str());
    else if (k == "FsrSharpness") g_port_config.FsrSharpness = std::strtof(v.c_str(), nullptr);
    else if (k == "FrameGen") g_port_config.FrameGen = parse_bool_val(v);
    else if (k == "TouchControls") g_port_config.touch_controls = parse_bool_val(v);
    else if (k == "TouchMode") g_port_config.touch_mode = std::atoi(v.c_str());
    else if (k == "TouchOpacity") g_port_config.touch_opacity = std::strtof(v.c_str(), nullptr);
    else if (k == "TouchScale") g_port_config.touch_scale = std::strtof(v.c_str(), nullptr);
    else if (k == "TouchCamSens") g_port_config.touch_cam_sens = std::strtof(v.c_str(), nullptr);
    else if (k == "TouchAttackStyle") g_port_config.touch_attack_style = std::atoi(v.c_str());
    else if (k == "TouchFixedStick") g_port_config.touch_fixed_stick = parse_bool_val(v);
    else if (k == "TouchSheatheRun") g_port_config.touch_sheathe_run = parse_bool_val(v);
    else if (k == "TouchLockOn") g_port_config.touch_lock_on = parse_bool_val(v);
    else if (k == "TouchAimBody") g_port_config.touch_aim_body = parse_bool_val(v);
    else if (k == "TouchRangedSwap") g_port_config.touch_ranged_swap = parse_bool_val(v);
    else if (k == "TouchItembarSwipe") g_port_config.touch_itembar_swipe = parse_bool_val(v);
    else if (k == "TouchDpadMenu") g_port_config.touch_dpad_menu = parse_bool_val(v);
    else if (k == "TouchHaptics") g_port_config.touch_haptics = parse_bool_val(v);
    else if (k == "TouchCombo1") g_port_config.touch_combo[0] = std::atoi(v.c_str());
    else if (k == "TouchCombo2") g_port_config.touch_combo[1] = std::atoi(v.c_str());
    else if (k == "TouchCombo3") g_port_config.touch_combo[2] = std::atoi(v.c_str());
    else if (k == "TouchCombo4") g_port_config.touch_combo[3] = std::atoi(v.c_str());
    else if (k == "TouchCombo5") g_port_config.touch_combo[4] = std::atoi(v.c_str());
    else if (k == "TouchCombo6") g_port_config.touch_combo[5] = std::atoi(v.c_str());
    else if (k == "HudCustomEnable") g_port_config.hud_custom_enable = parse_bool_val(v);
    else if (k == "HudTouchAutoShift") g_port_config.hud_touch_auto_shift = parse_bool_val(v);
    else if (k == "FastConsumeMode") g_port_config.fast_consume_mode = std::atoi(v.c_str());
    else if (k == "ShowFpsOverlay") g_port_config.show_fps_overlay = parse_bool_val(v);
    else if (k == "ShowMonsterHP") g_port_config.show_MonsterHP = parse_bool_val(v);
}

static bool parse_ini_file(const char* path) {
    FILE* fp = std::fopen(path, "r");
    if (!fp) return false;
    char line[512];
    std::string section;
    while (std::fgets(line, sizeof(line), fp)) {
        std::string s = trim_copy(line);
        if (s.empty() || s[0] == '#' || s[0] == ';') continue;
        if (s.front() == '[' && s.back() == ']') {
            section = trim_copy(s.substr(1, s.size() - 2));
            continue;
        }
        size_t eq = s.find('=');
        if (eq == std::string::npos) continue;
        std::string k = trim_copy(s.substr(0, eq));
        std::string v = trim_copy(s.substr(eq + 1));
        size_t comment = v.find_first_of("#;");
        if (comment != std::string::npos) v = trim_copy(v.substr(0, comment));
        apply_kv(section, k, v);
    }
    std::fclose(fp);
    return true;
}

bool port_config_load(const char* path) {
    port_config_defaults();
    ensure_paths_initialized();
    // First read host mhgurecomp.ini so host settings are inherited
    parse_ini_file(s_host_ini_path.c_str());
    // Then overlay port-specific mhgurecomp_port.ini
    const char* target = (path && path[0]) ? path : s_port_ini_path.c_str();
    bool ok = parse_ini_file(target);
    // Clean up any stale non-host keys that may have been written to mhgurecomp.ini previously
    port_config_sync_to_host_ini(s_host_ini_path.c_str());
    return ok;
}

// Strictly writes ONLY keys recognized by WiseManChris/MHGURecomp-iOS runtime/config.c
// (@ 0x6b982af in MHGURecomp.ipa) so the host parser never logs "unknown setting".
void port_config_sync_to_host_ini(const char* host_ini_path) {
    ensure_paths_initialized();
    const char* target = (host_ini_path && host_ini_path[0]) ? host_ini_path : s_host_ini_path.c_str();
    FILE* fp = std::fopen(target, "w");
    if (!fp) return;

    std::fprintf(fp, "# MHGURecomp Host Configuration (Synced by gu-native iOS Port)\n");
    std::fprintf(fp, "Mode = %d\n", g_port_config.mode);
    std::fprintf(fp, "Resolution = %d\n", g_port_config.resolution);
    std::fprintf(fp, "RenderResolution = %d\n", g_port_config.render_resolution);
    std::fprintf(fp, "AspectRatio = %d\n", g_port_config.aspect_ratio);
    std::fprintf(fp, "FOV = %d\n", g_port_config.fov);
    std::fprintf(fp, "UIAnchor = %d\n", g_port_config.ui_anchor);
    std::fprintf(fp, "MSAA = %d\n", g_port_config.msaa);
    std::fprintf(fp, "FXAA = %d\n", g_port_config.fxaa ? 1 : 0);
    std::fprintf(fp, "VSync = %d\n", g_port_config.vsync ? 1 : 0);
    std::fprintf(fp, "FPS = %d\n", g_port_config.fps);
    std::fprintf(fp, "FaceButtons = %d\n", g_port_config.face_buttons);
    std::fprintf(fp, "BackgroundInput = %d\n", g_port_config.background_input ? 1 : 0);
    std::fprintf(fp, "MuteInBackground = %d\n", g_port_config.mute_in_background ? 1 : 0);
    std::fprintf(fp, "ComboInputWindow = %d\n", g_port_config.combo_window);
    std::fprintf(fp, "Stretch = %d\n", g_port_config.stretch ? 1 : 0);
    std::fprintf(fp, "MouseSensitivity = %.2f\n", g_port_config.mouse_sensitivity);
    std::fprintf(fp, "Port = %d\n", g_port_config.port);
    std::fprintf(fp, "Join = %s\n", g_port_config.join);
    std::fprintf(fp, "BonusContent = %d\n", g_port_config.BonusContent ? 1 : 0);
    std::fprintf(fp, "VillageQuestsInHub = %d\n", g_port_config.VillageQuestsInHub ? 1 : 0);
    std::fprintf(fp, "HubHP = %d\n", g_port_config.HubHP);
    std::fprintf(fp, "SyncSmallMonsters = %d\n", g_port_config.SyncSmallMonsters ? 1 : 0);
    std::fprintf(fp, "\n[MonsterHP]\n");
    std::fprintf(fp, "1Player = %.2f\n", g_port_config.hp_1p);
    std::fprintf(fp, "2Players = %.2f\n", g_port_config.hp_2p);
    std::fprintf(fp, "3Players = %.2f\n", g_port_config.hp_3p);
    std::fprintf(fp, "4Players = %.2f\n", g_port_config.hp_4p);
    std::fprintf(fp, "quest = %.2f\n", g_port_config.hp_quest);
    std::fclose(fp);
}

bool port_config_save(const char* path) {
    ensure_paths_initialized();
    const char* target = (path && path[0]) ? path : s_port_ini_path.c_str();
    FILE* fp = std::fopen(target, "w");
    if (!fp) return false;

    std::fprintf(fp, "# MHGURecomp-iOS Port Configuration (mhgurecomp_port.ini)\n");
    std::fprintf(fp, "Mode = %d\n", g_port_config.mode);
    std::fprintf(fp, "Resolution = %d\n", g_port_config.resolution);
    std::fprintf(fp, "RenderResolution = %d\n", g_port_config.render_resolution);
    std::fprintf(fp, "RenderScale = %.2f\n", g_port_config.render_scale);
    std::fprintf(fp, "AspectRatio = %d\n", g_port_config.aspect_ratio);
    std::fprintf(fp, "FOV = %d\n", g_port_config.fov);
    std::fprintf(fp, "UIAnchor = %d\n", g_port_config.ui_anchor);
    std::fprintf(fp, "MSAA = %d\n", g_port_config.msaa);
    std::fprintf(fp, "FXAA = %d\n", g_port_config.fxaa ? 1 : 0);
    std::fprintf(fp, "VSync = %d\n", g_port_config.vsync ? 1 : 0);
    std::fprintf(fp, "FPS = %d\n", g_port_config.fps);
    std::fprintf(fp, "FaceButtons = %d\n", g_port_config.face_buttons);
    std::fprintf(fp, "BackgroundInput = %d\n", g_port_config.background_input ? 1 : 0);
    std::fprintf(fp, "MuteInBackground = %d\n", g_port_config.mute_in_background ? 1 : 0);
    std::fprintf(fp, "ComboInputWindow = %d\n", g_port_config.combo_window);
    std::fprintf(fp, "Stretch = %d\n", g_port_config.stretch ? 1 : 0);
    std::fprintf(fp, "MouseSensitivity = %.2f\n", g_port_config.mouse_sensitivity);
    std::fprintf(fp, "Port = %d\n", g_port_config.port);
    std::fprintf(fp, "Join = %s\n", g_port_config.join);
    std::fprintf(fp, "BonusContent = %d\n", g_port_config.BonusContent ? 1 : 0);
    std::fprintf(fp, "VillageQuestsInHub = %d\n", g_port_config.VillageQuestsInHub ? 1 : 0);
    std::fprintf(fp, "HubHP = %d\n", g_port_config.HubHP);
    std::fprintf(fp, "SyncSmallMonsters = %d\n", g_port_config.SyncSmallMonsters ? 1 : 0);
    std::fprintf(fp, "UltrawideUI = %d\n", g_port_config.UltrawideUI ? 1 : 0);
    std::fprintf(fp, "LowEndMode = %d\n", g_port_config.LowEndMode ? 1 : 0);
    std::fprintf(fp, "FsrMode = %d\n", g_port_config.FsrMode);
    std::fprintf(fp, "FsrSharpness = %.2f\n", g_port_config.FsrSharpness);
    std::fprintf(fp, "FrameGen = %d\n", g_port_config.FrameGen ? 1 : 0);

    std::fprintf(fp, "\n# APK Native Touch Controls\n");
    std::fprintf(fp, "TouchControls = %d\n", g_port_config.touch_controls ? 1 : 0);
    std::fprintf(fp, "TouchMode = %d\n", g_port_config.touch_mode);
    std::fprintf(fp, "TouchOpacity = %.2f\n", g_port_config.touch_opacity);
    std::fprintf(fp, "TouchScale = %.2f\n", g_port_config.touch_scale);
    std::fprintf(fp, "TouchCamSens = %.2f\n", g_port_config.touch_cam_sens);
    std::fprintf(fp, "TouchAttackStyle = %d\n", g_port_config.touch_attack_style);
    std::fprintf(fp, "TouchFixedStick = %d\n", g_port_config.touch_fixed_stick ? 1 : 0);
    std::fprintf(fp, "TouchSheatheRun = %d\n", g_port_config.touch_sheathe_run ? 1 : 0);
    std::fprintf(fp, "TouchLockOn = %d\n", g_port_config.touch_lock_on ? 1 : 0);
    std::fprintf(fp, "TouchAimBody = %d\n", g_port_config.touch_aim_body ? 1 : 0);
    std::fprintf(fp, "TouchRangedSwap = %d\n", g_port_config.touch_ranged_swap ? 1 : 0);
    std::fprintf(fp, "TouchItembarSwipe = %d\n", g_port_config.touch_itembar_swipe ? 1 : 0);
    std::fprintf(fp, "TouchDpadMenu = %d\n", g_port_config.touch_dpad_menu ? 1 : 0);
    std::fprintf(fp, "TouchHaptics = %d\n", g_port_config.touch_haptics ? 1 : 0);
    for (int i = 0; i < 6; ++i) {
        std::fprintf(fp, "TouchCombo%d = %d\n", i + 1, g_port_config.touch_combo[i]);
    }

    std::fprintf(fp, "\n# 8-Piece HUD Remap & QoL\n");
    std::fprintf(fp, "HudCustomEnable = %d\n", g_port_config.hud_custom_enable ? 1 : 0);
    std::fprintf(fp, "HudTouchAutoShift = %d\n", g_port_config.hud_touch_auto_shift ? 1 : 0);
    std::fprintf(fp, "FastConsumeMode = %d\n", g_port_config.fast_consume_mode);
    std::fprintf(fp, "ShowFpsOverlay = %d\n", g_port_config.show_fps_overlay ? 1 : 0);
    std::fprintf(fp, "ShowMonsterHP = %d\n", g_port_config.show_MonsterHP ? 1 : 0);

    std::fprintf(fp, "\n[MonsterHP]\n");
    std::fprintf(fp, "1Player = %.2f\n", g_port_config.hp_1p);
    std::fprintf(fp, "2Players = %.2f\n", g_port_config.hp_2p);
    std::fprintf(fp, "3Players = %.2f\n", g_port_config.hp_3p);
    std::fprintf(fp, "4Players = %.2f\n", g_port_config.hp_4p);
    std::fprintf(fp, "quest = %.2f\n", g_port_config.hp_quest);
    std::fclose(fp);

    // Keep host mhgurecomp.ini strictly sanitized with only host-supported keys
    port_config_sync_to_host_ini(s_host_ini_path.c_str());
    return true;
}
