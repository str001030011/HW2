#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	for (i = 1; i < 10; i++)
	{
		if (i < 6)
		{
			for(j=1;j<6-i;j++)
			{
				printf(" ");
			}
			for (j = 0; j < i * 2 - 1; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (j = 1; j < i - 4; j++)
			{
				printf(" ");
			}
			for (j = 18; j > i * 2 - 1; j--)
			{
				printf("*");
			}
		}
		
		printf("\n");
	}
	system("PAUSE");
	return 0;
}