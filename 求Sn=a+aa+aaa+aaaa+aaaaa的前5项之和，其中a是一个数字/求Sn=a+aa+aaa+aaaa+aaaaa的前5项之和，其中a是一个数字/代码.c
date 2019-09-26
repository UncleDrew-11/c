#include <stdio.h>
int main()
{
	int k = 7;
	int ret = 0;
	int i = 1;
	int sum = 0;
	for (i = 1; i <= 10000;i=i*10)
	{
		ret = ret + (i*k);
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}