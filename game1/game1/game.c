#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitBoard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	int j = 0;
	for (i=0;i<row;i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0; 
	//��ӡ
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				
					printf("---");
					if(j<col-1)
					printf("|");
				
			}
		}
		printf("\n");
	}
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row + 1 && y >= 1 && y <= col + 1 && board[x - 1][y -1] == ' ')
		{
			board[x-1][y-1] = '*';
			break;
		}
		else
			printf("����������\n");
	}
	printf("����ߣ�\n");
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = rand() % row, y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
	printf("�����ߣ�\n");
}

int Is_full(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 1;//δ��
		}
	}
	return 0;
}

char Is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;

	//�ж��Ƿ���
	//int x = Is_full(board, row, col);
	//if (x == 0)
	//	return 'N';
	//else
	//	return 'C';
	//������������������д��ֻ�᷵��������δ��������Ĳ������жϣ����Լ����Ѿ�������ͬ�Բ��������Ϸ��ֱ�����˲Ž�����
	int x = Is_full(board, row, col);
	if (x == 0)
		return 'N';
	//�ж����Ƿ����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	//�ж����Ƿ����
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[i][i] != ' ')
			return board[0][i];
	}
	//�ж϶Խ����Ƿ����
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		return 'C';

}