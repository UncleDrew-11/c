#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("**************\n");
	printf("****1.play****\n");
	printf("****0.exit****\n"); 
	printf("**************\n");
}
void game()
{
	int ret = 0;
	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//PlayerMove(board, ROW, COL);
	//ChackWin(board, ROW, COL);
	//ComputerMove(board, ROW, COL);
	//ChackWin(board, ROW, COL);

}
int main()
{
	int input;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			printf("\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误重新输入\n");
			break;
		}
	} while (input);
	return 0;
}