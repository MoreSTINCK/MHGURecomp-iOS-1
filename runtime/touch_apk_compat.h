#pragma once
// ============================================================================
// APK(gu-native) touch.cpp 的兼容层：只补 iOS 树缺的三样东西，不改 APK 逻辑
// ============================================================================
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

// APK 的日志线程（logwriter.h 的 rt_logf）：iOS 直接写 stderr
#define rt_logf(...) (fprintf(stderr, __VA_ARGS__), fflush(stderr))

