#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    size_t len = malloc_size(ptr);
    unsigned char *n_ptr = NULL;

    if ((int)size >= 0) {
        if (size != 0 && len > size)
            return ptr;
        n_ptr = malloc(size);
        if (size != 0 && ptr != NULL)
            n_ptr = mx_memcpy(n_ptr, ptr, size);
        free(ptr);
    }
    return n_ptr;
}
