#include "../inc/libmx.h"
char *mx_strtrim(const char *str) {
	if (str == NULL) {
		return NULL;
	}
	int size = mx_strlen(str), spaceL = 0, spaceR = 0;
	while (mx_isspace(*str) && *str != '\0') {
		str++;
		spaceL++;
	}
	str -= spaceL;
	for (int i = size - 1; i >= spaceL; i--) {
		if (!mx_isspace(str[i]))
			break;
		spaceR++;
	}
	char *array = mx_strnew(size - spaceL - spaceR);
	for (int i = spaceL, j = 0; i <= size - 1 - spaceR; i++, j++) {
		array[j] = str[i];  
	}
	return array;
}

