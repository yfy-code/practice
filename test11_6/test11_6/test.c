#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//�������
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
//int sum(int i)
//{
//	int a = 0;
//	int b = i;
//	int sum1=0;
//	for (a = 0; a <= 4; a++)
//	{
//		sum1 += i;
//		i =  b+ i * 10;
//	}
//	return sum1;
//}
//int main()
//{
//	int i = 2;
//	int ret=sum(i);
//	printf("%d",ret);
//	return 0;
//}


//��ӡˮ�ɻ���
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
//void narcissistic_number()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int x = i;
//		int count = 1;
//		int sum = 0;
//		while (x / 10)
//		{
//			count++;
//			x /= 10;
//		}
//		x = i;
//		while (x)
//		{
//			sum += pow(x%10,count);
//			x /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	narcissistic_number();
//	return 0;
//}


//ʹ��ָ���ӡ��������
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
void DisplayArr(int* arr,int str)
{
	int i = 0;
	for (i = 0; i < str; i++)
	{
		printf("%d ", *(arr+i));
	}
}
int main()
{
	int arr[] = {1,3,1,2,5,1,8,1,9,6};
	int str = sizeof(arr) / sizeof(arr[0]);
	DisplayArr(arr,str);
	return 0;
}
