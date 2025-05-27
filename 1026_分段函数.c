#include <stdio.h>

int main()
{
    int x, y;

    scanf("%d", &x);

    if (x<0) {
        y = x * x - 1;
    } else if (x >= 0 && x < 1) {
        y = x * x;
    } else if (x >= 1) {
        y = x * x + 1;
    }

    printf("%d", y);

    return 0;
}