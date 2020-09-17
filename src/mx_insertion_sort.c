#include "libmx.h"

int mx_insertion_sort(char **arr, int size) {
    int count = 0;
    int k;
    char *element;

    for (int i = 1; i < size; i++) {
        k = i;
        while (k > 0 && mx_strlen(arr[k - 1]) > mx_strlen(arr[k])) {
            element = arr[k - 1];
            arr[k - 1] = arr[k];
            arr[k] = element;
            count++;
            k--;
        }
    }
    return count;
}
