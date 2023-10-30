#include "../inc/libmx.h"
int mx_strlen(const char* s) {
    int numb = 0;
    while (*s != '\0') {
        numb++;
        s++;
    }
    return numb;
}

