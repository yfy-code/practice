#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//调整奇数偶数顺序
//【题目内容】
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中
//所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。
//odd_evensort(int*arr,int size)
//{
//int i = 0;
////int count = 0;//计算数组中奇数的个数
////for (i = 0; i < size; i++)
////{
////	if (arr[i] % 2 != 0)
////		count++;
////}
//for (i = 0; i < size; i++)
//{
//	//if (arr[i] % 2 != 0)//是奇数，不用动
//	//{
//	//	count--;
//	//}
//	if(arr[i]%2==0)//是偶数，要和后面的换位置
//	{
//		int emp = 0;
//		int j = 0;
//		for (j = 0; j < size - i + 1; j++)//寻找后面的奇数，换位置
//		{
//			if (arr[i + j] % 2 != 0)
//			{
//				emp = arr[i];
//				arr[i] = arr[i + j];
//				arr[i + j] = emp;
//				//count--;
//				break;
//			}
//		}
//	}
//	//if (count == 0)//如果count为0，说明所有奇数都在前面了。
//	//	break;
//	//用count计数，会少几次循环，但代码会变得很多，好像并不会减少运行时间，现在不是很清楚。
//}
//}
//int main()
//{
//	int arr[] = { 11,32,45,22,42,53,21,52};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	odd_evensort(arr,size);
//	return 0;
//}

//【题目名称】
//strlen实现
//【题目内容】
//模拟实现库函数strlen
//int my_strlen(char*arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		arr++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "qwerdf";
//	int out=my_strlen(arr);
//	printf("%d", out);
//}

//strcpy实现
//【题目内容】
//模拟实现库函数strcpy
#include<string.h>
my_strcpy(char*ar1,char*ar2)
{
	while (*ar2 != 0)
	{
		*ar1 = *ar2;
		ar2++;
		ar1++;
	}
	*ar1 = *ar2;

}
int main()
{
	char arr1[10] = "abcdeefg";
	char arr2[10] = "asdfgh";
	my_strcpy(arr1, arr2);
	printf("%s", arr1);
}