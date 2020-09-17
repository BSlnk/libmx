#include "libmx.h"

double mx_pow(double n, unsigned int pow) {
    unsigned int i = 0;
    double e = 1;

    if (pow == 0)
        return 1;
    while (i < pow) {
        e *= n;
        i++;
    }
    return e;
}
