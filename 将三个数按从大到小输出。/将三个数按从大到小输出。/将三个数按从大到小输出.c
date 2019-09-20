#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	printf("请输入三个数：");
//	scanf("%d,%d,%d", &a, &b, &c);
//	if (a>=b&&a>=c)
//	{
//		if (b >= c)
//		{
//			printf("%d%d%d", a, b, c);
//		}
//		else
//		{
//			printf("%d%d%d", a, c, b);
//		}
//	}
//	if (b>=a&&b>=c)
//	{
//		if (a >= c)
//		{
//			printf("%d%d%d", b, a, c);
//		}
//		else
//		{
//			printf("%d%d%d", b, c, a);
//		}
//	}
//	if (c>=b&&c>=a)
//	{
//		if (b >= a)
//		{
//			printf("%d%d%d", c, b, a);
//		}
//		else
//		{
//			printf("%d%d%d", c, a, b);
//		}
//	}
//	
//	return 0;
//}
int main()
{
	int a[3] = { 0 };
	int i, j, k;
	for (i = 0; i<3; i++)
	{
		scanf("%d",&a[i]);
	}
	for (j = 0; j < 2; j++)
	{
		for (i = 0; i <= 2 - j; i++)

		{                                       
			if (a[i] < a[i + 1])
			{
				k = a[i];
				a[i] = a[i + 1];
				a[i + 1] = k;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}