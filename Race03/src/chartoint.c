#include "../inc/header.h"

int *chartoint(char **s) {
    int *arr = (int *)malloc(5);

    for (int i = 1; i < 6; i++) {
        if (s[i][0] == '1' && s[i][1] == '0')
            arr[i] = 10;
        else if (s[i][0] == 'J')
            arr[i] = 11;
        else if (s[i][0] == 'Q')
            arr[i] = 12;
        else if (s[i][0] == 'K')
            arr[i] = 13;
        else if (s[i][0] == 'A')
            arr[i] = 14;
        else
            arr[i] = mx_atoi(s[i]);
    }
    return arr;

}
