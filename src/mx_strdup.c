#include "../inc/libmx.h"
char *mx_strdup(const char *str) {
	if (str == NULL) {
		return NULL;
	}
	if (*str == '\0') {
		return "\0";
	}
	char *arr = mx_strnew(mx_strlen(str));
	mx_strcpy(arr, str);
	return arr;
}

