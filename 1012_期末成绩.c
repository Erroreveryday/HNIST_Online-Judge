#include <stdio.h>

float main()
{
    float nor, exp, fin; // 平时成绩，实验成绩，期末上机测试
    scanf("%f %f %f", &nor, &exp, &fin);
    printf("%.1f\n", nor * 0.2 + exp * 0.3 + fin * 0.5);
    return 0;
}