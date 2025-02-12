#include <stdio.h>

float main()
{
    float x, a1, a2, a3, a0;
    scanf("%f %f %f %f %f", &a1, &a2, &a3, &a0, &x);
    printf("%.2f", a1 * x * x * x + a2 * x * x + a3 * x + a0);
    return 0;
}