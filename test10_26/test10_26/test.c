#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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

//�ݹ�ʵ����n�Ľ׳ˣ���������������⣩
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

//�ݹ�ʵ��strlen
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