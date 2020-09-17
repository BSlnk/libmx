#include "libmx.h"

static int len_num(unsigned long nbr) {
    int l = 0;

    for (; nbr != 0; l++)
        nbr /= 16;
    return l;
}

char *mx_nbr_to_hex(unsigned long nbr) {
    char *num = NULL;
    int l = len_num(nbr);
    int tmp;
    
    if (nbr == 0) {
        num = mx_strnew(1);
        num = "0";
        return num;
    }
    num = mx_strnew(l);
    while (nbr) {
        tmp = nbr % 16;
        if (tmp < 10)
            num[--l] = 48 + tmp;
        else if (tmp >= 10)
            num[--l] = 87 + tmp;
        nbr /= 16;
    }  
    return num;
}
