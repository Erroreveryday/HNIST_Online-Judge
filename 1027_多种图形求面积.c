#include <stdio.h>

int main()
{
    int type;
    float a, b, r, s;
    float PI = 3.1415926;

    scanf("%d", &type);

    switch (type) {
        case 1:
            scanf("%f %f", &a, &b);
            s = a * b;
            printf("%d\n", (int)s);
            break;
        case 2:
            scanf("%f %f", &a, &b);
            s = 0.5 * a * b;
            printf("%d\n", (int)s);
            break;
        case 3:
            scanf("%f", &r);
            s = PI * r * r;
            printf("%d\n", (int)s);
            break;
    }

    return 0;
}