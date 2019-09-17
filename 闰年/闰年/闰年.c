#include <stdio.h>
//ÁĞ³öÈòÄê
int main()
{
	int year = 1000;
	while (year <= 2000)
	{
		if (year % 4 == 0)
		{
			if (year % 100 != 0)
			{
				printf("%d ", year);
			}
		}
		if (year % 400 == 0)
		{
			printf("%d ", year);
		}
		year++;
	}
	return 0;
}