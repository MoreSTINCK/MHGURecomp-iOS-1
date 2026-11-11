#import "NxInGameOverlayViewController.h"
#import "NxLauncherViewController.h"
#import <QuartzCore/QuartzCore.h>
#include "../../runtime/config/config_ios.h"
#include "../../runtime/touch/touch_controls_ios.h"
#include "../../runtime/hud/hud_remap_ios.h"
#include "../../runtime/forge/forge_plugin_ios.h"
#include <cmath>
#include <cstdio>
#include <cstring>

// ============================================================================
// 1. 100% 1:1 Decompiled APK Vector Icon & Control Drawing in CoreGraphics
//    Matches libmain.so @ 0x57a9dc..0x586000 (draw_sword_icon, draw_hunter_icon)
// ============================================================================
static void cg_draw_sword_icon(CGContextRef ctx, CGFloat cx, CGFloat cy, CGFloat s, UIColor *col, BOOL heavy) {
    CGContextSaveGState(ctx);
    CGContextTranslateCTM(ctx, cx, cy);
    CGContextRotateCTM(ctx, heavy ? -0.55 : -0.785398);
    [col setFill];
    [col setStroke];

    CGFloat bw = (heavy ? 0.22 : 0.13) * s;
    CGContextBeginPath(ctx);
    CGContextMoveToPoint(ctx, 0.0, -0.82 * s);
    CGContextAddLineToPoint(ctx,  bw, -0.48 * s);
    CGContextAddLineToPoint(ctx,  bw,  0.22 * s);
    CGContextAddLineToPoint(ctx, -bw,  0.22 * s);
    CGContextAddLineToPoint(ctx, -bw, -0.48 * s);
    CGContextClosePath(ctx);
    CGContextFillPath(ctx);

    CGContextSetLineWidth(ctx, MAX(1.5, 0.14 * s));
    CGContextBeginPath(ctx);
    CGContextMoveToPoint(ctx, -0.38 * s, 0.24 * s);
    CGContextAddLineToPoint(ctx,  0.38 * s, 0.24 * s);
    CGContextMoveToPoint(ctx,  0.0,      0.24 * s);
    CGContextAddLineToPoint(ctx,  0.0,      0.68 * s);
    CGContextStrokePath(ctx);

    CGContextFillEllipseInRect(ctx, CGRectMake(-0.11 * s, (0.74 - 0.11) * s, 0.22 * s, 0.22 * s));
    CGContextRestoreGState(ctx);
}

