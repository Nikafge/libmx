#include "../inc/libmx.h"
int mx_count_substr(const char *str, const char *sub) {
	int count = 0;
	if(sub[0] == '\0') {
        return 0;
	}
	for(int i = 0; i < mx_strlen(str); i++) {
		if(mx_strstr(str, sub) != 0) {
			++count;
			str += mx_strlen(str) - mx_strlen(mx_strstr(str, sub));
			str++;
		}
	}
	return count;
}

