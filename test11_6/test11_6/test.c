#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//计算求和
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
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


//打印水仙花数
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
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


//使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
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
