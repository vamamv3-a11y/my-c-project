Артём Дорошенко
#include "../include/lab5(add).h"
#include <stdio.h>

#define N 10

static void bubblesort(int x[], int n)
{
    int i, j, q;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (x[j] > x[j + 1])
            {
                q = x[j];
                x[j] = x[j + 1];
                x[j + 1] = q;
            }
}

void run_lab5_add(void)
{
    int x[N], i, max;
    for (i = 0; i < N; i++)
        scanf("%d", &x[i]);
    bubblesort(x, N);
    max = x[N - 1];
    if (max == 0) { printf("max=0, деление невозможно\n"); return; }
    for (i = 0; i < N; i++)
        if (x[i] < 0)
            x[i] = x[i] / max;
    for (i = 0; i < N; i++)
        printf("%d ", x[i]);
    printf("\n");
}
