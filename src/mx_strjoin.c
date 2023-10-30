#include "../inc/libmx.h"
char *mx_strjoin(char const *s1, char const *s2) {
	if (s1 == NULL && s2 == NULL) {
		return NULL;
	}
	else if (s1 == NULL) {
			return mx_strdup(s2);
	}
		else if (s2 == NULL){
			return mx_strdup(s1);
		}
	char *arr = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
	mx_strcpy(arr, s1);
	mx_strcat(arr, s2);
	return arr;
}

