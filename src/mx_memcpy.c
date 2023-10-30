#include "../inc/libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    char* tmpDst = (char*)dst;
    const char* tmpSrc = (char*)src;
    for (size_t i = 0; i < n; ++i)
        *tmpDst++ = *tmpSrc++;
    return dst;
}

