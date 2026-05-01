#include "../include/lab1(add).h"
#include <stdio.h>

static float calculateDistance(float V1, float V2, float t)
{
    return (V1 + V2) / 2 * t;
}

void run_lab1_add(void)
{
    float V1, V2, t, S;
    printf("V1 = ");
    scanf("%f", &V1);
    printf("V2 = ");
    scanf("%f", &V2);
    printf("t = ");
    scanf("%f", &t);
    S = calculateDistance(V1, V2, t);
    printf("Distance = %.2f\n", S);
}
