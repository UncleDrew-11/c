#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int find(int x)//º¯ÊýµÝ¹é
{
	if (x <= 2)
		return 1;
	else
		return(find(x - 1) + find(x - 2));
}
int find2(int y)//º¯Êýµü´ú
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (y > 2)
	{
		c = a + b;
		a = b;
		b = c;
		y--;
	}
	return c;
}
int main()
{
	int i = 0;
	int ret1 = 0;
	scanf("%d", &i);
	ret1 = find2(i);
	printf("%d\n", ret1);
	return 0;
}
