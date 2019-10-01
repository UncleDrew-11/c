#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int init(int *arr[],int sz) //³õÊ¼»¯º¯Êý
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		scanf("%d", & arr[i]);
	}
	return 0;
}
int empty(int *arr[],int sz)
{
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
	return 0;
}
int reverse(int *arr[], int sz)
{
	int i = 0;
	int left = 0;
	int right = sz-1;
	int mid = (left + right) / 2;
	for (i = 0; i <= mid; i++)
	{
		int j = 0;
		j = arr[i];
		arr[i] = arr[right-i];
		arr[right-i] = j;
	}
	return 0;
}
int main()
{
	int i = 0;
	int arr[5] = { 4, 3, 2, 1, 0 };
	int sz = 0;
	sz = sizeof arr / sizeof arr[0];

	init(arr, sz);
	{
		for (i = 0; i < sz; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	
	empty(arr, sz);
	{
		for (i = 0; i < sz; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	
	reverse(arr, sz);
	{
		for (i = 0; i < sz; i++)
		{
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	return 0;
}