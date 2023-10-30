#include "../inc/libmx.h"
double mx_pow(double n, unsigned int pow) {
	if (pow == 0)
		return 1;
	double ret = n;
	while(pow != 1) {
		ret = ret * n;
		pow--;
	}
	return ret;
}

