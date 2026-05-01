#include "../include/lab2(add).h"
#include <stdio.h>

static float calculateSum(int n)
{
    float s = 0;
    float c = 3;
    int sign = 1;
    for (int i = 0; i < n; i++)
    {
        if (i == 7) break;
        float b = (i + 1) * (i + 2);
        float a = c / b;
        s = s + a * sign;
        sign = -sign;
        c = c + 1;
    }
    return s;
}

void run_lab2_add(void)
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("s = %f\n", calculateSum(n));
}
