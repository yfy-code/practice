#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��������ż��˳��
//����Ŀ���ݡ�
//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ��������
//���е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�
//odd_evensort(int*arr,int size)
//{
//int i = 0;
////int count = 0;//���������������ĸ���
////for (i = 0; i < size; i++)
////{
////	if (arr[i] % 2 != 0)
////		count++;
////}
//for (i = 0; i < size; i++)
//{
//	//if (arr[i] % 2 != 0)//�����������ö�
//	//{
//	//	count--;
//	//}
//	if(arr[i]%2==0)//��ż����Ҫ�ͺ���Ļ�λ��
//	{
//		int emp = 0;
//		int j = 0;
//		for (j = 0; j < size - i + 1; j++)//Ѱ�Һ������������λ��
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
//	//if (count == 0)//���countΪ0��˵��������������ǰ���ˡ�
//	//	break;
//	//��count���������ټ���ѭ������������úܶ࣬���񲢲����������ʱ�䣬���ڲ��Ǻ������
//}
//}
//int main()
//{
//	int arr[] = { 11,32,45,22,42,53,21,52};
//	int size = sizeof(arr) / sizeof(arr[0]);
//	odd_evensort(arr,size);
//	return 0;
//}

//����Ŀ���ơ�
//strlenʵ��
//����Ŀ���ݡ�
//ģ��ʵ�ֿ⺯��strlen
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

//strcpyʵ��
//����Ŀ���ݡ�
//ģ��ʵ�ֿ⺯��strcpy
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