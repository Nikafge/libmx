#include "../inc/libmx.h"

void mx_swapper(char **a, char **b) {
	char *tmp = *a;
	*a = *b;
	*b = tmp;
}
int mx_quicksort(char **arr, int left, int right) {
	if (arr == NULL)
		return -1;
	int swaps = 0;
	char *pivot = arr[(right + left) /2];
	if (left < right) {
		int lef = left, righ = right;
		while(lef <= righ) {
			for (; mx_strlen(arr[lef]) < mx_strlen(pivot) || 
				(mx_strlen(arr[lef]) == mx_strlen(pivot) && mx_strcmp(arr[lef], pivot) < 0); lef++);
			for (; mx_strlen(arr[righ]) > mx_strlen(pivot)|| 
				(mx_strlen(arr[righ]) == mx_strlen(pivot) && mx_strcmp(arr[righ], pivot) > 0); righ--);
			if (lef <= righ) {
				if (lef != righ) {
					mx_swapper(&arr[lef], &arr[righ]);
					swaps++;
				}
				lef++;
				righ--;
			}
		}
		swaps += mx_quicksort(arr, left, righ);
		swaps += mx_quicksort(arr, lef, right);
	}
	return swaps;
}

