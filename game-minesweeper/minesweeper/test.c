#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("********1.��ʼ��Ϸ********\n");
	printf("********2.�˳���Ϸ********\n");
	printf("**************************\n");
}

void game()
{
	//����Ķ���
	char mine[ROWS][COLS];
	char sweeper[ROWS][COLS];
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(sweeper, ROWS, COLS, '*');
	//��ӡ
	//PrintBoard(mine, ROW, COL);
	//PrintBoard(sweeper,ROW,COL);
	//������
	SetMine(mine, ROW, COL);
	/*PrintBoard(mine, ROW, COL);*/
	PrintBoard(sweeper, ROW, COL);
	//�Ų���
	FindMine(mine, sweeper, ROW, COL);

}
int main()
{
	int select = 0;
	srand((unsigned int)time(NULL));
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
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (select!=2);
	return 0;
}