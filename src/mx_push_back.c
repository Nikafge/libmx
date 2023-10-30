#include "../inc/libmx.h"
void mx_push_back(t_list **list, void *data) {
	t_list *ptr = *list;
	t_list *last_el = mx_create_node(data);
	if (*list == NULL) {
		*list = last_el;
		return;
	}
	while (ptr->next != NULL) {
		ptr = ptr->next;
	}
	ptr->next = last_el;
}

