#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() 
{

	int num;

	scanf("%d", &num);



	if (num == 0)

		printf("양의 X축");

	else if (num > 0 && num < 90)

		printf("제 1사분면");

	else if (num == 90)

		printf("양의 Y축");

	else if (num > 90 && num < 180)

		printf("제 2사분면");

	else if (num == 180)

		printf("음의 X축");

	else if (num > 180 && num < 270)

		printf("제 3사분면");

	else if (num == 270)

		printf("음의 Y축");

	else if (num > 270 && num < 360)

		printf("제 4사분면");



	return 0;

}