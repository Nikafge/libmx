#include "../inc/libmx.h"
int mx_list_size(t_list *list) {
	int count = 0;
	t_list *ptr = list;
	if (list == NULL) {
		
	}
	while (ptr != NULL) {
		ptr = ptr->next;
		count++;
	}
	return count;
}

