#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
//�򵥵�������֤
//int main()
//{
//	char password[10] = { 0 };
//	char repassword[10] = { 0 };
//	printf("���������룺");
//	scanf("%s",password);
//	printf("����Ϊ��%s\n",password);
//	printf("��ȷ�����룺");
//	scanf("%s",repassword);
//	while(1)
//	{
//		if (*repassword == *password)
//		{
//			printf("������֤�ɹ���");
//			break;
//		}
//		else
//		{
//			printf("������֤ʧ�ܣ����ٴ�ȷ��\n");
//			scanf("%s", repassword);
//		}
//	}
//	return 0;
//}


//����n��
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d",&n);
//	int end = 1;
//	for (i = 1;i<=n;i++)
//	{
//		end *= i;
//	}
//	printf("%d",end);
//	return 0;
//}
// ����1��+2��+������+n��
int main()
{
	int i = 0;
	int n = 0;
	int sum = 0;
	int one = 1;
	for (n = 1; n <= 4; n++)
	{
		for (i = 1; i <= n; i++)
		{
			one *= i;
		}
		sum += one;
		int one = 1;
		printf("%d", &one);
	}
		printf("%d", sum);
	return 0;
}
// ����oneǰ����int �����ͬ������֡�
//Ҳ�Ǽ���1��+2��+������+n��������Ҫ�����������࣬��Ҫѧϰ��
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int one = 1;
//	for (n = 1; n <= 4; n++)
//	{
//		one *= n;
//		sum += one;
//	}
//	printf("%d",sum);
//	return 0;
//}


//���ֲ�����ϰ
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//	int s = 0;
//	printf("������Ҫ���ҵ���:");
//	scanf("%d",&s);
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int left = 0;
//	int right = sz-1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == s)
//		{
//			printf("�ҵ���,�±���%d",mid);
//			break;
//		}
//		else if (arr[mid] < s)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] > s)
//		{
//			right = mid - 1;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���");
//		}
//	}
//	return 0;
//}
