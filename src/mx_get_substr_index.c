#include "../inc/libmx.h"
int mx_get_substr_index(const char *str, const char *sub) {
	if (str == NULL || sub == NULL)
		return -2;
	for (int i = 0; i <= mx_strlen(str) - mx_strlen(sub); i++) {
		int j;
		for (j = 0; j < mx_strlen(sub); j++) {
			if (str[i + j] != sub[j]) {
					break;
				}
			}
		if (j == mx_strlen(sub)) {
			return i;
		}
	}
	return -1;
}

