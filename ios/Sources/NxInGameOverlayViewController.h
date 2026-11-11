#pragma once
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// ============================================================================
// MhguTouchOverlayView — Fullscreen Pass-Through Vector Touch & HUD Editor Layer
// Implements 100% 1:1 decompiled APK (0x57a9dc..0x586000) vector buttons & 25 icons
// ============================================================================
@interface MhguTouchOverlayView : UIView
@property (nonatomic, copy, nullable) void (^onSettingsButtonTapped)(void);
@property (nonatomic, copy, nullable) void (^onExitEditModeTapped)(void);
@end

// ============================================================================
// NxInGameOverlayViewController — iOS 26 Liquid Glass In-Game Overlay
// Replaces the legacy iOS ImGui overlay and integrates all 112 hot-reload settings,
// 38 virtual touch controls, 8-piece HUD remap editor, and Forge plugins/cheats.
// ============================================================================
@interface NxInGameOverlayViewController : UIViewController

- (instancetype)initWithDocumentsPath:(NSString *)docsPath;
- (void)togglePanelVisibility:(BOOL)visible;
- (void)tickFrameWithDelta:(float)dt;

@end

NS_ASSUME_NONNULL_END
