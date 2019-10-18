//一个函数返回参数二进制中 1 的个数
#include <stdio.h>

int count_one_bits(unsigned int value)
{
	//2
	//00000011
	//00000001
	//00000001
	int count = 0;
	int ret = 0;
	while (value != 0)
	{
		ret = value & 1;
		count = count + ret;
		value >>= 1;
	}
	return count;
}
int main()
{
	int a = 2048;
	int ret = 0;
	ret = count_one_bits(a);
	printf("%d\n", ret);
	return 0;
}