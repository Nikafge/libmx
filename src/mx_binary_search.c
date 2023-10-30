#include "../inc/libmx.h"
int mx_binary_search(char **arr, int size, const char *s, int *count) {
	int begin = 0, end = size - 1, iterations = 0, middle;
	for(int i = 0; i < size; i++) {
		if (mx_strcmp(arr[i], s) == 0) {
			iterations++;
		}
	}
	if (iterations == 0) {
		return -1;
	}
	while (begin <= end) {
		++*count;
		middle = (begin + end) / 2;
		if (mx_strcmp(arr[middle], s) == 0) {
			return middle;
		}
		if (mx_strcmp(arr[middle], s) > 0) {
			end = middle - 1;
		}
		else {
			begin = middle + 1;
		}
	}
	return -1;
}

