#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

int main()
{
	char arr[] = "yfy";
	//['y']['f']['y']['\0']
	//
	//模拟实现一个strlen函数
	printf("%d\n", my_strlen(arr));

	return 0;
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int ret = 1;
//	迭代
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//	return 0;
//}