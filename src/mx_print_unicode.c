#include "libmx.h"

static void mx_byte_unicode(wchar_t c, int *unicode, int *byte) {
    if (c < 128)
        mx_printchar(c);
    else if (c < 2048) {
        (*byte) = 1;
        (*unicode) = 192;
    }
    else if (c < 65536) {
        (*byte) = 2;
        (*unicode) = 224;
    }
    else if (c < 1112065) {
        (*byte) = 3;
        (*unicode) = 240;
    }
}

void mx_print_unicode(wchar_t c) {
    int unicode[5] = {0};
    int byte = 0;

    mx_byte_unicode(c, unicode, &byte);
    if (c > 127) {
        for (int i = 1; i < byte + 1; i++)
            unicode[i] = 128;
        for (int i = 0; c != 0; i++) {
            if (i == 6) {
                i = 0;
                --byte;
            }
            unicode[byte] += c % 2 * mx_pow(2, (i));
            c /= 2;
        }
        for (int i = 0; unicode[i] != 0; i++)
            mx_printchar(unicode[i]);
    }
}
