#include "../inc/libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
	char *tmp = (char*)s;
	for (size_t i = 0; i < n; tmp++, i++) {
		if (*tmp == c)
			return tmp;
	}
	return NULL;
}

