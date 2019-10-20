#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void reverse(char str[],int left,int right)
{
	int i = 0;
	char temp = 0;
	while (left <= right)
	{
		temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	char str[100] = { "\0" };
	while (gets(str) != NULL)
	{
		int i = 0;
		int cut = 0;
		int left = 0;
		int right = strlen(str) - 1;
		reverse(str,left,right);
		//Êä³öµ¹ÖÃºóµÄ×Ö·û´®£¬¼ìÑé
		for (i = 0; i <= strlen(str) - 1; i++)
		{
			printf("%c", str[i]);
		}
		printf("\n");
		left = 0;
		for (i = 0; i < strlen(str); i++)
		{
			if (str[i] == ' ' )
			{
				right = i-1;
				reverse(str, left, right);
				left = right + 2;
			}
			if (i == strlen(str) - 1)
			{
				right = i;
				reverse(str, left, right);
			}
		}
		for (i = 0; i <= strlen(str); i++)
		{
			printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}