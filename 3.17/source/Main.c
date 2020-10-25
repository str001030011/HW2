#include<stdio.h>
#include<stdlib.h>

int main(void)
{  
	int a=0;
	float  b, c, e, f,g;
	while (a == 0)
	{
		printf_s("Enter account number(-1 to end):");
		scanf_s("%d", &a);
		if (a != -1)
		{
			printf_s("Enter beginning balance:");
			scanf_s("%f", &b);
			printf_s("Enter total charges:");
			scanf_s("%f", &c);
			printf_s("Enter total credits:");
			scanf_s("%f", &g);
			printf_s("Enter credit limit:");
			scanf_s("%f", &e);
			f = b + c - g;
			if (f > e)
			{
				printf("Account:%d\n", a);
				printf("Credit limit:%.2f\n", e);
				printf("Balance:%.2f\n", f);
				printf("Credit Limit Exceeded.\n");
			}
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