#pragma once
#define rt_logf(...) (fprintf(stderr, __VA_ARGS__), fflush(stderr))
#include <stdio.h>
