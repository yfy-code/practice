#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
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

//��ӡ���������Ƶ�����λ��ż��λ
//����Ŀ���ݡ�
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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


//ͳ�ƶ�������1�ĸ���
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
//������д�ľ��ǲ��룬����1�ĸ���ֱ�������
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


//����������������������ʱ������
//����������ʱ������������������������
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