#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void menu()
{
	printf("****************\n");
	printf("*****1.play*****\n");
	printf("*****0.exist****\n");
	printf("****************\n");
}
void game()
{
	int ret = 0;
	ret = rand() % 100 + 1;   /*在调用rand之前要使用srand*/
	int guess = 0;
	while (1)
	{
		printf("please write down\n");
		scanf("%d", &guess);   
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess>ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));   /*通过时间戳生成随机值*/
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("out of game\n");
		default:
			printf("error\n");
			break;
		}
	} while (input);
	return 0;
}