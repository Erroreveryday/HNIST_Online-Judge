#include <stdio.h>

int main()
{
    int abc, a, b, c;
    scanf("%d", &abc);
    printf("%d %d %d\n", abc / 100, abc / 10 % 10, abc % 10);
    printf("%d", abc / 100 + abc / 10 % 10 + abc % 10);
    return 0;
}