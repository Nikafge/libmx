#include "../inc/libmx.h"

char *mx_replace_substr(const char *str, const char *sub, const char *replace) {
	int strLeng = mx_strlen(str), subLeng = mx_strlen(sub), repLeng = mx_strlen(replace), subs = mx_count_substr(str, sub);
	char *result = mx_strnew(strLeng - subs * subLeng + subs * repLeng);
	int i = 0;
	int j = 0;
	while (i < strLeng) {
		if (mx_strncmp(str + i, sub, subLeng) == 0) {
			mx_strncpy(result + j, replace, repLeng);
			i += subLeng;
			j += repLeng;
		} else {
			result[j] = str[i];
			i++;
			j++;
		}
	}
	result[j] = '\0';
	return result;
}

