#include <stdio.h>

float main()
{
    float Xa, Ya, Xb, Yb;
    scanf("%f %f", &Xa, &Ya);
    scanf("%f %f", &Xb, &Yb);
    printf("%.2lf %.2lfi\n", Xa + Xb, Ya + Yb);
    return 0;
}