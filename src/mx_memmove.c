#include "../inc/libmx.h"

void *mx_memmove(void *dst, const void *src, size_t n) {
	if (dst == NULL || src == NULL || n == 0) {
		return dst;
	}
	unsigned char *d = (unsigned char *)dst;
	const unsigned char *s = (const unsigned char *)src;
	if (d == s)
		return dst;
	if (d < s || d >= s + n)
		return mx_memcpy(dst, src, n);
	else {
		for (size_t i = n - 1; i < n; --i) {
			d[i] = s[i];
		}
	}
	return dst;
}

