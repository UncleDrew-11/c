#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret=%d\n", ret);
//}

int main()
{
	int i = 0;
	int ret = 1;
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = ret*i;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
}