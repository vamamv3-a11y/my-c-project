#include "../include/lab5.h"
#include <stdio.h>

#define N 10

void run_lab5(void)
{
    int x[N], max, i;
    for (i = 0; i < N; i++)
        scanf("%d", &x[i]);
    max = x[0];
    for (i = 1; i < N; i++)
        if (x[i] > max) max = x[i];
    if (max != 0)
    {
        for (i = 0; i < N; i++)
            if (x[i] < 0)
                x[i] = x[i] / max;
    }
    else
    {
        printf("max=0, деление невозможно\n");
        return;
    }
    for (i = 0; i < N; i++)
        printf("%d ", x[i]);
    printf("\n");
}




