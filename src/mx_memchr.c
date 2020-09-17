#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n) {
    size_t i = 0;
    unsigned char *pointer = (unsigned char*)s;

    for ( ; i < n; i++) {
        if (*pointer != (unsigned char)c)
            pointer++; 
        else
            return pointer;
    }
    return NULL;
}
