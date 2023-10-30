#include "../inc/libmx.h"

char *mx_del_extra_spaces(const char *str) {
	char *ptr = mx_strtrim(str);
	int digit = mx_strlen(ptr), j = 0;
	if (str == NULL) {
		return NULL;
	}
	for(int i = 0; i < mx_strlen(ptr); i++) {
		if ((mx_isspace(ptr[i]) && mx_isspace(ptr[i + 1]))) {
			digit--;
		}
	}

	char *NewPtr = mx_strnew(digit);
	for (int i = 0; i < digit; i++) {
		if(mx_isspace(ptr[j]) == 1 && mx_isspace(ptr[j + 1]) == 1) {
			j++;
			i--;
		
		}
		else {
			NewPtr[i] = ptr[j];
			j++;
		}
	}
	return NewPtr;
}

