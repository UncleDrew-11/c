#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int change(int* x, int* y)
{
	int z = 0;
	z = *x;
	*x = *y;
	*y = z;
	return *x, *y;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	change(&a, &b);
	printf("%d %d", a, b);
	return 0;
}