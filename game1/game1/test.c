#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//��ӡ�˵�
void menu()
{
	printf("********************\n");
	printf("*****1.��ʼ��Ϸ*****\n");
	printf("*****2.�˳���Ϸ*****\n");
	printf("********************\n");
	printf("�����ѡ��\n");
}
//game����
void game()
{
	//��ʼ������
	char board[ROW][COL];
	InitBoard(board,ROW,COL);
	//���̴�ӡ
	DisplayBoard(board, ROW, COL);
	
}
//������
int main()
{
	int select = 0;
	do
	{
		menu();
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�������������ѡ��");
			break;
		}
	} while (2!=select);
	return 0;
}