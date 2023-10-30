#include "../inc/libmx.h"

void mx_pop_back(t_list **list) {
	if (list == NULL) {
		return;
	}
	t_list *ptr = *list;
	t_list *prevPtr = NULL;
	while (ptr->next != NULL) {
		prevPtr = ptr;
		ptr = ptr->next;
	}
	if (prevPtr == NULL) {
		free(*list);
		*list = NULL;
	}
	else {
		free(ptr);
		prevPtr->next = NULL;
	}
}

