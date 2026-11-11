# ============================================================================
# MHGURecomp-iOS Port Makefile Fragment (Makefile.port.mk)
# Automatically compiles and links the gu-native APK touch controls, HLE hooks
# (mousecam / itembar / weapon), 8-piece HUD remap editor, and nxnative
# iOS 26 Liquid Glass UI into WiseManChris/MHGURecomp-iOS.
# ============================================================================

.DEFAULT_GOAL := all

PORT_CXX_SRCS := \
	runtime/config/config_ios.cpp \
	runtime/touch/touch_controls_ios.cpp \
	runtime/hud/hud_remap_ios.cpp \
	runtime/forge/forge_plugin_ios.cpp

PORT_OBJCXX_SRCS := \
	runtime/platform/port_glue.mm \
	ios/Sources/NxLauncherViewController.mm \
	ios/Sources/NxInGameOverlayViewController.mm

PORT_OBJS := \
	$(PORT_CXX_SRCS:.cpp=.o) \
	$(PORT_OBJCXX_SRCS:.mm=.o)

# Derive self-contained C++17 / Objective-C++ ARC flags from host $(CFLAGS)
# (Host Makefile leaves $(CXXFLAGS) empty, so we never rely on $(CXXFLAGS))
PORT_BASE_FLAGS  := $(filter-out -std=c11 -std=gnu11 -std=c99 -std=gnu99,$(CFLAGS))
PORT_CXXFLAGS    := $(PORT_BASE_FLAGS) -O2 -std=gnu++17 -Iruntime -Iios/Sources
PORT_OBJCXXFLAGS := $(PORT_CXXFLAGS) -fobjc-arc

# Automatically append PORT_OBJS and required iOS frameworks to host targets
RT_OBJ  += $(PORT_OBJS)
OBJ     += $(PORT_OBJS)
LDFLAGS += -framework UIKit -framework Foundation -framework QuartzCore \
           -framework CoreGraphics -framework CoreHaptics \
           -framework UniformTypeIdentifiers -lc++

ifdef EXE
$(EXE): $(PORT_OBJS)
endif

runtime/config/config_ios.o: runtime/config/config_ios.cpp runtime/config/config_ios.h
	$(CXX) $(PORT_CXXFLAGS) -c $< -o $@

runtime/touch/touch_controls_ios.o: runtime/touch/touch_controls_ios.cpp runtime/touch/touch_controls_ios.h runtime/config/config_ios.h
	$(CXX) $(PORT_CXXFLAGS) -c $< -o $@

runtime/hud/hud_remap_ios.o: runtime/hud/hud_remap_ios.cpp runtime/hud/hud_remap_ios.h runtime/config/config_ios.h
	$(CXX) $(PORT_CXXFLAGS) -c $< -o $@

runtime/forge/forge_plugin_ios.o: runtime/forge/forge_plugin_ios.cpp runtime/forge/forge_plugin_ios.h runtime/config/config_ios.h
	$(CXX) $(PORT_CXXFLAGS) -c $< -o $@

runtime/platform/port_glue.o: runtime/platform/port_glue.mm runtime/platform/port_glue.h
	$(CC) $(PORT_OBJCXXFLAGS) -c $< -o $@

ios/Sources/NxLauncherViewController.o: ios/Sources/NxLauncherViewController.mm ios/Sources/NxLauncherViewController.h
	$(CC) $(PORT_OBJCXXFLAGS) -c $< -o $@

ios/Sources/NxInGameOverlayViewController.o: ios/Sources/NxInGameOverlayViewController.mm ios/Sources/NxInGameOverlayViewController.h
	$(CC) $(PORT_OBJCXXFLAGS) -c $< -o $@
