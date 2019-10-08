#include<stdio.h>
void print(int n)
{
	if (n < 10)
	{
		printf("%d ", n);
	}
	else
	{
		print(n / 10);
		printf("%d ", n % 10);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}