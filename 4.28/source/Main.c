#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, d,t=0;
	float b, c,e,f,g,h,l,m,n,x,z;
	while (t==0)
	{   
		printf("manager salary is:");
		scanf_s("%d", &a);
		printf("fixed hourly money is:");
		scanf_s("%f", &b);
		printf("money for each of items :");
		scanf_s("%f", &c);
		printf("If you want to leave enter -1:\n");
		printf("Please enter your code:");
		scanf_s("%d", &d);

			if (d != -1)
			{
				switch (d)
				{
				case 1:
					printf("You are a manager \n");
					printf("Your slary is %d dollars\n", a);
				break;
				case 2:
					printf("You are a Hourly worker \n");
					printf("Your working hours is");
					scanf_s("%f", &e);
					if (e > 40)
					{
						f = e - 40;
						g = f * b*1.5;
						h = 40 * b;
						l = g + h;
						printf("Your slary is %.2f dollars\n", l);
					}
					else
					{
						f = e * b;
						printf("Your slary is %.2f dollars\n", f);
					}
				break;
				case 3:
					printf("You are a commission worker \n");
					printf("Your gross weekly sales is");
					scanf_s("%f", &m);
					n = 250 + m * 0.057;
					printf("Your slary is %.2f dollars\n", n);
				break;
			case 4:
				printf("You are a pieceworker \n");
				printf("How many products do you make :");
				scanf_s("%f", &x);
				z = x * c;
				printf("Your slary is %.2f dollars\n", z);
			default:
				break;
				}
			}
		else
		{
			t = 1;
		}
	}

	system("PAUSE");
	return 0;
}