#include "../inc/libmx.h"
unsigned long mx_hex_to_nbr(const char *hex) {
	unsigned long DecNumb = 0, start = 1;
	int length = 0;
	for (int i = 0; hex[i] != '\0'; i++) {
		length++;
	}
	for (int i = length - 1; i >= 0; i--) {
		if (hex[i] >= 'A' && hex[i] <= 'F') {
			DecNumb += (hex[i] - 55) * start;
			start *= 16;
		}
		else if(hex[i] >= 'a' && hex[i] <= 'f') {
			DecNumb += (hex[i] - 87) * start;
			start *= 16;
		}
		else if (hex[i] >= '0' && hex[i] <= '9') {
			DecNumb += (hex[i] - 48) * start;
			start *= 16;
		}
	}
	return DecNumb;
}

