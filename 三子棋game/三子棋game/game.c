#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row - 1; i++)
	{
		for (j = 0; j <= col - 1; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走:>");
	while (1)
   {
	scanf("%d%d", &x, &y);
	
		if (x > 0 && x <= row&&y > 0 && y <= col)
		{
			if (board[x-1][y-1] == ' ')
			{
				board[x-1][y-1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入:>");
					continue;
			}
		}
		else
		{
			printf("坐标不合法，请重新输入:>\n");
		}
	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
char CheckWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j - 1] == board[i][j] && board[i][j] == board[i][j + 1] && board[i][j] != ' ')
			{
				return board[i][j];
			}
			if (board[i - 1][j] == board[i][j] && board[i][j] == board[i + 1][j] && board[i][j] != ' ')
			{
				return board[i][j];
			}
			if (board[i - 1][j-1] == board[i][j] && board[i][j] == board[i + 1][j+1] && board[i][j] != ' ')
			{
				return board[i][j];
			}
			if (board[i - 1][j + 1] == board[i][j] && board[i][j] == board[i + 1][j - 1] && board[i][j] != ' ')
			{
				return board[i][j];
			}
		}
		if (IsFull(board, ROW, COL))
		{
			return 'q';
		}
	}
	return ' ';
}
char CheckWin2(char board[ROW][COL], int row, int col)//五子棋
{
	int x = 0;
	int y = 0;
	int i = 0;
	char temp = 0;
	for (x = 0; x < row; x++)
	{
		for (y = 0; y < col; y++)
		{
			//纵向
			for (i = 0; i < CHESS-1; i++) 
			{
				if (board[x][y] == board[x][y + i] && board[x][y] != ' ')
				{
					continue;
				}
				else
					break;
			}
			if (board[x][y] == board[x][y + i]&&board[x][y]!=' ')
			{
				return board[x][y];
			}

			//纵向
			for (i = 0; i < CHESS - 1; i++) 
			{
				if (board[x][y] == board[x + i][y] && board[x][y] != ' ')
				{
					continue;
				}
				else
					break;
			}
			if (board[x][y] == board[x + i][y] && board[x][y] != ' ')
			{
				return board[x][y];
			}

			//捺 斜向
			for (i = 0; i < CHESS - 1; i++)
			{
				if (board[x][y] == board[x + i][y + i] && board[x][y] != ' ')
				{
					continue;
				}
				else
					break;
			}
			if (board[x][y] == board[x + i][y + i] && board[x][y] != ' ')
			{
				return board[x][y];
			}

			//撇 斜向
			for (i = 0; i < CHESS - 1; i++)
			{
				if (board[x][y] == board[x - i][y + i] && board[x][y] != ' ')
				{
					continue;
				}
				else
					break;
			}
			if (board[x][y] == board[x - i][y + i] && board[x][y] != ' ')
			{
				return board[x][y];
			}
		}
	}
	if (IsFull(board, ROW, COL))
	{
		return 'q';
	}
	return ' ';
}