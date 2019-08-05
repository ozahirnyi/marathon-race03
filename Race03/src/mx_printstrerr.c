#include "../inc/header.h"

int mx_strlen(const char *s);

void mx_printstrerr(const char *s)
{
        for(int i = 0; i < mx_strlen(s); i++)
                write(2, &s[i], 1);
}
