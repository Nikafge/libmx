#include "../inc/libmx.h"

void *mx_realloc(void *ptr, size_t size) {
	if (size == 0) {
		free(ptr);
		return NULL;
	}
	if (ptr == NULL) 
		return malloc(size);
	void *new_ptr = malloc(size);
	if (new_ptr == NULL)
		return NULL;
	char *tmpPtr = ptr;
	size_t old_size = 0;
	for (; tmpPtr[old_size] != '\0'; old_size++)
		old_size++;
	size_t min_size;
	if (size < old_size) {
		min_size = size;
	}
	else {
		min_size = old_size;
	}
	mx_memcpy(new_ptr, ptr, min_size);
	free(ptr);
	return new_ptr;
}

