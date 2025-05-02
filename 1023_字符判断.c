#include <stdio.h>

int main()
{
    char key;
    scanf("%c",&key);
    if(key>='0'&&key<='9')
        printf("1");
    else if(key>='a'&&key<='z')
        printf("A");
    else if(key>='A'&&key<='Z')
        printf("A");
    else
        printf("#");
    return 0;
}