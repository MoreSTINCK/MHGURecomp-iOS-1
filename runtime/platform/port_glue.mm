#import <UIKit/UIKit.h>
#include "port_glue.h"
#include "../config/config_ios.h"
#include "../touch/touch_controls_ios.h"
#include "../hud/hud_remap_ios.h"
#include "../forge/forge_plugin_ios.h"
#import "../../ios/Sources/NxLauncherViewController.h"
#import "../../ios/Sources/NxInGameOverlayViewController.h"

static bool s_port_attached = false;
static NxInGameOverlayViewController* s_overlay_vc = nil;
static UIWindow* s_host_window = nil;
static CFTimeInterval s_last_tick_time = 0.0;

extern "C" void mhgu_ios_trigger_haptic(float intensity) {
    if (!g_port_config.touch_haptics) return;
    dispatch_async(dispatch_get_main_queue(), ^{
        UIImpactFeedbackStyle style = UIImpactFeedbackStyleLight;
        if (intensity >= 0.75f) style = UIImpactFeedbackStyleHeavy;
        else if (intensity >= 0.45f) style = UIImpactFeedbackStyleMedium;
        UIImpactFeedbackGenerator* gen = [[UIImpactFeedbackGenerator alloc] initWithStyle:style];
        [gen prepare];
        [gen impactOccurred];
    });
}

static UIWindow* find_active_ios_window(void) {
    for (UIScene* scene in [UIApplication sharedApplication].connectedScenes) {
        if ([scene isKindOfClass:[UIWindowScene class]]) {
            UIWindowScene* ws = (UIWindowScene*)scene;
            for (UIWindow* w in ws.windows) {
                if (w.isKeyWindow) return w;
            }
            if (ws.windows.count > 0) return ws.windows.firstObject;
        }
    }
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
    UIWindow* kw = [UIApplication sharedApplication].keyWindow;
    if (kw) return kw;
    NSArray<UIWindow*>* wins = [UIApplication sharedApplication].windows;
    if (wins.count > 0) return wins.firstObject;
#pragma clang diagnostic pop
    return nil;
}

extern "C" void mhgu_port_open_overlay_settings(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        if (s_overlay_vc) {
            [s_overlay_vc togglePanelVisibility:YES];
        }
    });
}

static void attach_overlay_to_window(UIWindow* win) {
    if (!win || s_overlay_vc != nil) return;
    s_host_window = win;

    NSString* docs = [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    const char* docs_c = docs ? [docs UTF8String] : nullptr;

    port_config_load(nullptr);
    touch_ios_init(docs_c);
    hud_ios_init(docs_c);
    port_forge_init(docs_c);

    s_overlay_vc = [[NxInGameOverlayViewController alloc] initWithDocumentsPath:docs];
    s_overlay_vc.view.frame = win.bounds;
    s_overlay_vc.view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [win addSubview:s_overlay_vc.view];
}

extern "C" void mhgu_port_attach(void* sdl_window) {
    (void)sdl_window;
    if (s_port_attached) return;
    s_port_attached = true;

    dispatch_async(dispatch_get_main_queue(), ^{
        UIWindow* win = find_active_ios_window();
        if (win) {
            attach_overlay_to_window(win);
        }
    });
}

extern "C" void mhgu_port_tick(void) {
    CFTimeInterval now = CFAbsoluteTimeGetCurrent();
    float dt = (s_last_tick_time > 0.0) ? (float)(now - s_last_tick_time) : (1.0f / 60.0f);
    s_last_tick_time = now;
    if (dt <= 0.0f || dt > 0.25f) dt = 1.0f / 60.0f;

    if (!s_overlay_vc) {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (!s_overlay_vc) {
                UIWindow* win = find_active_ios_window();
                if (win) attach_overlay_to_window(win);
            }
        });
    }

    float sw = 1280.0f, sh = 720.0f;
    if (s_host_window) {
        CGSize sz = s_host_window.bounds.size;
        if (sz.width > 1.0 && sz.height > 1.0) {
            sw = (float)sz.width;
            sh = (float)sz.height;
        }
    }

    touch_ios_update_frame(sw, sh, dt);
    // 不调用 touch_ios_render_imgui：它走宿主的 cimgui 前景绘制列表，而这一步并不在
    // ImGui 的 NewFrame/Render 之间，帧外调用会踩空/崩溃；虚拟按键由浮层的
    // MhguTouchOverlayView.drawRect（CoreGraphics）绘制。
    if (s_overlay_vc) {
        [s_overlay_vc tickFrameWithDelta:dt];
    }
}
