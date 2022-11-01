#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW  9
#define COL  9
#define ROWS  ROW+2
#define COLS  COL+2
#define EASY_COUNT 10

//��ʼ��
void InitBoard(char arr[ROWS][COLS], int rows, int cols, char in);
//��ӡ
void PrintBoard(char arr[ROWS][COLS], int row, int col);
//������
void SetMine(char arr[ROWS][COLS], int row, int col);
//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

