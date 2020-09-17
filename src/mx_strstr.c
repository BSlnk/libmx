#include "libmx.h"

char *mx_strstr(const char *s1, const char *s2){
    const char *p = s1;

    if (mx_strlen(s2) == 0)
        return (char *) p;
    for ( ;(p = mx_strchr(p, *s2)) != 0; s1++) {
        if (mx_strncmp(p, s2, mx_strlen(s2)) == 0)
        return (char *) p;
    }
    return 0;
}
