#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW  9
#define COL  9
#define ROWS  ROW+2
#define COLS  COL+2
#define EASY_COUNT 10

//初始化
void InitBoard(char arr[ROWS][COLS], int rows, int cols, char in);
//打印
void PrintBoard(char arr[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char arr[ROWS][COLS], int row, int col);
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

