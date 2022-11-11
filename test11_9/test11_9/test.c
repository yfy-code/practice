#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//喝汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少喝汽水（编程实现）。
//int to_drink(int money,int price)
//{
//	int counts = 0;//总数量
//	int count = 0;//空瓶子数
//	int everytime=0;//每次剩下的
//	counts = money / price;
//	count = counts;
//redo:
//	everytime = 0;
//	while (count >= 2)
//	{
//		count -= 2;
//		everytime++;
//	}
//	count = everytime;
//	counts += everytime;
//	if (count >= 2)
//		goto redo;
//	return counts;
//}
//int main()
//{
//	int money = 20;
//	int price = 1;
//	int out=to_drink(money,price);
//	printf("%d", out);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//
//
//	scanf("%d", &money);
//
//	//方法1
//	total = money;
//	empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d",total);
//
//	return 0;
//}
//看了人家写的代码，我觉得我写的真的烂，又臭又长，需要努力。

//打印菱形
//用C语言在屏幕上输出以下图案：
 /*   *6 
     ***5
    *****4
   *******3
  *********
 ***********
*************
 ***********   1 3 5 7 9
  *********
   *******
    *****
     ***
      *
 */
//int main()
//{
//    int line = 0;
//    int i = 0;
//    scanf("%d", &line);
//    //打印上半
//    for (i = 0; i < line; i++)
//    {
//        //打印空格
//        int j = 0;
//        for (j = 0; j < line-i-1; j++)
//        {
//            printf(" ");
//        }
//        //打印*
//        for (j = 0; j < 2*i+1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    //打印下半
//    for (i = 0; i < line - 1; i++)
//    {
//        //打印空格
//        int j = 0;
//        for (j = 0; j < i + 1; j++)
//        {
//            printf(" ");
//        }
//        for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
//#include <stdio.h>
//#include <string.h>
//编写函数来反转数组内容
//void reversal_arr(char* arr)
//{
//    char* left = arr;
//    char* right = arr+strlen(arr) - 1;这里不可以传通过sizeof计算的数组大小，因为会把最后的'\0',通通和前面的互换，导致函数无法打印（%s打印碰到'\0'就停止了）。
//    char emp = 0;
//    while (left < right)
//    {
//        emp = *left;
//        *left = *right;
//        *right = emp;
//        left++;
//        right--;
//    }
//}
//int main()
//{
//    char arr[100]={"0"};
//    gets(arr);
//    reversal_arr(arr);
//    printf("%s",arr);
//    return 0;
//}

//在一个长度为n的数组里的所有数字都在0到n - 1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 
//例如，如果输入长度为7的数组[2, 3, 1, 0, 2, 5, 3]，那么对应的输出是2或者3。存在不合法的输入的话输出 - 1
int duplicate(int* numbers, int numbersLen)
{
    int i = 0;
    int* left = numbers;
    int* right = numbers + numbersLen - 1;
    int count = 0;
    for (i = 0; i <= numbersLen; i++)
    {
        int j = 0;
        for (j = 1; j < numbersLen; j++)
        {
            if (*left == *(left + j))
            {
                return *left;
            }
            count++;
        }
        left++;
    }
    if (count == 0)
    {
        return -1;
    }
    else
    {
        return *left;
    }

}
int main()
{
    int numbers[] = { 2, 3, 1, 0, 2, 5, 3 };
    int numbersLen = sizeof(numbers)/sizeof(numbers[1]);
    //int numbersLen = strlen(numbers);
    int out=duplicate(numbers, numbersLen);
    printf("%d", out);
    return 0;
}