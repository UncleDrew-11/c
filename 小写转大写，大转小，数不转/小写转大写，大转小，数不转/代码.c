#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char a = 0 ;
	scanf("%c", a);
	if (a >= 'A' && a <= 'Z')
	{
		a = a + 32;
		printf("%\n", a);
	}
	else if (a>='a' && a <= 'z')
	{
		a = a - 32;
		printf("%c\n", a);
	}
	else
	{
		printf("%c\n", a);
	}
	return 0;
}