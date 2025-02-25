#include <stdio.h>

int main()
{
    int K;
    scanf("%d", &K);
    if (K > 0)
        printf("positive\n");
    else if (K < 0)
        printf("negative\n");
    else
        printf("zero\n");
    return 0;
}