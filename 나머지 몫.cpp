#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;
	int y;

	printf("ù��° ����");
	scanf("%d", &x);

	printf("�ι�° ����");
	scanf("%d", &y);

	(x > y) ? printf("�� %d ������ %d \n", x / y, x % y) :
		printf("�� %d ������%d\n", x / y, x % y);

	return 0;
}