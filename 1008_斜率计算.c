#include <stdio.h>

float main()
{
    float Xa, Ya, Xb, Yb, K;
    scanf("%f %f", &Xa, &Ya);
    scanf("%f %f", &Xb, &Yb);
    K = (Yb - Ya) / (Xb - Xa);
    printf("%.2f\n", K);
    return 0;
}