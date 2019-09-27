#include <stdio.h>
int main()
{
	int arr1[5] = { 1, 2, 3, 4, 5};
	int arr2[5] = { 6, 7, 8, 9, 10 };
	int temp = 0;
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		temp    = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}

	return 0;
}
