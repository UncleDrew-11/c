#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void InitBoard(char MineBoard[ROWS][COLS], int row, int col, char set)//初始化棋盘
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			MineBoard[i][j] = set;
		}
	}
}
void Display(char board[ROWS][COLS], int row, int col)//打印棋盘
{
	{
		int i = 0;
		int j = 0;
		printf("   ");
		for (j = 0; j < col ; j++)//列序号
		{
			printf("%d   ",j+1);

		}
		printf("\n");
		for (i = 1; i <= row; i++)
		{
			printf("%d", i);//行序号
			printf(" ");
			for (j = 1; j <= col; j++)
			{
				printf(" %c ", board[i][j]);
				if (j <= col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
			printf("  ");
			for (j = 1; j <= col; j++)
			{
				if (i <= row - 1)
				{
					printf("---");
					if (j <= col - 1)
					{
						printf("|");
					}
				}
			}
			printf("\n");

		}
	}
}
void PutMine(char board[ROWS][COLS], int row, int col)//布置雷
{
	int x = 0;
	int y = 0;
	int count = MINE;
	while (count)
	{
		x = rand() % MINE + 1;
		y = rand() % MINE + 1;
		if (x>0 && x <= row && y>0 && y <= col && board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int NearMine(char mine[COLS][ROWS], int x, int y)
{
	return mine[x-1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
//void NoMine(char mine[ROWS][COLS], char show[ROWS][COLS],int x,int y)
//{
//	NearMine(mine, x, y);
//}
void Saolei(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col)
{
	int x = 0;
	int y = 0;
	int flag = ROW*COL - MINE;
	printf("请输入扫雷坐标:>");
	scanf("%d%d", &x, &y);
	while (flag)
	{
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '0' && show[x][y] == '*')
			{
				int ret = NearMine(mine, x, y);
				show[x][y] = ret + '0';
				Display(show, ROW, COL);
			}
			if (mine[x][y] == '1' && show[x][y] == '*')
			{
				show[x][y] = 'S';
				Display(show, ROW, COL);
				printf("你被炸死了\n");
			}
		}
		else
		{
			printf("坐标非法请重新输入\n");
		}
	}
}