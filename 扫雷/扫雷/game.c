#include "game.h"
void InitBoard(char MineBoard[ROWS][COLS], int row, int col, char set)//≥ı ºªØ∆Â≈Ã
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
void Display(char board[ROWS][COLS], int row, int col)//¥Ú”°∆Â≈Ã
{
	{
		int i = 0;
		int j = 0;
		printf("   ");
		for (j = 0; j < col ; j++)//¡––Ú∫≈
		{
			printf("%d   ",j+1);

		}
		printf("\n");
		for (i = 1; i <= row; i++)
		{
			printf("%d", i);//–––Ú∫≈
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
void PutMine(char board[ROWS][COLS], int row, int col)//≤º÷√¿◊
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
void Saolei(char board[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	   
}