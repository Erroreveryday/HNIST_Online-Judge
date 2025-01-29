#include <stdio.h>
#include <math.h>

float main()
{
    float A, B, sum;
    scanf("%f %f", &A, &B);
    sum = fabs(A) + fabs(B);
    printf("%.1f\n", sum);
    return 0;
}