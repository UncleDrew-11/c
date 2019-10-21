#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	while (scanf("%d", &n)!=EOF)
	{
		int a = 0;
		int b = 1;
		int c = 1;
		int left = 0;
		int right = 0;
		while (1)
		{
			a = b;
			b = c;
			c = a + b;
			if (c < n)
			{
				right = n - c;
			}
			else
			{
				left = c - n;
				break;
			}
		}
		if (right >= left)
		{
			printf("%d", left);
		}
		else
		{
			printf("%d", right);
		}
	}
	return 0;
}