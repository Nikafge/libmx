#include "../inc/libmx.h"

char *mx_file_to_str(const char *filename) {
	if (filename == NULL) {
		return NULL;
	}
	int i = 0, file = open(filename, O_RDONLY);
	char symbol, *str = mx_strnew(4096);
	int add = read(file, &symbol, 1);
	if (file == -1) {
		return NULL;
	}
	while (add > 0) {
		str[i] = symbol;
		add = read(file, &symbol, 1);
		i++;
	}
	return str;
}

