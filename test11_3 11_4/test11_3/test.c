#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//输入两个整数，求两个整数二进制格式有多少个位不同
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &a, &b);
//	for (i = 0; i < 32; i++)
//	{
//		if ((a & (1 << i)) != (b & (1 << i)))
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//打印整数二进制的奇数位和偶数位
//【题目内容】
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int a = 149;
//	int i = 0;
//	/*printf("%d", 1 << 32);*/
//	//printf("%d", a & 0);
//	for (i = 31; i >= 0; i-=2)
//	{
//		if ((a & (1 << i)) != 0)
//			printf("%d ", 1);
//		else
//			printf("%d ", 0);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		if ((a & (1 << i)) != 0)
//			printf(" %d", 1);
//		else
//			printf(" %d", 0);
//	}
//	return 0;
//}
//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	Printbit(149);
//	return 0;
//}


//统计二进制中1的个数
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
//计算机中存的就是补码，求补码1的个数直接求就行
//int NumberOf1(int n)
//{
//	int i = 0; 
//	int count = 0;
//		for (i = 0; i < 32; i++)
//		{
//			if (((n >> i) & 1) == 1)
//			count++;
//		}
//		return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int out= NumberOf1(a);
//	printf("%d", out);
//	return 0;
//}


//交换两个变量（不创建临时变量）
//不允许创建临时变量，交换两个整数的内容
int main()
{
	int a = 22;
	int b = 33;
	a = a ^ b;
	b = a ^ b;
	a ^= b;
	printf("%d %d", a, b);
	return 0;
}