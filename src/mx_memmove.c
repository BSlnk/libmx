#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len) {
    unsigned char *p_dst = (unsigned char *)dst;
    unsigned char *p_src = (unsigned char *)src;
    unsigned char *tmp = (unsigned char *) malloc(sizeof(unsigned char) * len);

    for (size_t i = 0; i < len; i++) {
        *(tmp + i) = *(p_src + i);
        *(p_dst + i) = *(tmp + i);
    }
    free(tmp);
    return dst;
}
