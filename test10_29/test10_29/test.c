#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//ð������
void bubble_sort(int*arr,int sz)
{
	int i = 0;
	for (i = 0; i < sz-1; i++)
	{
		int a = 0;
		int j = 0;
		for (j = 0; j<sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				a = 1;
			}
		}
		if (a == 0)/*���a=0��˵��aû�䣬���ڸô�������û����if��䣬�Ѿ��ź�˳��������*/
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 8,7,5,4,3,9,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);
	return 0;
}