#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a=0;
	float b, c,d,e;

	while (a == 0)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &a);
		if (a != -1)
		{
			printf("Enter hourly rate of the worker($00.00):");
			scanf_s("%f",&b);
			if (a > 40)
			{
				e = a - 40;
				d = 40 * b + e * 1.5*b;
				printf("Salary is $%.2f\n", d);
				a = 0;
			}
			else
			{
				c = a * b;
				printf("Salary is $%.2f\n", c);
				a = 0;
			}
		}
		else
		{
			a = 1;
		}

	}
	system("PAUSE");
	return 0;
}