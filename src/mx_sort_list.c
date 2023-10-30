#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *list, bool(*cmp)(void *a, void *b)) {
	bool must_sort = true;
	t_list *ptr = list;
	while (must_sort == true) {
		must_sort = false;
		ptr = list;
		while (ptr->next != NULL) { 
			if (cmp(ptr->data, ptr->next->data)) {
				must_sort = true;
				void *t = ptr->data;
				ptr->data = ptr->next->data;
				ptr->next->data = t;
			}
		ptr = ptr->next;
		}
	}
	return list;
}

