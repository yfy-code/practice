#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//ʵ��һ���������ж�һ�����ǲ�������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
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

//ʵ�ֺ����ж�year�ǲ������ꡣ
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
//		printf("������");
//	else
//		printf("��������");
//	return 0;
//}

//ʵ��һ�������������������������ݡ�
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
//	printf("����ǰa=%d b=%d\n", a, b);
//	swap(&a,&b);
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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