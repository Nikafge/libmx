#include "../inc/libmx.h"

int mx_read_line (char **lineptr, size_t buf_size, char delim, const int fd) {
	if (fd < 0 || buf_size < 0 || lineptr == NULL)
		return -2;
	char buffer[buf_size];
	int size = 0;
	if (*lineptr != NULL)
		*lineptr = NULL;
	while (true) {
		char del;
		int reader = read(fd, &del, 1);
		if (reader == -1)
			return -2;
		if (reader == 0)
			return -1;
		buffer[size] = del;
		if (del == delim) {
			char *str = mx_strndup(buffer, size);
			char *tmp = mx_strjoin(*lineptr, str);
			free(*lineptr);
			*lineptr = tmp;
			return size;
		}
		size++;
	}
}

