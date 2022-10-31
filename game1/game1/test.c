#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//打印菜单
void menu()
{
	printf("********************\n");
	printf("*****1.开始游戏*****\n");
	printf("*****2.退出游戏*****\n");
	printf("********************\n");
	printf("请进行选择\n");
}
//game函数
void game()
{
	//初始化棋盘
	char board[ROW][COL];
	char ret;
	InitBoard(board,ROW,COL);
	//棋盘打印
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL); 
		DisplayBoard(board, ROW, COL);
		//判断是否获胜
		ret = Is_win(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Is_win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
}
//主函数
int main()
{
	srand((unsigned int)time(NULL));
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
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新选择");
			break;
		}
	} while (2!=select);
	return 0;
}