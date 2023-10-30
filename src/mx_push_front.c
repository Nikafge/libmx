#include "../inc/libmx.h"

void mx_push_front(t_list **list, void *data) {
	t_list *ptr = mx_create_node(data);
	ptr->next = *list;
	*list = ptr;
}

