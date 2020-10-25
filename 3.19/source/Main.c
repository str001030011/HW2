#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a = 0;
	float b, c, d;
	while (a == 0)
	{
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &a);
		if (a != -1)
		{
			printf("Enter interest rate:");
			scanf_s("%f", &b);
			printf("Enter term of the loan in days:");
			scanf_s("%f", &c);
			d = a * b*c / 365;
			printf("The interest charge is$%.2f\n", d);
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