#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
//猜数字游戏
//1、ui
//2、产生随机数

//void menu()
//{
//	printf("********************\n");
//	printf("****1-开始游戏******\n");
//	printf("****0-退出游戏******\n");
//	printf("********************\n");
//}
//void game()
//{
//	int input = 0;
//	int num= rand()%100+1;
//	printf("请输入数字：");
//	while (1)
//	{
//		scanf("%d", &input);
//		if (input < num)
//		{
//			printf("猜小了\n");
//		}
//		else if (input > num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜中了,该数为%d\n",num);
//			break;
//		}
//		
//	}
//}
//int main()
//{
//	int select = 0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("请选择：");
//		scanf("%d",&select);
//		switch (select)
//		{
//		case 1:
//			{
//			game();
//			break;
//			}
//		case 0:
//			{
//			printf("退出游戏");
//			break;
//			}
//		default:
//			printf("选择错误，请重新选择");
//			break;
//		}
//
//	
//	} while (select);
//	return 0;
//}
//封装很重要

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d",&a);
	scanf("%d",&b);
	while (c=a%b) 
	{
		a = b;
		b = c;
	}
	printf("最大公约数为%d",b);
	return 0;
}
