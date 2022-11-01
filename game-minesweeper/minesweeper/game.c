#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
//初始化
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
//打印
void PrintBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("---------扫雷游戏-----------\n");
	//打印列号
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
	printf("---------扫雷游戏-----------\n");
}
//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = EASY_COUNT;
	while (count)
	{
		//生产随机的下标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//周围雷的个数
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
//展开周围不是雷的区域
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
//判断是否获胜
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
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//1. 输入排查的坐标
	//2. 检查坐标处是不是雷
	   // (1) 是雷   - 很遗憾炸死了 - 游戏结束
	   // (2) 不是雷  - 统计坐标周围有几个雷 - 存储排查雷的信息到show数组，游戏继续
	int x = 0;
	int y = 0;
	int count = ROW * COL;
	while (count> EASY_COUNT)
	{
		//count = win_or_not(show, row, col);
		printf("请输入要排查的坐标:>");
		scanf("%d%d", &x, &y);//x--(1,9)  y--(1,9)

		//判断坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
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
			printf("坐标不合法，请重新输入\n");
		}
		count = win_or_not(show, row, col);
	}
	if (count =EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		PrintBoard(mine, row, col);
	}
}
