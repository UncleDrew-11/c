#include <stdio.h>
int erfen(int arr[], int k,int sz)  //要加int sz
{
	int right = sz - 1;
	int left = 0;
	int mid = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;   //int mid的定义 要在循环体内进行
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
			break;
		}
    }
	if (left > right)
	{
		return -1;
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = (sizeof arr / sizeof arr[0]);   // 函数内的变量要在主函数内定义
	int k = 7;
	int ret = 0;
	ret = erfen(arr, k,10);   //sz要放进函数
	if (ret == -1)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了，下标是%d\n", ret);
	}

	return 0;
}