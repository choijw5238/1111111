#include <stdio.h>



int main()

{

	char ch = '*';

	char* p = &ch;



	printf("ch = '*'\n");

	printf("주소 : %d\n", p);

	printf("코드값 : %d\n", *p);

	printf("문자 : %c\n", *p);



	return 0;

}