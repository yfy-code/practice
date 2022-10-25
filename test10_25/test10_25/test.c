#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//实现一个函数，判断一个数是不是素数
//利用上面实现的函数打印100到200之间的素数。
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (0 == n % i)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int j = 0;
//	for(j=101;j<=200;j++)
//	{
//	int out=is_prime(j);
//	if (out)
//		printf("%d ",j);
//	}
//	return 0;
//}

//实现函数判断year是不是闰年。
//int run(year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d",&year);
//	int out = run(year);
//	if (out == 1)
//		printf("是润年");
//	else
//		printf("不是润年");
//	return 0;
//}

//实现一个函数来交换两个整数的内容。
//swap(char* x, char* y)
//{
//	int c = 0;
//	c = *x;
//	*x = *y;
//	*y = c;
//}
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d",&a,&b);
//	printf("交换前a=%d b=%d\n", a, b);
//	swap(&a,&b);
//	printf("交换后a=%d b=%d\n", a, b);
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
mult_table(int i)
{
	int j = 0;
	int n = 0;
	for (j = 1; j<=i; j++)
	{
		for (n=1;n<=j;n++)
		{
			printf("%d*%d=%-2d  ", j, n, j * n);
		}
		printf("\n");
	}
}
int main()
{
	int i = 0;
	scanf("%d", &i);
	mult_table(i);
	return 0;
}