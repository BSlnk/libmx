#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    const char *tmp = str;
    int count = 0;

    if (str == NULL || sub == NULL)
        return -1;
    if (mx_strlen(sub) == 0 || mx_strlen(str) == 0)
        return 0;
    while ((tmp = mx_strstr(tmp, sub)) != 0){
        tmp++;
        count++;
    }
return count;
}
