#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;
	for (i = 1; i <= 99; i=i+2)
	{
		sum = sum + (1.0 / (i*(i+1)));
	}
	printf("sum=%lf\n", sum);
	return 0;
}