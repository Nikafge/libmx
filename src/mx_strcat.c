#include "../inc/libmx.h"
char *mx_strcat(char *s1, const char *s2) {
	int i = 0;
	int len = mx_strlen(s1);
	for(; i < mx_strlen(s2); i++) {
		s1[len + i] = s2[i];
	}
	return s1;
}

