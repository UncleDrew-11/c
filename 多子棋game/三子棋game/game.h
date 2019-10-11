#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define ROW 10
#define COL 10
#define CHESS 5
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char CheckWin(char board[ROW][COL], int row, int col); 
int IsFull(char board[ROW][COL], int row, int col);