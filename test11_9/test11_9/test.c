#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//����ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ��ٺ���ˮ�����ʵ�֣���
//int to_drink(int money,int price)
//{
//	int counts = 0;//������
//	int count = 0;//��ƿ����
//	int everytime=0;//ÿ��ʣ�µ�
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
//	//����1
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
//�����˼�д�Ĵ��룬�Ҿ�����д������ã��ֳ��ֳ�����ҪŬ����

//��ӡ����
//��C��������Ļ���������ͼ����
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
//    //��ӡ�ϰ�
//    for (i = 0; i < line; i++)
//    {
//        //��ӡ�ո�
//        int j = 0;
//        for (j = 0; j < line-i-1; j++)
//        {
//            printf(" ");
//        }
//        //��ӡ*
//        for (j = 0; j < 2*i+1; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    //��ӡ�°�
//    for (i = 0; i < line - 1; i++)
//    {
//        //��ӡ�ո�
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
//��д��������ת��������
//void reversal_arr(char* arr)
//{
//    char* left = arr;
//    char* right = arr+strlen(arr) - 1;���ﲻ���Դ�ͨ��sizeof����������С����Ϊ�������'\0',ͨͨ��ǰ��Ļ��������º����޷���ӡ��%s��ӡ����'\0'��ֹͣ�ˣ���
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

//��һ������Ϊn����������������ֶ���0��n - 1�ķ�Χ�ڡ� ������ĳЩ�������ظ��ģ�����֪���м����������ظ��ġ�Ҳ��֪��ÿ�������ظ����Ρ����ҳ�����������һ���ظ������֡� 
//���磬������볤��Ϊ7������[2, 3, 1, 0, 2, 5, 3]����ô��Ӧ�������2����3�����ڲ��Ϸ�������Ļ���� - 1
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