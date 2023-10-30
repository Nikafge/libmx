#include "../inc/libmx.h"
char *mx_strncpy(char* dst, const char* src, int len)
{
	int i = 0;
	if (dst == NULL) {
		return NULL;
	}
	char* ptr = dst;
	for(i = 0; i < len; i++) {
		dst[i] = src[i];
	}
	dst[i] = '\0';
	return ptr;
}

