#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	double kg, lb;

	printf("kg������ ���Ը� �Է��ϼ��� : ");
	scanf("%lf", &kg);

	lb = kg / 0.45359237;

	printf("�Է��Ͻ� ���� %.1lfkg�� %.1lflb�� �ش��մϴ�.\n", kg, lb);

	return 0;
}



