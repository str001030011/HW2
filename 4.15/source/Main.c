#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float a, b, c, d, e = 1,f,i;
	for ( i = 0.1; i <=0.121; i = i + 0.005)
	{
		a = 1 + i; //----(1+n)
		
		for (b = 0; b < 15; b++)
		{
			e = e *a;
		}
		
		f = 5000 * e;
		e = 1;
		printf("%.2f\n", f);

	}
	system("PAUSE");
	return 0;
}