#include <stdio.h>
#include <math.h>
#define PI 3.1415926535897932384626

int main()
{
    float alpha, sinValue, cosValue;

    scanf("%f", &alpha);

    sinValue = sin(alpha * PI / 180);
    cosValue = cos(alpha * PI / 180);

    printf("%.2f\n", sinValue);
    printf("%.2f\n", cosValue);

    return 0;
}