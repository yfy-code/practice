#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//����:
//char arr[] = "abcdef";fbcde\0
//����֮����������ݱ�ɣ�fedcba
//void reverse_string(char* arr)
//{
//	int len = strlen(arr);/*�ַ�������*/
//	char tmp = *arr;/*�ַ�����Ԫ��*/
//	*arr = *(arr + len - 1);/*��һ����ֵΪ���*/
//	*(arr + len - 1) = '\0';/*���ֵΪ����*/
//	if (strlen(arr + 1) >= 2)/*arr��ָ�������strlen(arr+1)���������һλ�ĳ���*/
//		reverse_string(arr + 1);
//	*(arr + len - 1) = tmp;/*���ֵΪ��Ԫ��*/
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_string(arr);
//	printf("%s",arr);
//	return 0;
//}
//�����ܽ᣺�ݹ��˼����ĺ����ֵ�÷���������ĥ��


//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//����Ŀ���ݡ�
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
//int DigitSum(int i)
//{
//	if (i <= 9)
//		return i;
//	else
//		return i % 10 + DigitSum(i / 10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int s=DigitSum(i);
//	printf("%d", s);
//	return 0;
//}


//����Ŀ���ơ�
//�ݹ�ʵ��n��k�η�
//����Ŀ���ݡ�
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//int square(int n,int k)
//{
//	if (k == 1)
//		return n;
//	else
//		return n * square(n,k-1);
//}
//int main()
//{
//	int n = 0,k=0;
//	scanf("%d %d", &n,&k);
//	int i=square(n,k);
//	printf("%d", i);
//	return 0;
//}
//�����������˳�����������ˣ����Ǹо����ǲ��������е��ƶ��Ƕ��ĸо�������Ҫ��ϰ��

//����Ŀ���ơ�
//����쳲�������
//����Ŀ���ݡ�
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺1 1 2 3 5 8 13
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
int feibo(int i)
{
	if (i >= 3)
		return feibo(i - 1) + feibo(i - 2);
	else
		return 1;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int out = feibo(n);
	printf("%d", out);
	return 0;
}