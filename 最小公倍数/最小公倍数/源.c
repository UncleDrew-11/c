#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int i = 1;
	int ret = 0;
	while (scanf("%d %d", &a, &b) != EOF)
	{
		if (a < b)
		{
			if (b%a == 0)
			{
				printf("%d", b);
			}
			else
			{
				while (1)
				{
					ret = b*i;
					if (ret % a == 0)
					{
						printf("%d", ret);
						break;
					}
					i++;
				}
			}
		}
		if (a > b)
		{
			if (a%b == 0)
			{
				printf("%d", a);
			}
			else
			{
				while (1)
				{
					ret = a*i;
					if (ret % b == 0)
					{
						printf("%d", ret);
						break;
					}
					i++;
				}
			}
		}
	}
	return 0;
}