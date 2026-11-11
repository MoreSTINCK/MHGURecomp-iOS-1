#pragma once
// ============================================================================
// APK(gu-native) touch.cpp 的兼容层：只补 iOS 树缺的三样东西，不改 APK 逻辑
// ============================================================================
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

// APK 的日志线程（logwriter.h 的 rt_logf）：iOS 直接写 stderr
#define rt_logf(...) (fprintf(stderr, __VA_ARGS__), fflush(stderr))

// APK 的 hle/mousemenu.h：iOS 树没有这些模块，按“不确定”处理
static inline bool menu_pages_zl(void) { return false; }     // 菜单用 ZL/ZR 翻页？未知
static inline uint32_t menu_cursor_age(void) { return 0; }   // 菜单吃输入多久了？未知
