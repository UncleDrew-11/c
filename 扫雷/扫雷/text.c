#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("**********************\n");
	printf("******1.  play********\n");
	printf("******0.  exit********\n");
	printf("**********************\n");
}
void game()
{
	char MineBoard[ROWS][COLS] = { 0 };
	char ShowBoard[ROWS][COLS] = { 0 };
	InitBoard(MineBoard, ROWS,COLS, '0');
	PutMine(MineBoard, ROW, COL);
	Display(MineBoard, ROW, COL);
	InitBoard(ShowBoard, ROWS, COLS, '*');
	Display(ShowBoard, ROW,COL);
    Saolei(MineBoard, ShowBoard, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{case 1:
			game();
			break;
		case 0:
			printf("程序退出\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}