static void cg_draw_hunter_icon(CGContextRef ctx, int icon_kind, CGFloat cx, CGFloat cy, CGFloat s, UIColor *col) {
    CGContextSaveGState(ctx);
    [col setFill];
    [col setStroke];
    CGContextSetLineCap(ctx, kCGLineCapRound);
    CGContextSetLineJoin(ctx, kCGLineJoinRound);

    switch (icon_kind) {
        case 1: { // dodge (B) @ 0x5841f8: arc + arrowhead + 2 speed lines
            CGContextSetLineWidth(ctx, MAX(1.8, 0.16 * s));
            CGContextBeginPath(ctx);
            CGContextAddArc(ctx, cx, cy + 0.08 * s, 0.50 * s, 2.67035, 7.38274, 0);
            CGContextStrokePath(ctx);

            CGFloat ax = cx + std::cos(7.38274) * 0.50 * s;
            CGFloat ay = cy + 0.08 * s + std::sin(7.38274) * 0.50 * s;
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, ax + 0.24 * s, ay + 0.18 * s);
            CGContextAddLineToPoint(ctx, ax - 0.22 * s, ay + 0.10 * s);
            CGContextAddLineToPoint(ctx, ax + 0.08 * s, ay - 0.22 * s);
            CGContextClosePath(ctx);
            CGContextFillPath(ctx);

            CGContextSetLineWidth(ctx, MAX(1.5, 0.11 * s));
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx - 0.95 * s, cy - 0.25 * s);
            CGContextAddLineToPoint(ctx, cx - 0.62 * s, cy - 0.25 * s);
            CGContextMoveToPoint(ctx, cx - 0.95 * s, cy + 0.25 * s);
            CGContextAddLineToPoint(ctx, cx - 0.62 * s, cy + 0.25 * s);
            CGContextStrokePath(ctx);
            break;
        }
        case 2: { // guard (R) @ 0x5843c8: 5-point heater shield + cross
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx - 0.55 * s, cy - 0.62 * s);
            CGContextAddLineToPoint(ctx, cx + 0.55 * s, cy - 0.62 * s);
            CGContextAddLineToPoint(ctx, cx + 0.55 * s, cy + 0.05 * s);
            CGContextAddLineToPoint(ctx, cx,            cy + 0.70 * s);
            CGContextAddLineToPoint(ctx, cx - 0.55 * s, cy + 0.05 * s);
            CGContextClosePath(ctx);
            CGContextFillPath(ctx);

            [[UIColor colorWithWhite:0.08 alpha:0.85] setStroke];
            CGContextSetLineWidth(ctx, MAX(1.5, 0.10 * s));
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx, cy - 0.45 * s);
            CGContextAddLineToPoint(ctx, cx, cy + 0.45 * s);
            CGContextMoveToPoint(ctx, cx - 0.36 * s, cy - 0.12 * s);
            CGContextAddLineToPoint(ctx, cx + 0.36 * s, cy - 0.12 * s);
            CGContextStrokePath(ctx);
            break;
        }
        case 3: { // HunterArt (ZR) @ 0x583b34: 8-ray starburst
            for (int i = 0; i < 8; ++i) {
                CGFloat a = (CGFloat)i * 0.78539816;
                CGFloat al = a - 0.24, ar = a + 0.24;
                CGContextBeginPath(ctx);
                CGContextMoveToPoint(ctx, cx + std::cos(a) * 0.82 * s,  cy + std::sin(a) * 0.82 * s);
                CGContextAddLineToPoint(ctx, cx + std::cos(al) * 0.34 * s, cy + std::sin(al) * 0.34 * s);
                CGContextAddLineToPoint(ctx, cx + std::cos(ar) * 0.34 * s, cy + std::sin(ar) * 0.34 * s);
                CGContextClosePath(ctx);
                CGContextFillPath(ctx);
            }
            [[UIColor colorWithWhite:0.08 alpha:0.85] setFill];
            CGContextFillEllipseInRect(ctx, CGRectMake(cx - 0.20 * s, cy - 0.20 * s, 0.40 * s, 0.40 * s));
            break;
        }
        case 4: { // target (ZL) @ 0x584a5c: reticle + 4 ticks + 2 side triangles
            CGContextSetLineWidth(ctx, MAX(1.5, 0.11 * s));
            CGContextStrokeEllipseInRect(ctx, CGRectMake(cx - 0.38 * s, cy - 0.38 * s, 0.76 * s, 0.76 * s));
            CGContextFillEllipseInRect(ctx, CGRectMake(cx - 0.10 * s, cy - 0.10 * s, 0.20 * s, 0.20 * s));
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx - 0.52 * s, cy); CGContextAddLineToPoint(ctx, cx - 0.26 * s, cy);
            CGContextMoveToPoint(ctx, cx + 0.26 * s, cy); CGContextAddLineToPoint(ctx, cx + 0.52 * s, cy);
            CGContextMoveToPoint(ctx, cx, cy - 0.52 * s); CGContextAddLineToPoint(ctx, cx, cy - 0.26 * s);
            CGContextMoveToPoint(ctx, cx, cy + 0.26 * s); CGContextAddLineToPoint(ctx, cx, cy + 0.52 * s);
            CGContextStrokePath(ctx);
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx - 0.68 * s, cy);
            CGContextAddLineToPoint(ctx, cx - 0.95 * s, cy - 0.24 * s);
            CGContextAddLineToPoint(ctx, cx - 0.95 * s, cy + 0.24 * s);
            CGContextClosePath(ctx);
            CGContextMoveToPoint(ctx, cx + 0.68 * s, cy);
            CGContextAddLineToPoint(ctx, cx + 0.95 * s, cy - 0.24 * s);
            CGContextAddLineToPoint(ctx, cx + 0.95 * s, cy + 0.24 * s);
            CGContextClosePath(ctx);
            CGContextFillPath(ctx);
            break;
        }
        case 5: { // camera (L) @ 0x584ccc: camera body + viewfinder + lens
            UIBezierPath *body = [UIBezierPath bezierPathWithRoundedRect:CGRectMake(cx - 0.66 * s, cy - 0.36 * s, 1.32 * s, 0.80 * s) cornerRadius:0.12 * s];
            [body fill];
            UIBezierPath *top = [UIBezierPath bezierPathWithRoundedRect:CGRectMake(cx - 0.24 * s, cy - 0.54 * s, 0.48 * s, 0.24 * s) cornerRadius:0.06 * s];
            [top fill];
            [[UIColor colorWithWhite:0.08 alpha:0.88] setFill];
            CGContextFillEllipseInRect(ctx, CGRectMake(cx - 0.27 * s, cy + 0.04 * s - 0.27 * s, 0.54 * s, 0.54 * s));
            [col setFill];
            CGContextFillEllipseInRect(ctx, CGRectMake(cx - 0.15 * s, cy + 0.04 * s - 0.15 * s, 0.30 * s, 0.30 * s));
            break;
        }
        case 6: { // menu (+) @ 0x583e78: 3 horizontal hamburger bars
            for (int i = -1; i <= 1; ++i) {
                CGFloat by = cy + (CGFloat)i * 0.38 * s - 0.08 * s;
                UIBezierPath *bar = [UIBezierPath bezierPathWithRoundedRect:CGRectMake(cx - 0.55 * s, by, 1.10 * s, 0.16 * s) cornerRadius:0.05 * s];
                [bar fill];
            }
            break;
        }
        case 7: { // map (L3) @ 0x584500: tri-fold map polygon + 2 fold lines
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx - 0.70 * s, cy - 0.42 * s);
            CGContextAddLineToPoint(ctx, cx - 0.24 * s, cy - 0.60 * s);
            CGContextAddLineToPoint(ctx, cx + 0.24 * s, cy - 0.42 * s);
            CGContextAddLineToPoint(ctx, cx + 0.70 * s, cy - 0.60 * s);
            CGContextAddLineToPoint(ctx, cx + 0.70 * s, cy + 0.44 * s);
            CGContextAddLineToPoint(ctx, cx + 0.24 * s, cy + 0.62 * s);
            CGContextAddLineToPoint(ctx, cx - 0.24 * s, cy + 0.44 * s);
            CGContextAddLineToPoint(ctx, cx - 0.70 * s, cy + 0.62 * s);
            CGContextClosePath(ctx);
            CGContextFillPath(ctx);
            [[UIColor colorWithWhite:0.08 alpha:0.85] setStroke];
            CGContextSetLineWidth(ctx, MAX(1.5, 0.08 * s));
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx - 0.24 * s, cy - 0.60 * s); CGContextAddLineToPoint(ctx, cx - 0.24 * s, cy + 0.44 * s);
            CGContextMoveToPoint(ctx, cx + 0.24 * s, cy - 0.42 * s); CGContextAddLineToPoint(ctx, cx + 0.24 * s, cy + 0.62 * s);
            CGContextStrokePath(ctx);
            break;
        }
        case 8: { // settings gear @ 0x584670: 8 radial teeth + center bore
            CGContextFillEllipseInRect(ctx, CGRectMake(cx - 0.50 * s, cy - 0.50 * s, 1.00 * s, 1.00 * s));
            CGContextSetLineWidth(ctx, MAX(2.0, 0.24 * s));
            CGContextBeginPath(ctx);
            for (int i = 0; i < 8; ++i) {
                CGFloat a = (CGFloat)i * 0.78539816;
                CGContextMoveToPoint(ctx, cx + std::cos(a) * 0.40 * s, cy + std::sin(a) * 0.40 * s);
                CGContextAddLineToPoint(ctx, cx + std::cos(a) * 0.72 * s, cy + std::sin(a) * 0.72 * s);
            }
            CGContextStrokePath(ctx);
            [[UIColor colorWithWhite:0.08 alpha:0.88] setFill];
            CGContextFillEllipseInRect(ctx, CGRectMake(cx - 0.22 * s, cy - 0.22 * s, 0.44 * s, 0.44 * s));
            break;
        }
        case 9: { // sheathe (Y) @ 0x585044: scabbard + hilt + 2 downward arrows
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx - 0.22 * s, cy - 0.08 * s);
            CGContextAddLineToPoint(ctx, cx + 0.22 * s, cy - 0.08 * s);
            CGContextAddLineToPoint(ctx, cx + 0.16 * s, cy + 0.56 * s);
            CGContextAddLineToPoint(ctx, cx,            cy + 0.82 * s);
            CGContextAddLineToPoint(ctx, cx - 0.16 * s, cy + 0.56 * s);
            CGContextClosePath(ctx);
            CGContextFillPath(ctx);
            CGContextFillRect(ctx, CGRectMake(cx - 0.42 * s, cy - 0.26 * s, 0.84 * s, 0.12 * s));
            CGContextFillRect(ctx, CGRectMake(cx - 0.07 * s, cy - 0.62 * s, 0.14 * s, 0.36 * s));
            CGContextFillEllipseInRect(ctx, CGRectMake(cx - 0.10 * s, cy - 0.72 * s, 0.20 * s, 0.20 * s));
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx - 0.62 * s, cy - 0.44 * s);
            CGContextAddLineToPoint(ctx, cx - 0.78 * s, cy - 0.80 * s);
            CGContextAddLineToPoint(ctx, cx - 0.46 * s, cy - 0.80 * s);
            CGContextClosePath(ctx);
            CGContextMoveToPoint(ctx, cx + 0.62 * s, cy - 0.44 * s);
            CGContextAddLineToPoint(ctx, cx + 0.46 * s, cy - 0.80 * s);
            CGContextAddLineToPoint(ctx, cx + 0.78 * s, cy - 0.80 * s);
            CGContextClosePath(ctx);
            CGContextFillPath(ctx);
            break;
        }
        case 10: { // run @ 0x584e24: winged boot + 3 speed lines
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx - 0.12 * s, cy - 0.58 * s);
            CGContextAddLineToPoint(ctx, cx + 0.26 * s, cy - 0.58 * s);
            CGContextAddLineToPoint(ctx, cx + 0.22 * s, cy + 0.08 * s);
            CGContextAddLineToPoint(ctx, cx + 0.68 * s, cy + 0.22 * s);
            CGContextAddLineToPoint(ctx, cx + 0.68 * s, cy + 0.44 * s);
            CGContextAddLineToPoint(ctx, cx - 0.22 * s, cy + 0.44 * s);
            CGContextClosePath(ctx);
            CGContextFillPath(ctx);
            CGContextSetLineWidth(ctx, MAX(1.5, 0.11 * s));
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx - 0.88 * s, cy - 0.34 * s); CGContextAddLineToPoint(ctx, cx - 0.36 * s, cy - 0.34 * s);
            CGContextMoveToPoint(ctx, cx - 0.96 * s, cy - 0.04 * s); CGContextAddLineToPoint(ctx, cx - 0.40 * s, cy - 0.04 * s);
            CGContextMoveToPoint(ctx, cx - 0.84 * s, cy + 0.26 * s); CGContextAddLineToPoint(ctx, cx - 0.38 * s, cy + 0.26 * s);
            CGContextStrokePath(ctx);
            break;
        }
        case 14: { // minus (-) @ 0x583810
            UIBezierPath *bar = [UIBezierPath bezierPathWithRoundedRect:CGRectMake(cx - 0.58 * s, cy - 0.12 * s, 1.16 * s, 0.24 * s) cornerRadius:0.06 * s];
            [bar fill];
            break;
        }
        case 15:
            cg_draw_sword_icon(ctx, cx, cy, s, col, NO);
            break;
        case 16:
        case 17:
        case 19: {
            CGContextSetLineWidth(ctx, MAX(1.5, 0.11 * s));
            CGContextStrokeEllipseInRect(ctx, CGRectMake(cx - 0.52 * s, cy - 0.52 * s, 1.04 * s, 1.04 * s));
            CGContextFillEllipseInRect(ctx, CGRectMake(cx - 0.16 * s, cy - 0.16 * s, 0.32 * s, 0.32 * s));
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx - 0.78 * s, cy); CGContextAddLineToPoint(ctx, cx + 0.78 * s, cy);
            CGContextMoveToPoint(ctx, cx, cy - 0.78 * s); CGContextAddLineToPoint(ctx, cx, cy + 0.78 * s);
            CGContextStrokePath(ctx);
            break;
        }
        case 18: { // reload @ 0x5836a4
            CGContextSetLineWidth(ctx, MAX(1.5, 0.13 * s));
            CGContextBeginPath(ctx);
            CGContextAddArc(ctx, cx, cy, 0.52 * s, -2.2, 2.2, 0);
            CGContextStrokePath(ctx);
            CGContextFillRect(ctx, CGRectMake(cx - 0.12 * s, cy - 0.24 * s, 0.24 * s, 0.52 * s));
            break;
        }
        case 20:
        case 21: {
            UIBezierPath *phial = [UIBezierPath bezierPathWithRoundedRect:CGRectMake(cx - 0.24 * s, cy - 0.38 * s, 0.48 * s, 0.90 * s) cornerRadius:0.08 * s];
            [phial fill];
            CGContextFillRect(ctx, CGRectMake(cx - 0.14 * s, cy - 0.62 * s, 0.28 * s, 0.24 * s));
            break;
        }
        case 22:
            cg_draw_sword_icon(ctx, cx, cy, s, col, YES);
            break;
        case 24: {
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx, cy - 0.55 * s);
            CGContextAddLineToPoint(ctx, cx - 0.52 * s, cy + 0.35 * s);
            CGContextAddLineToPoint(ctx, cx + 0.52 * s, cy + 0.35 * s);
            CGContextClosePath(ctx);
            CGContextFillPath(ctx);
            break;
        }
        case 25: {
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, cx, cy + 0.55 * s);
            CGContextAddLineToPoint(ctx, cx - 0.52 * s, cy - 0.35 * s);
            CGContextAddLineToPoint(ctx, cx + 0.52 * s, cy - 0.35 * s);
            CGContextClosePath(ctx);
            CGContextFillPath(ctx);
            break;
        }
        default:
            cg_draw_sword_icon(ctx, cx, cy, s, col, NO);
            break;
    }
    CGContextRestoreGState(ctx);
}

