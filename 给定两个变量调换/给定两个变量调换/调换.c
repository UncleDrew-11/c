#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
int main()
{
	int a = 1, b = 2;
	a = a^b;
	//a=0010=2
	//b=0011=3
	//a=0001
	b = a^b;
	//a=0001
	//b=0011
	//b=0010=2
	a = a^b;
	//0001
	//0010
	//0011=3
	printf("a=%d b=%d", a, b);
	return 0;
}