#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int max = arr[0];
	int i = 0;
	while (i <= 9)
	{
		if (max >= arr[i])
			{
				i++;
			}
		else
		{
			max = arr[i];
		}
	}
	printf("%d", max);
	return 0;
}