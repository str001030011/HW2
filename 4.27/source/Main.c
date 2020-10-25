#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a, b, c, d, e, f;
	for (a = 1; a < 500; a++)
	{
		for (b = 1; b < 500; b++)
		{
			for (c = 1; c < 500; c++)
			{
				if (c*c== (a * a + b * b))
				{
					printf("%d %d %d\n", a, b, c);
				}

				
			}
		}
	}
	system("PAUSE");
	return 0;
}