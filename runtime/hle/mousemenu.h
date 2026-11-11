#pragma once
// APK(gu-native) 的 hle/mousemenu.h：iOS 树没有这个模块，这里只留 touch.cpp 用到的两个查询
#include <stdbool.h>
#include <stdint.h>
static inline bool menu_pages_zl(void) { return false; }
static inline uint32_t menu_cursor_age(void) { return 0; }
