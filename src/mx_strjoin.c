#include "libmx.h"

char *mx_strjoin(char const *s1, char const *s2) {
    char *dst;

    if (s1 == NULL && s2 == NULL)
        return NULL;
    else if (s1 == NULL)
        return mx_strdup(s2);
    else if (s2 == NULL)
        return mx_strdup(s1);
    else {
        dst = mx_strnew(mx_strlen(s1) + mx_strlen(s2));
        dst = mx_strcat(mx_strcpy(dst, s1), s2);
        return dst;
    }
}
