#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 1000;i++)
//	{
//		int a = 0;
//		int b = 0;
//		int c = 0;
//		a = i / 100;
//		b = (i - 100*a)/10;
//		c = i % 10;
//		if (i == (a*a*a) + (b*b*b) + (c*c*c))
//			printf("%d\n\n", i);
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				int a = 0;
				a = 100 * i + 10 * j + k;
				if (a == (i*i*i) + (j*j*j) + (k*k*k))
					printf("%d\n", a);

			}
		}
	}
	return 0;
}