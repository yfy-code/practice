#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//递归方式实现打印一个整数的每一位
//void print(unsigned int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d",&i);
//	print(i);
//	return 0;
//}

//递归实现求n的阶乘（不考虑溢出的问题）
//long long factorial(in)
//{
//	if(in>1)
//	{
//		in = in * factorial(in - 1);
//	}
//	return in;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int out= factorial(i);
//	printf("%d", out);
//	return 0;
//}

//递归实现strlen
int my_strlen(char* str)
{
	if ('\0' != *str)
		return 1 + my_strlen(1 + str);
	return 0;
}
int main()
{
	char arr[] = {"yfy"};
	int len = my_strlen(arr);
	printf("%d", len);
	return 0;
}