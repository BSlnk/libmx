#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    char *duplicate = NULL;
    size_t len = 0;

    if (n == 0 && s1 == NULL) {
        duplicate = mx_strnew(len);
        return duplicate;
    }
    duplicate = mx_strnew(n);
    mx_strncpy(duplicate, s1, n);
    return duplicate;
}
