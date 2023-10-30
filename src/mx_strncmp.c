#include "../inc/libmx.h"
int mx_strncmp(const char *s1, const char *s2, int n) {
	int i = 0;
	for(; i < n; i++) {
		if(s1[i] != s2[i]) {
			return (s1[i] - s2[i]);
		}
	}
	return 0;
}

