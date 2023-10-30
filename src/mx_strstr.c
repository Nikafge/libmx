#include "../inc/libmx.h"
char *mx_strstr(const char *s1, const char *s2) {
		int j = 0, r;
		for(int i = 0; i < mx_strlen(s1); i++) {
			if(s1[i] == s2[0]) {
				r = i;
				while(s1[r] == s2[j]) {
					if(j ==mx_strlen(s2) - 1) {
						return (char *)&s1[i];
					}
					r++;
					j++;
				}
				j = 0;
			}
		}
		return 0;
}

