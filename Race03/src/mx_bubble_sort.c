#include "../inc/header.h"

void    mx_bubble_sort(int *arr) {
    int tnt, count;
    int buf;

    tnt = 1;
    count = 0;
    while (tnt == 1) {
        tnt = 0;
        for (int i = 1; i < 5; i++) {
            if (arr[i] > arr[i + 1]) {
                buf = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = buf;
                tnt = 1;
            }
        }
    }
}
