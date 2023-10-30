#include "../inc/libmx.h"

void mx_pop_front(t_list **list) {
	if (list == NULL || *list == NULL) {
		return;
	}
	t_list *ptr = *list;
	*list = (*list)->next;
	free(ptr);
}

