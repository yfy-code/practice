#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//��ʼ��
void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}
//��ӡ
void PrintBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------ɨ����Ϸ-----------\n");
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("---------ɨ����Ϸ-----------\n");
}
//������
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//����10����
	int count = EASY_COUNT;
	while (count)
	{
		//����������±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//��Χ�׵ĸ���
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
//չ����Χ�����׵�����
void BoomFind(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (show[x][y] != '*')
		return;
	int count = get_mine_count(mine, x, y);
	if (count != 0)
	{
		show[x][y] = count + '0';
		return;
	}
	else if(count==0)
	{
		show[x][y] = '0';
		BoomFind(mine, show, x - 1, y);
		BoomFind(mine, show, x - 1, y - 1);
		BoomFind(mine, show, x, y - 1);
		BoomFind(mine, show, x + 1, y - 1);
		BoomFind(mine, show, x + 1, y);
		BoomFind(mine, show, x + 1, y + 1);
		BoomFind(mine, show, x, y + 1);
		BoomFind(mine, show, x - 1, y + 1);
	}
}
//�ж��Ƿ��ʤ
int win_or_not(char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int count = 0;
	for (x = 1; x <= row; x++)
	{
		int y = 0;
		for (y = 1; y <= col; y++)
		{
			if (show[x][y] == '*')
				count++;
		}
	}
	return count;
}
//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1. �����Ų������
	//2. ������괦�ǲ�����
	   // (1) ����   - ���ź�ը���� - ��Ϸ����
	   // (2) ������  - ͳ��������Χ�м����� - �洢�Ų��׵���Ϣ��show���飬��Ϸ����
	int x = 0;
	int y = 0;
	int count = ROW * COL;
	while (count> EASY_COUNT)
	{
		//count = win_or_not(show, row, col);
		printf("������Ҫ�Ų������:>");
		scanf("%d%d", &x, &y);//x--(1,9)  y--(1,9)

		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				PrintBoard(mine, row, col);
				break;
			}
			else
			{
				BoomFind(mine, show, x, y);
				PrintBoard(show, row, col);
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
		count = win_or_not(show, row, col);
	}
	if (count =EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		PrintBoard(mine, row, col);
	}
}
