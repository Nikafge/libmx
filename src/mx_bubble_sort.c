#include "../inc/libmx.h"
int mx_bubble_sort(char **arr, int size) {
	int SwapNumber = 0;
	char *ptr;
	for (int i = 0; i < size - 1; i++) {
		for (int k = i + 1; k < size; k++) {
			if (mx_strcmp(arr[i], arr[k]) > 0) {
				ptr = arr[k];
				arr[k] = arr[i];
				arr[i] = ptr;
				SwapNumber++;
			}
		}
	}
	return SwapNumber;
}

