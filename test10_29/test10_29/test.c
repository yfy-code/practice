#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ð������
//void bubble_sort(int*arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int a = 0;
//		int j = 0;
//		for (j = 0; j<sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				a = 1;
//			}
//		}
//		if (a == 0)/*���a=0��˵��aû�䣬���ڸô�������û����if��䣬�Ѿ��ź�˳��������*/
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 8,7,5,4,3,9,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	return 0;
//}
//����������������ݣ�����һ����
void exchange(int* arr1, int* arr2,int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
}
int main()
{
	int arr1[10] = { 1,3,1,2,5,1,8,1,9,6 };
	int arr2[10] = { 9,0,7,6,7,9,4,1,0};
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	exchange(arr1,arr2,sz);
	return 0;
}