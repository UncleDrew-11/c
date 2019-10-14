#include "game.h"
void InitBoard(char MineBoard[ROWS][COLS], int row, int col, char set)
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
void Display(char board[ROWS][COLS], int row, int col)
{
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < row; i++)
		{
			for (j = 0; j < col; j++)
			{
				printf(" %c ", board[i][j]);
			}
			printf("\n");
		}
	}
}