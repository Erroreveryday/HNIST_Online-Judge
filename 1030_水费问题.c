#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d", &a);
	if(a <= 10){
		b = a * 6;
		printf("%d\n", b);
	}
	else if(a <= 20){
		b = (a-10) * 7 + 60;
		printf("%d\n", b);
	}
	else{
		b=(a - 20) * 10 + 130;
		printf("%d\n", b);
	}
	return 0;
}
