#include <stdio.h>



int main()

{

	char ch = '*';

	char* p = &ch;



	printf("ch = '*'\n");

	printf("�ּ� : %d\n", p);

	printf("�ڵ尪 : %d\n", *p);

	printf("���� : %c\n", *p);



	return 0;

}