#include "libmx.h"

static int len_num(int number) {
    int length = 1;

    if (number < 0)
        length++;
    for ( ; number / 10; length++)
        number /= 10;
    return length;
}

char *mx_itoa(int number) {
    unsigned int copy = number;
    char *str;
    int length = 0;

    length += len_num(number);
    str = mx_strnew(length);
    if (number < 0) {
        str[0] = '-';
        copy *= -1;
    }
    if (number == 0)
        str[0] = '0';
    while (copy) {
        str[--length] = copy % 10 + '0';
        copy = copy / 10;
    }
    return str;
}
