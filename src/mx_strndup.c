#include "../inc/libmx.h"

char *mx_strndup(const char *s1, size_t n) {
	if (s1 == NULL)
		return NULL;
	size_t length = 0;
	for (; s1[length] != '\0'; length++);
	if (n < length)
		length = n;
	char *str = mx_strnew(length);
	mx_strncpy(str, s1, length);
	return str;
}

