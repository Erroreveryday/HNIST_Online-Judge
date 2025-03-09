#include <stdio.h>

int main()
{
    int a, b;
    char ch1;
    scanf("%d%c%d", &a, &ch1, &b);
    if (ch1 != '+' && ch1 != '-' && ch1 != '*' && ch1 != '/')
        printf("-1");
    else if (ch1 == '+')
        printf("%d\n", a + b);
    else if (ch1 == '-')
        printf("%d\n", a - b);
    else if (ch1 == '*')
        printf("%d\n", a * b);
    else if (ch1 == '/')
        if (b != 0)
            printf("%.1f\n", (float)a / b);
        else
            printf("-1\n");
    return 0;
}