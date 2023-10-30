#include "../inc/libmx.h"
int mx_sqrt(int x) {
	if(x < 4) {
		return 0;
	}
	int tmp = x;
	while (tmp * tmp > x) {
		tmp = (tmp + x / tmp) / 2;
	}
	return tmp;
}

