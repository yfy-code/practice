#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
//简单的密码验证
//int main()
//{
//	char password[10] = { 0 };
//	char repassword[10] = { 0 };
//	printf("请输入密码：");
//	scanf("%s",password);
//	printf("密码为：%s\n",password);
//	printf("请确认密码：");
//	scanf("%s",repassword);
//	while(1)
//	{
//		if (*repassword == *password)
//		{
//			printf("密码认证成功！");
//			break;
//		}
//		else
//		{
//			printf("密码认证失败，请再次确认\n");
//			scanf("%s", repassword);
//		}
//	}
//	return 0;
//}


//计算n！
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
// 计算1！+2！+。。。+n！
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
// 这里one前加上int 结果不同，很奇怪。
//也是计算1！+2！+。。。+n！，不过要比上面简练许多，需要学习！
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


//二分查找练习
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//	int s = 0;
//	printf("请输入要查找的数:");
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
//			printf("找到了,下标是%d",mid);
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
//			printf("找不到");
//		}
//	}
//	return 0;
//}
