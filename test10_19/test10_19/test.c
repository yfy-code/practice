#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
//��������������ַ�
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
//������֤ϵͳ
int main()
{
	int i = 0;
	char arr[20] = {0};
	//����������123456
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s",arr);
		if (strcmp(arr, "123456") == 0)/*�ַ����Ƚ���strcmp,����ͬ����Ϊ0*/
		{
			printf("������ȷ,��¼�ɹ�");
			break;
		}
		else
		{
			printf("������������ԣ�����%d�λ���\n",2-i);
		}
		printf("��������");
	}
	return 0;
}