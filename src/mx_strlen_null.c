#include "libmx.h"

int mx_strlen_null(const char *s) {
    int i = 0;

    if(s == NULL)
        return i;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}
