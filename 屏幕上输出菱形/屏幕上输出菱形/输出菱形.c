#include <stdio.h>
int main()
{
	char arr1[] = "**************************";
	char arr2[] = "                          ";
	char arr3[] = "                          ";
	int a = 0;
	int b = strlen(arr1) - 1;
	int mid = (a + b) / 2;
	int left = 0;
	int right = 0;
	left = mid;
	right = mid;
	while (left)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left--;
		right++;
	}
	while (left <= right)
	{
		arr2[left] = arr3[left];
		arr2[right] = arr3[right];
		printf("%s\n", arr2);
		left++;
		right--;
	}
	return 0;
}