#pragma once
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

// ============================================================================
// NxLauncherViewController — 1:1 seedds/nxnative Style Pre-Launch Controller
// - Uses iOS 26 UIGlassEffect (with UIVisualEffectView + specular rim fallback)
// - Strictly retains ONLY restart-required settings (f8 == 1 in g_settings)
// - Includes nxnative's "Paste cheat codes" (-> Documents/cheats/FB08F1D20FD1204F.txt)
//   and "Reset to tested defaults"
// ============================================================================
@interface NxLauncherViewController : UIViewController

@property (nonatomic, copy, nullable) void (^onLaunchGame)(void);

- (instancetype)initWithDocumentsPath:(NSString *)docsPath;

@end

// Shared Liquid Glass helper used by both Launcher & In-Game Overlay
UIView *NxCreateLiquidGlassCard(CGRect frame, CGFloat cornerRadius);

NS_ASSUME_NONNULL_END
