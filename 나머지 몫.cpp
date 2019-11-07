#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("첫번째 정수");
	scanf("%d", &x);

	printf("두번째 정수");
	scanf("%d", &y);

	(x > y) ? printf("목 %d 나머지 %d \n", x / y, x % y) :
		printf("목 %d 나머지%d\n", x / y, x % y);

	return 0;
}