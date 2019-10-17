#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define ROW 9
#define COL 9
#define ROWS ROW +2
#define COLS COL +2
#define MINE 9

void InitBoard(char board[ROWS][COLS], int row, int col, char set);
void Display(char board[ROWS][COLS], int row, int col);
void PutMine(char board[ROWS][COLS], int row, int col);
void Saolei(char MineBoard[ROWS][COLS], int ShowBoard[ROWS][COLS], int rol, int col);
int NearMine(char mine[COLS][ROWS], int x, int y);
void NoMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y);
int CountBlank(char show[ROWS][COLS], int row, int col);