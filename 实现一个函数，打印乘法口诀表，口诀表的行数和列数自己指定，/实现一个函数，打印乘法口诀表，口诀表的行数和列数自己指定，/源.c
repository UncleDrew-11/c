#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int ChengFaBiao(int x,int y)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 1; i <= x; i++)
	{
		if (y < i)
		{
			for (j = 1; j <= y; j++)
			{
				k = i * j;
				printf("%d*%d=%d  ", i, j, k);
			}
			printf("\n");
		}
		else 
		for (j = 1; j <= i; j++)
		{
			k = i * j;
			printf("%d*%d=%d  ", i, j, k);
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int hang = 0;
	int lie = 0;
	scanf("%d%d", &hang,&lie);
	ChengFaBiao(hang,lie);
	return 0;

}