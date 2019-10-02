#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int judge(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0) || (year % 100 == 0));
}
int main()
{
	int num = 0;
	scanf("%d",&num);
	if (judge(num))
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
	return 0;
}