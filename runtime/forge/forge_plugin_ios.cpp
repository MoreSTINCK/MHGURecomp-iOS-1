// ============================================================================
// MHGURecomp-iOS — Forge Plugin & Built-in Cheats Manager Implementation
// Zero symbol collision with upstream `forge_imgui_*`
// ============================================================================

#include "forge_plugin_ios.h"
#include "../config/config_ios.h"
#include <cstdio>
#include <cstring>
#include <dirent.h>
#include <dlfcn.h>
#include <string>

#define MAX_FORGE_PLUGINS 32
static MhguForgePluginEntry s_plugins[MAX_FORGE_PLUGINS];
static int                  s_plugin_count = 0;

void port_forge_init(const char* docs_dir) {
    s_plugin_count = 0;
    if (!docs_dir || !docs_dir[0]) return;

    std::string forge_dir = std::string(docs_dir) + "/forge";
    DIR* d = opendir(forge_dir.c_str());
    if (!d) return;

    struct dirent* ent = nullptr;
    while ((ent = readdir(d)) != nullptr && s_plugin_count < MAX_FORGE_PLUGINS) {
        std::string name(ent->d_name);
        if (name.size() > 6 && (name.substr(name.size() - 6) == ".dylib" || name.substr(name.size() - 3) == ".so")) {
            MhguForgePluginEntry& p = s_plugins[s_plugin_count++];
            std::memset(&p, 0, sizeof(p));
            std::snprintf(p.name, sizeof(p.name), "%s", name.c_str());
            std::snprintf(p.path, sizeof(p.path), "%s/%s", forge_dir.c_str(), name.c_str());
            p.enabled = true;
            p.loaded  = false;
        }
    }
    closedir(d);
}

void port_forge_run_frame(void* /*guest_base*/) {
    // Host runtime/forge.c executes loaded plugins when present; port_forge_run_frame
    // provides plugin enumeration & state management for the UI.
}

void port_forge_shutdown(void) {
    s_plugin_count = 0;
}

int port_forge_get_plugin_count(void) {
    return s_plugin_count;
}

const MhguForgePluginEntry* port_forge_get_plugin(int idx) {
    if (idx < 0 || idx >= s_plugin_count) return nullptr;
    return &s_plugins[idx];
}

void port_forge_set_plugin_enabled(int idx, bool enabled) {
    if (idx >= 0 && idx < s_plugin_count) {
        s_plugins[idx].enabled = enabled;
    }
}
