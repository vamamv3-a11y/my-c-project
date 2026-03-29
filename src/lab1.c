#include "../include/lab1.h"
#include <stdio.h>

void run_lab1(void)
{
    float V1, V2, t, S;

    printf("V1 = ");
    scanf("%f", &V1);

    printf("V2 = ");
    scanf("%f", &V2);

    printf("t = ");
    scanf("%f", &t);

    S = (V1 + V2) / 2 * t;

    printf("Distance = %.2f\n", S);
}
