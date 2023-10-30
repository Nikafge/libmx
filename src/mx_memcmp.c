#include "../inc/libmx.h"
int mx_memcmp(const void *s1, const void *s2, size_t n) {
	if(n < 0)
		return(0);
	while(*(char*)s1 == *(char*)s2  && n != 0) {
		s1 = (char*)s1 + 1;
		s2 = (char*)s2 + 1;
		n--;
	}
	if (n == 0)
		return 0;
	return(*((char*)s1) - *((char*)s2));
}