// ============================================================================
// 2. MhguTouchOverlayView Implementation (Single Authoritative Class)
// ============================================================================
@implementation MhguTouchOverlayView

- (instancetype)initWithFrame:(CGRect)frame {
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [UIColor clearColor];
        self.Opaque = NO;
        self.multipleTouchEnabled = YES;
        self.userInteractionEnabled = YES;
    }
    return self;
}

- (void)drawRect:(CGRect)rect {
    (void)rect;
    CGContextRef ctx = UIGraphicsGetCurrentContext();
    if (!ctx) return;

    CGFloat W = self.bounds.size.width;
    CGFloat H = self.bounds.size.height;

    // 1. If 8-Piece HUD Edit Mode is active, draw interactive HUD piece boxes
    if (hud_ios_is_edit_mode()) {
        [[UIColor colorWithWhite:0.0 alpha:0.45] setFill];
        CGContextFillRect(ctx, self.bounds);

        int hudCount = 0;
        const MhguHudPieceDef *hDefs = hud_ios_get_defs(&hudCount);
        int selHud = hud_ios_get_selected();

        for (int i = 0; i < hudCount; ++i) {
            float bx = 0, by = 0, bw = 0, bh = 0;
            bool hidden = false;
            hud_ios_get_screen_box(i, (float)W, (float)H, &bx, &by, &bw, &bh, &hidden);
            CGRect r = CGRectMake(bx, by, bw, bh);
            BOOL isSel = (i == selHud);

            UIColor *fillCol = hidden
                ? [UIColor colorWithRed:0.45 green:0.15 blue:0.15 alpha:0.35]
                : (isSel ? [UIColor colorWithRed:0.92 green:0.74 blue:0.28 alpha:0.32]
                         : [UIColor colorWithRed:0.18 green:0.55 blue:0.85 alpha:0.24]);
            UIColor *strokeCol = isSel
                ? [UIColor colorWithRed:1.0 green:0.86 blue:0.38 alpha:0.98]
                : [UIColor colorWithWhite:0.90 alpha:0.65];

            UIBezierPath *bp = [UIBezierPath bezierPathWithRoundedRect:r cornerRadius:8.0];
            [fillCol setFill];
            [bp fill];
            bp.lineWidth = isSel ? 2.5 : 1.2;
            [strokeCol setStroke];
            [bp stroke];

            NSString *lbl = [NSString stringWithFormat:@"%@[%s]%@",
                             [NSString stringWithUTF8String:hDefs[i].name_zh],
                             hDefs[i].id,
                             hidden ? @" (已隐藏)" : @""];
            NSDictionary *attrs = @{
                NSFontAttributeName: [UIFont boldSystemFontOfSize:12.0],
                NSForegroundColorAttributeName: [UIColor whiteColor]
            };
            [lbl drawAtPoint:CGPointMake(bx + 8.0, by + 6.0) withAttributes:attrs];
        }

        NSString *banner = @"【8大HUD分件可视化编辑】单指拖拽平移 · 双指捏合缩放 · 点击右上角浮层保存退出";
        [banner drawAtPoint:CGPointMake(24.0, 18.0) withAttributes:@{
            NSFontAttributeName: [UIFont boldSystemFontOfSize:14.0],
            NSForegroundColorAttributeName: [UIColor colorWithRed:1.0 green:0.88 blue:0.42 alpha:1.0]
        }];
        return;
    }

    if (!g_port_config.touch_controls || g_port_config.touch_mode == 2) return;

    int count = 0;
    const MhguTouchControlDef *defs = touch_ios_get_defs(&count);
    MhguTouchControlState *states = touch_ios_get_states(nullptr);
    MhguTouchRuntimeState *rt = touch_ios_get_runtime();

    CGFloat alpha = MAX(0.05, MIN(1.0, g_port_config.touch_opacity));
    UIColor *colBg    = [UIColor colorWithRed:0.08 green:0.07 blue:0.06 alpha:alpha * 0.62];
    UIColor *colPress = [UIColor colorWithRed:0.32 green:0.25 blue:0.14 alpha:MIN(1.0, alpha + 0.25) * 0.84];
    UIColor *colRim   = [UIColor colorWithRed:0.85 green:0.75 blue:0.52 alpha:alpha * 0.78];
    UIColor *colRimHi = [UIColor colorWithRed:1.00 green:0.90 blue:0.55 alpha:0.96];
    UIColor *colIcon  = [UIColor colorWithRed:0.96 green:0.92 blue:0.82 alpha:alpha * 0.95];

    if (rt->edit_mode) {
        [[UIColor colorWithWhite:0.0 alpha:0.35] setFill];
        CGContextFillRect(ctx, self.bounds);
    }

    for (int i = 0; i < count; ++i) {
        if (!touch_ios_is_control_visible(i)) continue;
        float cx = 0, cy = 0, rad = 0;
        touch_ios_get_control_screen_pos(i, (float)W, (float)H, &cx, &cy, &rad);
        const MhguTouchControlDef &d = defs[i];
        const MhguTouchControlState &st = states[i];
        const char *id = d.id;

        BOOL active = st.pressed ||
                      (std::strcmp(id, "run") == 0 && rt->run_latched) ||
                      (std::strcmp(id, "target") == 0 && rt->lock_on_latched) ||
                      (rt->edit_mode && rt->selected_idx == i);
        UIColor *bg  = active ? colPress : colBg;
        UIColor *rim = active ? colRimHi : colRim;

        // 1. Virtual Stick (stick / rstick)
        if (std::strcmp(id, "stick") == 0 || std::strcmp(id, "rstick") == 0) {
            BOOL isL = (std::strcmp(id, "stick") == 0);
            CGFloat ox = (isL && rt->stick_active && !g_port_config.touch_fixed_stick) ? rt->stick_origin_x : cx;
            CGFloat oy = (isL && rt->stick_active && !g_port_config.touch_fixed_stick) ? rt->stick_origin_y : cy;

            CGRect ringRect = CGRectMake(ox - rad, oy - rad, rad * 2.0, rad * 2.0);
            [colBg setFill];
            CGContextFillEllipseInRect(ctx, ringRect);
            [rim setStroke];
            CGContextSetLineWidth(ctx, 2.0);
            CGContextStrokeEllipseInRect(ctx, ringRect);

            CGFloat kx = ox + (isL ? rt->stick_dx : rt->rstick_dx) * (rad * 0.58);
            CGFloat ky = oy + (isL ? rt->stick_dy : rt->rstick_dy) * (rad * 0.58);
            CGFloat kr = rad * 0.40;
            [colIcon setFill];
            CGContextFillEllipseInRect(ctx, CGRectMake(kx - kr, ky - kr, kr * 2.0, kr * 2.0));
            continue;
        }

        // 2. D-Pad
        if (std::strcmp(id, "dpad") == 0) {
            CGRect rRect = CGRectMake(cx - rad, cy - rad, rad * 2.0, rad * 2.0);
            [bg setFill];
            CGContextFillEllipseInRect(ctx, rRect);
            [rim setStroke];
            CGContextSetLineWidth(ctx, 2.0);
            CGContextStrokeEllipseInRect(ctx, rRect);

            CGFloat arm = rad * 0.68, w = rad * 0.24;
            [colIcon setFill];
            CGContextFillRect(ctx, CGRectMake(cx - w, cy - arm, w * 2.0, arm * 2.0));
            CGContextFillRect(ctx, CGRectMake(cx - arm, cy - w, arm * 2.0, w * 2.0));
            continue;
        }

        // 3. APK Oblique Pill (attack X/A/X+A & menupad A/B)
        if (std::strcmp(id, "attack") == 0 || std::strcmp(id, "menupad") == 0) {
            CGFloat ux = 0.650, uy = 0.760;
            CGFloat halfLen = rad * 0.62, capR = rad * 0.56;
            CGPoint p1 = CGPointMake(cx - ux * halfLen, cy - uy * halfLen);
            CGPoint p2 = CGPointMake(cx + ux * halfLen, cy + uy * halfLen);

            CGContextSaveGState(ctx);
            CGContextSetLineCap(ctx, kCGLineCapRound);
            CGContextSetLineWidth(ctx, capR * 2.0);
            [bg setStroke];
            CGContextBeginPath(ctx);
            CGContextMoveToPoint(ctx, p1.x, p1.y);
            CGContextAddLineToPoint(ctx, p2.x, p2.y);
            CGContextStrokePath(ctx);
            CGContextRestoreGState(ctx);

            [rim setStroke];
            CGContextSetLineWidth(ctx, 2.0);
            CGContextStrokeEllipseInRect(ctx, CGRectMake(p1.x - capR, p1.y - capR, capR * 2.0, capR * 2.0));
            CGContextStrokeEllipseInRect(ctx, CGRectMake(p2.x - capR, p2.y - capR, capR * 2.0, capR * 2.0));

            if (std::strcmp(id, "attack") == 0) {
                cg_draw_sword_icon(ctx, p1.x, p1.y, capR * 0.58, colIcon, NO);
                cg_draw_sword_icon(ctx, p2.x, p2.y, capR * 0.58, colIcon, YES);
            }
            continue;
        }

        // 4. APK 3-Band Corner Arc (corner)
        if (std::strcmp(id, "corner") == 0) {
            CGContextSaveGState(ctx);
            CGContextSetLineWidth(ctx, rad * 0.52);
            [bg setStroke];
            CGContextBeginPath(ctx);
            CGContextAddArc(ctx, cx, cy, rad * 0.84, -2.90, -0.24, 0);
            CGContextStrokePath(ctx);
            CGContextRestoreGState(ctx);
            cg_draw_sword_icon(ctx, cx - rad * 0.68, cy - rad * 0.35, rad * 0.28, colIcon, NO);
            cg_draw_sword_icon(ctx, cx + rad * 0.68, cy - rad * 0.35, rad * 0.28, colIcon, YES);
            continue;
        }

        // 5. APK Menu Rectangular Shoulder Buttons (ml, mr, mzl, mzr)
        if (std::strcmp(id, "ml") == 0 || std::strcmp(id, "mr") == 0 ||
            std::strcmp(id, "mzl") == 0 || std::strcmp(id, "mzr") == 0) {
            CGFloat rw = rad * 1.25, rh = rad * 0.68;
            UIBezierPath *bp = [UIBezierPath bezierPathWithRoundedRect:CGRectMake(cx - rw, cy - rh, rw * 2.0, rh * 2.0) cornerRadius:rh * 0.45];
            [bg setFill]; [bp fill];
            bp.lineWidth = 2.0;
            [rim setStroke]; [bp stroke];
            continue;
        }

        // 6. Standard Circular Button + Decompiled APK Vector Icon + Key Badge
        CGRect cRect = CGRectMake(cx - rad, cy - rad, rad * 2.0, rad * 2.0);
        [bg setFill];
        CGContextFillEllipseInRect(ctx, cRect);
        [rim setStroke];
        CGContextSetLineWidth(ctx, 2.0);
        CGContextStrokeEllipseInRect(ctx, cRect);

        if (d.icon_kind > 0) {
            cg_draw_hunter_icon(ctx, d.icon_kind, cx, cy, rad * 0.54, colIcon);
        }

        // Draw combo label or key badge
        const char *badge = d.label;
        if (std::strncmp(id, "combo", 5) == 0) {
            int slot = id[5] - '1';
            badge = touch_ios_get_combo_label(g_port_config.touch_combo[slot]);
        }
        if (badge && badge[0]) {
            NSString *bStr = [NSString stringWithUTF8String:badge];
            NSDictionary *bAttrs = @{
                NSFontAttributeName: [UIFont boldSystemFontOfSize:MAX(9.0, rad * 0.30)],
                NSForegroundColorAttributeName: colIcon
            };
            CGSize sz = [bStr sizeWithAttributes:bAttrs];
            [bStr drawAtPoint:CGPointMake(cx - sz.width * 0.5, cy + rad * 0.42 - sz.height * 0.5) withAttributes:bAttrs];
        }
    }
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    (void)event;
    CGFloat W = self.bounds.size.width, H = self.bounds.size.height;
    for (UITouch *t in touches) {
        CGPoint p = [t locationInView:self];
        if (hud_ios_is_edit_mode()) {
            hud_ios_editor_finger_down((intptr_t)(__bridge void *)t, (float)p.x, (float)p.y, (float)W, (float)H);
            continue;
        }
        // Check if tap hit the top-left settings gear button ("settings", index 13)
        float sx = 0, sy = 0, sr = 0;
        touch_ios_get_control_screen_pos(13, (float)W, (float)H, &sx, &sy, &sr);
        float dx = (float)p.x - sx, dy = (float)p.y - sy;
        if (!touch_ios_get_runtime()->edit_mode && (dx * dx + dy * dy <= sr * sr * 1.35f)) {
            if (self.onSettingsButtonTapped) self.onSettingsButtonTapped();
            continue;
        }
        touch_ios_finger_down((intptr_t)(__bridge void *)t, (float)p.x, (float)p.y, (float)W, (float)H);
    }
    [self setNeedsDisplay];
}

