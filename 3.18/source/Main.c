#include <stdio.h>
#include<stdlib.h>

int main(void)
{
	float a = 0;
	float b, c;
	while (a == 0)
	{

		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &a);
		if (a != -1)
		{
			b = 200 + a * 0.09;
			printf("Salary is:%.2f\n", b);
			a = 0;

		}
		else
		{
			a = 1;
		}
	}
	system("PAUSE");
	return 0;
}