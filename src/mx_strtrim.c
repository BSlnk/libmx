#include "libmx.h"

char *mx_strtrim(const char *str) {
    char *str_n = NULL;
    int length;

    if (str == NULL)
        return NULL;
    while (mx_isspace(*str) == 1) 
        str++;
    length = mx_strlen(str);
    for (int i = length - 1; mx_isspace(str[i]) == 1; i--)
        length--;
    if (length < 0) {
        str_n = mx_strnew(0);
        return str_n;
    }
    str_n = mx_strnew(length);
    str_n = mx_strncpy(str_n, str, length);
    return str_n;
}
