#define _CRT_SECURE_NO_WARNINGS
//包含头文件
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//宏定义常量
#define ROW 3
#define COL 3

//函数的声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Is_win(char board[ROW][COL], int row, int col);