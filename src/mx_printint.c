#include "../inc/libmx.h"
void mx_printint(int n) {
	if (n == 0) {
		mx_printchar('0');
		return;
	}
	int j = 0, num = n;
	if (n < 0) {
		num *= -1;
		mx_printchar('-');
		n *= -1;
	}
	while(num != 0) {
		num /= 10;
		j++;
	}
	int number[j];
	for(int i = 0; i < j; i++) {
		number[i] = n % 10; //
		n /=10;
	}
	for(int k = j - 1; k >= 0; k--) {
		mx_printchar(number[k] + '0');
	}
}

