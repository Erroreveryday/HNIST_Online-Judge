#include <stdio.h>
#include <math.h>

float main()
{
    float Xa, Ya, Xb, Yb, AB;
    scanf("%f %f", &Xa, &Ya);
    scanf("%f %f", &Xb, &Yb);

    AB = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));
    /*
    sqrt 函数计算括号内表达式的平方根
    pow 函数的第一个参数是要被幂的数，第二个参数是幂
    */

    printf("%.2f\n", AB);
    return 0;
}