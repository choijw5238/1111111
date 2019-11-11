#include <stdio.h> 

int main(void)

{

	int i, j;
	for (i = 5; i >= 1; i--)
	{
		for (j = 0; j < i; j++)
			printf("%d", 5 - j);
		printf("\n");
	}

	return 0;
}