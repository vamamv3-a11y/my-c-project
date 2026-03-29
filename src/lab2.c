#include "../include/lab2.h"
#include <stdio.h>

void run_lab2(void)
{
    float s, a, c, b;
    int n, i, sign;

    printf("n = ");
    scanf("%d", &n);

    s = 0;
    sign = 1;
    i = 0;
    c = 3;

    while (i < n)
    {
        b = (i + 1) * (i + 2);
        a = c / b;
        s = s + a * sign;
        sign = -sign;
        c = c + 1;
        i = i + 1;
    }

    printf("s = %f\n", s);
}
