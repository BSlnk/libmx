#include "libmx.h"

static void mx_qsort_swap(char **arr, int i, int j , int *count) {
    char *temp = NULL;

    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    (*count)++;
}

int mx_quicksort(char **arr, int left, int right) {
    int i = left;
    int j = right;
    int mid = (left + right) / 2;
    int count = 0;
    
    if (!arr)
        return -1;
    if (i <= j) {
        for ( ; mx_strlen(arr[i]) < mx_strlen(arr[mid]); i++);
        for ( ; mx_strlen(arr[j]) > mx_strlen(arr[mid]); j--);
        if (i < j && mx_strlen(arr[i]) != mx_strlen(arr[j]))
             mx_qsort_swap(arr, i, j , &count);
        if (--j >= left)
            count += mx_quicksort(arr, left, j);
        if (++i <= right)
            count += mx_quicksort(arr, i, right);
    }
    return count;
}