- (void)touchesMoved:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    (void)event;
    CGFloat W = self.bounds.size.width, H = self.bounds.size.height;
    for (UITouch *t in touches) {
        CGPoint p = [t locationInView:self];
        if (hud_ios_is_edit_mode()) {
            hud_ios_editor_finger_move((intptr_t)(__bridge void *)t, (float)p.x, (float)p.y, (float)W, (float)H);
        } else {
            touch_ios_finger_move((intptr_t)(__bridge void *)t, (float)p.x, (float)p.y, (float)W, (float)H);
        }
    }
    [self setNeedsDisplay];
}

- (void)touchesEnded:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    (void)event;
    CGFloat W = self.bounds.size.width, H = self.bounds.size.height;
    for (UITouch *t in touches) {
        CGPoint p = [t locationInView:self];
        if (hud_ios_is_edit_mode()) {
            hud_ios_editor_finger_up((intptr_t)(__bridge void *)t, (float)p.x, (float)p.y, (float)W, (float)H);
        } else {
            touch_ios_finger_up((intptr_t)(__bridge void *)t, (float)p.x, (float)p.y, (float)W, (float)H);
        }
    }
    [self setNeedsDisplay];
}

- (void)touchesCancelled:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event {
    [self touchesEnded:touches withEvent:event];
}

