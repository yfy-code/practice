#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//比如:
//char arr[] = "abcdef";fbcde\0
//逆序之后数组的内容变成：fedcba
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);/*字符串长度*/
//	char tmp = *arr;/*字符串首元素*/
//	*arr = *(arr + len - 1);/*第一个赋值为最后*/
//	*(arr + len - 1) = '\0';/*最后赋值为结束*/
//	if (strlen(arr + 1) >= 2)/*arr是指针变量，strlen(arr+1)是数组后移一位的长度*/
//		reverse_string(arr + 1);
//	*(arr + len - 1) = tmp;/*最后赋值为首元素*/
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s",arr);
//	return 0;
//}
//本题总结：递归的思想真的很巧妙，值得反复推敲琢磨。


//计算一个数的每位之和（递归实现）
//【题目内容】
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//int DigitSum(int i)
//{
//	if (i <= 9)
//		return i;
//	else
//		return i % 10 + DigitSum(i / 10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int s=DigitSum(i);
//	printf("%d", s);
//	return 0;
//}


//【题目名称】
//递归实现n的k次方
//【题目内容】
//编写一个函数实现n的k次方，使用递归实现。
//int square(int n,int k)
//{
//	if (k == 1)
//		return n;
//	else
//		return n * square(n,k-1);
//}
//int main()
//{
//	int n = 0,k=0;
//	scanf("%d %d", &n,&k);
//	int i=square(n,k);
//	printf("%d", i);
//	return 0;
//}
//上面两个题很顺利的做出来了，但是感觉还是不熟练，有点似懂非懂的感觉，还是要练习！

//【题目名称】
//计算斐波那契数
//【题目内容】
//递归和非递归分别实现求第n个斐波那契数
//例如：1 1 2 3 5 8 13
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
int feibo(int i)
{
	if (i >= 3)
		return feibo(i - 1) + feibo(i - 2);
	else
		return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int out = feibo(n);
	printf("%d", out);
	return 0;
}