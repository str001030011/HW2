#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k, l;
	printf("(A)\n");

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("(B)\n");

	for (i = 9; i >= 0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("(C)\n");
	
	for (i = 0; i <10; i++)
	{
		
		for (j = 0; j <= i-1; j++)
		{
			printf("%s", " ");
			
		}
		for (k = 0; k <= 9 - i; k++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	printf("(D)\n");

	for (i =10; i>0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", " ");
		}
		for (k = 0; k <=10 - i; k++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}

	system("PAUSE");
	return 0;
}