@end

// ============================================================================
// 3. NxInGameOverlayViewController Implementation
// ============================================================================
@interface NxInGameOverlayViewController ()
@property (nonatomic, copy) NSString *docsPath;
@property (nonatomic, strong) MhguTouchOverlayView *touchView;
@property (nonatomic, strong) UIView *glassCard;
@property (nonatomic, strong) UIScrollView *tabContentScroll;
@property (nonatomic, strong) UILabel *fpsPillLabel;
@property (nonatomic, strong) UIButton *exitEditBannerBtn;
@property (nonatomic, assign) NSInteger currentTab;
@property (nonatomic, assign) float smoothedFps;
@end

@implementation NxInGameOverlayViewController

- (instancetype)initWithDocumentsPath:(NSString *)docsPath {
    self = [super initWithNibName:nil bundle:nil];
    if (self) {
        _docsPath = [docsPath copy];
        _currentTab = 0;
        _smoothedFps = 60.0f;
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor clearColor];

    // 1. Fullscreen vector touch & HUD editor layer
    self.touchView = [[MhguTouchOverlayView alloc] initWithFrame:self.view.bounds];
    self.touchView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    __weak __typeof__(self) weakSelf = self;
    self.touchView.onSettingsButtonTapped = ^{
        __strong __typeof__(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;
        [strongSelf togglePanelVisibility:strongSelf.glassCard.isHidden];
    };
    [self.view addSubview:self.touchView];

    // 2. Top-right FPS Pill (Liquid Glass style)
    self.fpsPillLabel = [[UILabel alloc] initWithFrame:CGRectMake(self.view.bounds.size.width - 118, 12, 104, 26)];
    self.fpsPillLabel.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin;
    self.fpsPillLabel.backgroundColor = [UIColor colorWithWhite:0.06 alpha:0.68];
    self.fpsPillLabel.layer.cornerRadius = 13.0;
    self.fpsPillLabel.layer.masksToBounds = YES;
    self.fpsPillLabel.textAlignment = NSTextAlignmentCenter;
    self.fpsPillLabel.font = [UIFont monospacedDigitSystemFontOfSize:12.0 weight:UIFontWeightSemibold];
    self.fpsPillLabel.textColor = [UIColor colorWithRed:0.55 green:0.95 blue:0.65 alpha:1.0];
    self.fpsPillLabel.text = @"60.0 FPS";
    self.fpsPillLabel.hidden = !g_port_config.show_fps_overlay;
    [self.view addSubview:self.fpsPillLabel];

    // 3. Exit Edit Mode Floating Pill Button
    self.exitEditBannerBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    self.exitEditBannerBtn.frame = CGRectMake((self.view.bounds.size.width - 280) * 0.5, 16, 280, 38);
    self.exitEditBannerBtn.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin;
    self.exitEditBannerBtn.backgroundColor = [UIColor colorWithRed:0.86 green:0.64 blue:0.22 alpha:0.95];
    self.exitEditBannerBtn.layer.cornerRadius = 19.0;
    [self.exitEditBannerBtn setTitle:@"完成并保存布局 (退出编辑模式)" forState:UIControlStateNormal];
    [self.exitEditBannerBtn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    self.exitEditBannerBtn.titleLabel.font = [UIFont boldSystemFontOfSize:13.5];
    self.exitEditBannerBtn.hidden = YES;
    [self.exitEditBannerBtn addTarget:self action:@selector(handleExitEditMode) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:self.exitEditBannerBtn];

    // 4. Center iOS 26 Liquid Glass In-Game Overlay Panel
    [self buildLiquidGlassPanel];
    self.glassCard.hidden = YES;
}

- (void)buildLiquidGlassPanel {
    if (self.glassCard) [self.glassCard removeFromSuperview];

    CGFloat W = self.view.bounds.size.width;
    CGFloat H = self.view.bounds.size.height;
    CGFloat cardW = MIN(680.0, W - 48.0);
    CGFloat cardH = MIN(420.0, H - 36.0);

    self.glassCard = NxCreateLiquidGlassCard(CGRectMake((W - cardW) * 0.5, (H - cardH) * 0.5, cardW, cardH), 24.0);
    self.glassCard.autoresizingMask = UIViewAutoresizingFlexibleLeftMargin | UIViewAutoresizingFlexibleRightMargin |
                                     UIViewAutoresizingFlexibleTopMargin | UIViewAutoresizingFlexibleBottomMargin;
    [self.view addSubview:self.glassCard];

    UIView *content = [(UIVisualEffectView *)self.glassCard contentView];

    // Title & Close button
    UILabel *title = [[UILabel alloc] initWithFrame:CGRectMake(20, 14, cardW - 120, 24)];
    title.text = @"MHGURecomp · 液态玻璃实时控制台 (无需重启)";
    title.font = [UIFont boldSystemFontOfSize:16.5];
    title.textColor = [UIColor colorWithRed:0.98 green:0.92 blue:0.78 alpha:1.0];
    [content addSubview:title];

    UIButton *closeBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    closeBtn.frame = CGRectMake(cardW - 84, 12, 68, 28);
    closeBtn.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.14];
    closeBtn.layer.cornerRadius = 14.0;
    [closeBtn setTitle:@"关闭 ✕" forState:UIControlStateNormal];
    [closeBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    closeBtn.titleLabel.font = [UIFont boldSystemFontOfSize:13.0];
    [closeBtn addTarget:self action:@selector(handleClosePanel) forControlEvents:UIControlEventTouchUpInside];
    [content addSubview:closeBtn];

    // 5-Tab Segmented Pill Bar
    NSArray<NSString *> *tabs = @[@"触控与按键", @"HUD分件重排", @"画面与帧率", @"金手指与插件", @"启动器(需重启)"];
    UISegmentedControl *tabSeg = [[UISegmentedControl alloc] initWithItems:tabs];
    tabSeg.frame = CGRectMake(18, 46, cardW - 36, 32);
    tabSeg.selectedSegmentIndex = self.currentTab;
    __weak __typeof__(self) weakSelf = self;
    [tabSeg addAction:[UIAction actionWithHandler:^(__kindof UIAction * _Nonnull action) {
        __strong __typeof__(weakSelf) strongSelf = weakSelf;
        if (!strongSelf) return;
        UISegmentedControl *sc = (UISegmentedControl *)action.sender;
        strongSelf.currentTab = sc.selectedSegmentIndex;
        [strongSelf reloadActiveTabContent];
    }] forControlEvents:UIControlEventValueChanged];
    [content addSubview:tabSeg];

    self.tabContentScroll = [[UIScrollView alloc] initWithFrame:CGRectMake(18, 86, cardW - 36, cardH - 98)];
    [content addSubview:self.tabContentScroll];

    [self reloadActiveTabContent];
}

- (void)reloadActiveTabContent {
    for (UIView *sub in self.tabContentScroll.subviews) [sub removeFromSuperview];
    CGFloat w = self.tabContentScroll.bounds.size.width;
    CGFloat y = 4.0;
    __weak __typeof__(self) weakSelf = self;

    if (self.currentTab == 0) {
        // Tab 0: Native APK Touch Controls
        UIButton *editTouchBtn = [UIButton buttonWithType:UIButtonTypeSystem];
        editTouchBtn.frame = CGRectMake(0, y, w, 40);
        editTouchBtn.backgroundColor = [UIColor colorWithRed:0.85 green:0.65 blue:0.22 alpha:0.90];
        editTouchBtn.layer.cornerRadius = 10.0;
        [editTouchBtn setTitle:@"✦ 进入虚拟按键布局可视化编辑 (单指拖拽移动 / 双指捏合缩放)" forState:UIControlStateNormal];
        [editTouchBtn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        editTouchBtn.titleLabel.font = [UIFont boldSystemFontOfSize:13.5];
        [editTouchBtn addTarget:self action:@selector(handleStartTouchEdit) forControlEvents:UIControlEventTouchUpInside];
        [self.tabContentScroll addSubview:editTouchBtn];
        y += 48.0;

        y = [self addToggle:@"启用 APK 原生屏幕虚拟按键 (TouchControls)" val:g_port_config.touch_controls atY:y width:w cb:^(BOOL on) {
            __strong __typeof__(weakSelf) strongSelf = weakSelf;
            g_port_config.touch_controls = on;
            port_config_save(nullptr);
            if (strongSelf) [strongSelf.touchView setNeedsDisplay];
        }];

        y = [self addSegment:@"近战攻击键样式 (TouchAttackStyle)"
                       items:@[@"斜切胶囊 (X/A/X+A)", @"独立双键 (X 与 A)", @"角落弧形三段带"]
                         sel:g_port_config.touch_attack_style atY:y width:w cb:^(NSInteger idx) {
            __strong __typeof__(weakSelf) strongSelf = weakSelf;
            g_port_config.touch_attack_style = (int32_t)idx;
            port_config_save(nullptr);
            if (strongSelf) [strongSelf.touchView setNeedsDisplay];
        }];

        y = [self addSlider:@"虚拟按键透明度 (TouchOpacity)" val:g_port_config.touch_opacity min:0.10f max:1.00f atY:y width:w cb:^(float v) {
            __strong __typeof__(weakSelf) strongSelf = weakSelf;
            g_port_config.touch_opacity = v;
            port_config_save(nullptr);
            if (strongSelf) [strongSelf.touchView setNeedsDisplay];
        }];

        y = [self addSlider:@"虚拟按键全局缩放 (TouchScale)" val:g_port_config.touch_scale min:0.55f max:1.65f atY:y width:w cb:^(float v) {
            __strong __typeof__(weakSelf) strongSelf = weakSelf;
            g_port_config.touch_scale = v;
            port_config_save(nullptr);
            if (strongSelf) [strongSelf.touchView setNeedsDisplay];
        }];

        y = [self addSlider:@"划屏视角灵敏度 (TouchCamSens)" val:g_port_config.touch_cam_sens min:0.20f max:3.50f atY:y width:w cb:^(float v) {
            g_port_config.touch_cam_sens = v;
            port_config_save(nullptr);
        }];

        y = [self addToggle:@"固定左摇杆圆心位置 (TouchFixedStick)" val:g_port_config.touch_fixed_stick atY:y width:w cb:^(BOOL on) {
            g_port_config.touch_fixed_stick = on;
            port_config_save(nullptr);
        }];

        y = [self addToggle:@"收刀状态摇杆推到底自动冲刺 (TouchSheatheRun)" val:g_port_config.touch_sheathe_run atY:y width:w cb:^(BOOL on) {
            g_port_config.touch_sheathe_run = on;
            port_config_save(nullptr);
        }];

        y = [self addToggle:@"怪物持续锁定切换 (TouchLockOn)" val:g_port_config.touch_lock_on atY:y width:w cb:^(BOOL on) {
            g_port_config.touch_lock_on = on;
            port_config_save(nullptr);
        }];

        y = [self addToggle:@"装备轻重弩/弓时自动切换远程专属键位 (TouchRangedSwap)" val:g_port_config.touch_ranged_swap atY:y width:w cb:^(BOOL on) {
            __strong __typeof__(weakSelf) strongSelf = weakSelf;
            g_port_config.touch_ranged_swap = on;
            port_config_save(nullptr);
            if (strongSelf) [strongSelf.touchView setNeedsDisplay];
        }];

        y = [self addToggle:@"右下角道具栏横滑选道具·轻点使用 (TouchItembarSwipe)" val:g_port_config.touch_itembar_swipe atY:y width:w cb:^(BOOL on) {
            g_port_config.touch_itembar_swipe = on;
            port_config_save(nullptr);
        }];

        y = [self addToggle:@"按键触觉震动反馈 (CoreHaptics)" val:g_port_config.touch_haptics atY:y width:w cb:^(BOOL on) {
            g_port_config.touch_haptics = on;
            port_config_save(nullptr);
        }];

        NSArray<NSString *> *comboItems = @[@"X+A", @"R+X+A", @"Y+B", @"ZL", @"R+X", @"R+A", @"+", @"-"];
        for (int c = 0; c < 6; ++c) {
            NSString *cTitle = [NSString stringWithFormat:@"自定义组合键 C%d 绑定动作", c + 1];
            y = [self addSegment:cTitle items:comboItems sel:g_port_config.touch_combo[c] atY:y width:w cb:^(NSInteger idx) {
                __strong __typeof__(weakSelf) strongSelf = weakSelf;
                g_port_config.touch_combo[c] = (int32_t)idx;
                port_config_save(nullptr);
                if (strongSelf) [strongSelf.touchView setNeedsDisplay];
            }];
        }
    } else if (self.currentTab == 1) {
        // Tab 1: 8-Piece HUD Remap & Editor
        UIButton *editHudBtn = [UIButton buttonWithType:UIButtonTypeSystem];
        editHudBtn.frame = CGRectMake(0, y, w, 40);
        editHudBtn.backgroundColor = [UIColor colorWithRed:0.28 green:0.68 blue:0.92 alpha:0.90];
        editHudBtn.layer.cornerRadius = 10.0;
        [editHudBtn setTitle:@"✦ 进入 8 大 HUD 分件可视化编辑 (单指拖拽位置 / 双指捏合缩放)" forState:UIControlStateNormal];
        [editHudBtn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        editHudBtn.titleLabel.font = [UIFont boldSystemFontOfSize:13.5];
        [editHudBtn addTarget:self action:@selector(handleStartHudEdit) forControlEvents:UIControlEventTouchUpInside];
        [self.tabContentScroll addSubview:editHudBtn];
        y += 48.0;

        y = [self addToggle:@"启用 8 大 HUD 分件自定义重排与缩放" val:g_port_config.hud_custom_enable atY:y width:w cb:^(BOOL on) {
            g_port_config.hud_custom_enable = on;
            port_config_save(nullptr);
        }];

        y = [self addToggle:@"触控模式下应用 APK 默认 HUD 避让偏移" val:g_port_config.hud_touch_auto_shift atY:y width:w cb:^(BOOL on) {
            g_port_config.hud_touch_auto_shift = on;
            port_config_save(nullptr);
        }];

        int hudCount = 0;
        const MhguHudPieceDef *hDefs = hud_ios_get_defs(&hudCount);
        MhguHudPieceState *hStates = hud_ios_get_states(nullptr);
        for (int i = 0; i < hudCount; ++i) {
            NSString *hTitle = [NSString stringWithFormat:@"显示 HUD 分件：%s (%s)", hDefs[i].name_zh, hDefs[i].id];
            y = [self addToggle:hTitle val:!hStates[i].hidden atY:y width:w cb:^(BOOL on) {
                hStates[i].hidden = !on;
                hud_ios_save_layout(nullptr);
            }];
        }

        UIButton *resetHudBtn = [UIButton buttonWithType:UIButtonTypeSystem];
        resetHudBtn.frame = CGRectMake(0, y + 4, w, 36);
        resetHudBtn.backgroundColor = [UIColor colorWithRed:0.75 green:0.26 blue:0.24 alpha:0.35];
        resetHudBtn.layer.cornerRadius = 10.0;
        [resetHudBtn setTitle:@"重置全部 8 大 HUD 分件位置与缩放" forState:UIControlStateNormal];
        [resetHudBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
        [resetHudBtn addTarget:self action:@selector(handleResetHudLayout) forControlEvents:UIControlEventTouchUpInside];
        [self.tabContentScroll addSubview:resetHudBtn];
        y += 46.0;
    } else if (self.currentTab == 2) {
        // Tab 2: Graphics & Frame Rate (Real-time hot-reload)
        int fpsIdx = (g_port_config.fps == 30) ? 0 : (g_port_config.fps == 60 ? 1 : (g_port_config.fps == 120 ? 2 : 3));
        y = [self addSegment:@"目标帧率上限 (FPS)" items:@[@"30 帧", @"60 帧", @"120 帧", @"无限制"] sel:fpsIdx atY:y width:w cb:^(NSInteger idx) {
            int vals[4] = {30, 60, 120, 0};
            g_port_config.fps = vals[idx];
            port_config_save(nullptr);
        }];

        y = [self addSlider:@"视野广角范围 (FOV: 50° ~ 110°)" val:(float)g_port_config.fov min:50.0f max:110.0f atY:y width:w cb:^(float v) {
            g_port_config.fov = (int32_t)std::round(v);
            port_config_save(nullptr);
        }];

        y = [self addToggle:@"快速近似抗锯齿 (FXAA)" val:g_port_config.fxaa atY:y width:w cb:^(BOOL on) {
            g_port_config.fxaa = on;
            port_config_save(nullptr);
        }];

        y = [self addToggle:@"垂直同步 (VSync)" val:g_port_config.vsync atY:y width:w cb:^(BOOL on) {
            g_port_config.vsync = on;
            port_config_save(nullptr);
        }];

        y = [self addSegment:@"按键图标显示风格 (FaceButtons)" items:@[@"任天堂 (B/A/Y/X)", @"Xbox (A/B/X/Y)", @"PlayStation"] sel:g_port_config.face_buttons atY:y width:w cb:^(NSInteger idx) {
            g_port_config.face_buttons = (int32_t)idx;
            port_config_save(nullptr);
        }];

        y = [self addSlider:@"组合键判定时间窗 (ComboInputWindow ms)" val:(float)g_port_config.combo_window min:0.0f max:150.0f atY:y width:w cb:^(float v) {
            g_port_config.combo_window = (int32_t)std::round(v);
            port_config_save(nullptr);
        }];

        y = [self addToggle:@"显示右上角液态玻璃实时帧率胶囊 (FPS Pill)" val:g_port_config.show_fps_overlay atY:y width:w cb:^(BOOL on) {
            __strong __typeof__(weakSelf) strongSelf = weakSelf;
            g_port_config.show_fps_overlay = on;
            port_config_save(nullptr);
            if (strongSelf) strongSelf.fpsPillLabel.hidden = !on;
        }];
    } else if (self.currentTab == 3) {
        // Tab 3: Cheats & Forge Plugins
        y = [self addSegment:@"内置快速饮药/进食金手指 (comer_rapido_zh)"
                       items:@[@"关闭 (原速)", @"快吃+2 (1.7倍速)", @"极速饮药 (2.5倍速)"]
                         sel:g_port_config.fast_consume_mode atY:y width:w cb:^(NSInteger idx) {
            g_port_config.fast_consume_mode = (int32_t)idx;
            port_config_save(nullptr);
        }];

        y = [self addToggle:@"显示怪物血量显血浮层 (MonsterHP Plugin)" val:g_port_config.show_MonsterHP atY:y width:w cb:^(BOOL on) {
            g_port_config.show_MonsterHP = on;
            port_config_save(nullptr);
        }];

        int pCount = port_forge_get_plugin_count();
        for (int i = 0; i < pCount; ++i) {
            const MhguForgePluginEntry *pe = port_forge_get_plugin(i);
            if (!pe) continue;
            NSString *pTitle = [NSString stringWithFormat:@"Forge 插件：%s", pe->name];
            y = [self addToggle:pTitle val:pe->enabled atY:y width:w cb:^(BOOL on) {
                port_forge_set_plugin_enabled(i, on);
            }];
        }
    } else if (self.currentTab == 4) {
        // Tab 4: Open nxnative Pre-Launch Config Card
        UIButton *openLauncherBtn = [UIButton buttonWithType:UIButtonTypeSystem];
        openLauncherBtn.frame = CGRectMake(0, y + 8, w, 44);
        openLauncherBtn.backgroundColor = [UIColor colorWithRed:0.84 green:0.64 blue:0.24 alpha:0.92];
        openLauncherBtn.layer.cornerRadius = 12.0;
        [openLauncherBtn setTitle:@"打开 nxnative 启动器配置页面 (修改需重启生效的引擎与联机项)" forState:UIControlStateNormal];
        [openLauncherBtn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
        openLauncherBtn.titleLabel.font = [UIFont boldSystemFontOfSize:14.0];
        [openLauncherBtn addTarget:self action:@selector(handleOpenLauncherModal) forControlEvents:UIControlEventTouchUpInside];
        [self.tabContentScroll addSubview:openLauncherBtn];
        y += 60.0;
    }

    self.tabContentScroll.contentSize = CGSizeMake(w, y + 16.0);
}

- (CGFloat)addToggle:(NSString *)title val:(BOOL)val atY:(CGFloat)y width:(CGFloat)w cb:(void (^)(BOOL))cb {
    UIView *row = [[UIView alloc] initWithFrame:CGRectMake(0, y, w, 38)];
    row.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.06];
    row.layer.cornerRadius = 9.0;

    UILabel *lbl = [[UILabel alloc] initWithFrame:CGRectMake(12, 0, w - 80, 38)];
    lbl.text = title;
    lbl.font = [UIFont systemFontOfSize:13.0];
    lbl.textColor = [UIColor whiteColor];
    [row addSubview:lbl];

    UISwitch *sw = [[UISwitch alloc] initWithFrame:CGRectMake(w - 64, 3.5, 51, 31)];
    sw.on = val;
    sw.onTintColor = [UIColor colorWithRed:0.86 green:0.66 blue:0.24 alpha:1.0];
    [sw addAction:[UIAction actionWithHandler:^(__kindof UIAction * _Nonnull action) {
        UISwitch *s = (UISwitch *)action.sender;
        if (cb) cb(s.isOn);
    }] forControlEvents:UIControlEventValueChanged];
    [row addSubview:sw];

    [self.tabContentScroll addSubview:row];
    return y + 44.0;
}

- (CGFloat)addSegment:(NSString *)title items:(NSArray<NSString *> *)items sel:(NSInteger)sel atY:(CGFloat)y width:(CGFloat)w cb:(void (^)(NSInteger))cb {
    UIView *row = [[UIView alloc] initWithFrame:CGRectMake(0, y, w, 42)];
    row.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.06];
    row.layer.cornerRadius = 9.0;

    UILabel *lbl = [[UILabel alloc] initWithFrame:CGRectMake(12, 0, w * 0.40, 42)];
    lbl.text = title;
    lbl.font = [UIFont systemFontOfSize:13.0];
    lbl.textColor = [UIColor whiteColor];
    [row addSubview:lbl];

    UISegmentedControl *seg = [[UISegmentedControl alloc] initWithItems:items];
    seg.frame = CGRectMake(w * 0.42, 5, w * 0.56, 32);
    seg.selectedSegmentIndex = (sel >= 0 && sel < (NSInteger)items.count) ? sel : 0;
    [seg addAction:[UIAction actionWithHandler:^(__kindof UIAction * _Nonnull action) {
        UISegmentedControl *sc = (UISegmentedControl *)action.sender;
        if (cb) cb(sc.selectedSegmentIndex);
    }] forControlEvents:UIControlEventValueChanged];
    [row addSubview:seg];

    [self.tabContentScroll addSubview:row];
    return y + 48.0;
}

- (CGFloat)addSlider:(NSString *)title val:(float)val min:(float)minV max:(float)maxV atY:(CGFloat)y width:(CGFloat)w cb:(void (^)(float))cb {
    UIView *row = [[UIView alloc] initWithFrame:CGRectMake(0, y, w, 42)];
    row.backgroundColor = [UIColor colorWithWhite:1.0 alpha:0.06];
    row.layer.cornerRadius = 9.0;

    UILabel *lbl = [[UILabel alloc] initWithFrame:CGRectMake(12, 0, w * 0.48, 42)];
    lbl.text = [NSString stringWithFormat:@"%@: %.2f", title, val];
    lbl.font = [UIFont systemFontOfSize:13.0];
    lbl.textColor = [UIColor whiteColor];
    [row addSubview:lbl];

    UISlider *sl = [[UISlider alloc] initWithFrame:CGRectMake(w * 0.50, 6, w * 0.48, 30)];
    sl.minimumValue = minV;
    sl.maximumValue = maxV;
    sl.value = val;
    sl.minimumTrackTintColor = [UIColor colorWithRed:0.86 green:0.66 blue:0.24 alpha:1.0];
    [sl addAction:[UIAction actionWithHandler:^(__kindof UIAction * _Nonnull action) {
        UISlider *s = (UISlider *)action.sender;
        lbl.text = [NSString stringWithFormat:@"%@: %.2f", title, s.value];
        if (cb) cb(s.value);
    }] forControlEvents:UIControlEventValueChanged];
    [row addSubview:sl];

    [self.tabContentScroll addSubview:row];
    return y + 48.0;
}

- (void)togglePanelVisibility:(BOOL)visible {
    self.glassCard.hidden = !visible;
}

- (void)handleClosePanel {
    self.glassCard.hidden = YES;
}

- (void)handleStartTouchEdit {
    self.glassCard.hidden = YES;
    hud_ios_set_edit_mode(false);
    touch_ios_get_runtime()->edit_mode = true;
    self.exitEditBannerBtn.hidden = NO;
    [self.touchView setNeedsDisplay];
}

- (void)handleStartHudEdit {
    self.glassCard.hidden = YES;
    touch_ios_get_runtime()->edit_mode = false;
    hud_ios_set_edit_mode(true);
    self.exitEditBannerBtn.hidden = NO;
    [self.touchView setNeedsDisplay];
}

- (void)handleExitEditMode {
    touch_ios_get_runtime()->edit_mode = false;
    touch_ios_save_layout(nullptr);
    hud_ios_set_edit_mode(false);
    hud_ios_save_layout(nullptr);
    self.exitEditBannerBtn.hidden = YES;
    [self.touchView setNeedsDisplay];
}

- (void)handleResetHudLayout {
    hud_ios_reset_layout();
    hud_ios_save_layout(nullptr);
    [self reloadActiveTabContent];
    [self.touchView setNeedsDisplay];
}

- (void)handleOpenLauncherModal {
    NSString *docs = self.docsPath ?: [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) firstObject];
    NxLauncherViewController *launcher = [[NxLauncherViewController alloc] initWithDocumentsPath:docs];
    [self presentViewController:launcher animated:YES completion:nil];
}

- (void)tickFrameWithDelta:(float)dt {
    if (dt > 0.0001f) {
        float inst = 1.0f / dt;
        self.smoothedFps = self.smoothedFps * 0.90f + inst * 0.10f;
    }
    if (!self.fpsPillLabel.isHidden) {
        self.fpsPillLabel.text = [NSString stringWithFormat:@"%.1f FPS", self.smoothedFps];
    }
    [self.touchView setNeedsDisplay];
}

@end
