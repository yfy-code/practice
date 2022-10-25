#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
//从左右两端输出字符
//int main()
//{
//	char arr1[] = "i love rainlike";
//	char arr2[] = "###############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s", arr2);
//	return 0;
//}
//密码验证系统
int main()
{
	int i = 0;
	char arr[20] = {0};
	//假设密码是123456
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s",arr);
		if (strcmp(arr, "123456") == 0)/*字符串比较用strcmp,若相同则结果为0*/
		{
			printf("密码正确,登录成功");
			break;
		}
		else
		{
			printf("密码错误请重试，还有%d次机会\n",2-i);
		}
		printf("超出次数");
	}
	return 0;
}