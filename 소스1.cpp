#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() 
{

	int num;

	scanf("%d", &num);



	if (num == 0)

		printf("���� X��");

	else if (num > 0 && num < 90)

		printf("�� 1��и�");

	else if (num == 90)

		printf("���� Y��");

	else if (num > 90 && num < 180)

		printf("�� 2��и�");

	else if (num == 180)

		printf("���� X��");

	else if (num > 180 && num < 270)

		printf("�� 3��и�");

	else if (num == 270)

		printf("���� Y��");

	else if (num > 270 && num < 360)

		printf("�� 4��и�");



	return 0;

}