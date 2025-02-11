#include <stdio.h>

int main()
{
    int price;
    scanf("%d", &price);
    printf("%d\n%d\n", (50 - price) / 10, 50 - price - (50 - price) / 10 * 10);
    return 0;
}