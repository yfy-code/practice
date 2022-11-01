#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("**************************\n");
	printf("********1.开始游戏********\n");
	printf("********2.退出游戏********\n");
	printf("**************************\n");
}

void game()
{
	//数组的定义
	char mine[ROWS][COLS];
	char sweeper[ROWS][COLS];
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(sweeper, ROWS, COLS, '*');
	//打印
	//PrintBoard(mine, ROW, COL);
	//PrintBoard(sweeper,ROW,COL);
	//布置雷
	SetMine(mine, ROW, COL);
	/*PrintBoard(mine, ROW, COL);*/
	PrintBoard(sweeper, ROW, COL);
	//排查雷
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
			printf("退出成功\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (select!=2);
	return 0;
}