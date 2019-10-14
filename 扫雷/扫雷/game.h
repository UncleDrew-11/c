#include<stdio.h>
#define ROWS 11
#define COLS 11
#define ROW ROWS -2
#define COL COLS -2

void InitBoard(char board[ROWS][COLS], int row, int col, char set);
void Display(char board[ROWS][COLS], int row, int col);