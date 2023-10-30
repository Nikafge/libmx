#include "../inc/libmx.h"
void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
	if (big == NULL || little == NULL || little_len == 0 || big_len < little_len) {
		return NULL;
	}
	const unsigned char *h = (const unsigned char *)big;
	const unsigned char *n = (const unsigned char *)little;
	size_t max_search = big_len - little_len;
	for (size_t i = 0; i <= max_search; ++i) {
 		if (mx_memcmp(h + i, n, little_len) == 0) {
			return (void *)(h + i);
		}
	}
	return NULL;
}

