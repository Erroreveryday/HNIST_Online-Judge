#include <stdio.h>

float main()
{
    float class1, class2, class3;
    scanf("%f %f %f", &class1, &class2, &class3);
    printf("%.1f\n", (class1 + class2 + class3) / 3);
    return 0;
}