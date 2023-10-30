#include "../inc/libmx.h"
void *mx_memccpy(void *dst, const void *src, int c, size_t n) {
	if (src == NULL)
		return NULL;
	char *tmpDst = dst;
	const char *tmpSrc = src;
	char d = c;
	for (; n != 0; --n, ++tmpDst, ++tmpSrc) {
		*tmpDst = *tmpSrc;
		if (*tmpSrc == d) {
			return tmpDst + 1;
		}
	}
	return tmpDst;
}

