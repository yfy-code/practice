#define _CRT_SECURE_NO_WARNINGS
//����ͷ�ļ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//�궨�峣��
#define ROW 3
#define COL 3

//����������
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Is_win(char board[ROW][COL], int row, int col);