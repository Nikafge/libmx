#include "../inc/libmx.h"
void mx_str_reverse(char *s) {
	int i = 0, k = 0;
	char a;
	while(s[k] != '\0') {
		k++;
	}
	k -= 1;
	while (i < k) {
		a = s[i];
		s[i] = s[k];
		s[k] = a;
		i++;
		k--;
	}
}

