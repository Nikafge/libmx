#include "../inc/libmx.h"
int mx_count_words(const char *str, char delimiter) {
	int i = 0, count = 1;
	while(str[i] != '\0') {
		if(str[i] == delimiter && str[i - 1] != delimiter) {
			count++;
		}
		i++;
	}
	return count;
}

