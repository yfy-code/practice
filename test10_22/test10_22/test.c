#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("���Ի���60s��ػ������� ������B �����\n");
	while (1)
	{
		scanf("%s",&input);
		if (strcmp(input,"������B") == 0)
		{
			system("shutdown -a");
			printf("����ɹ�,suki\n");
			break;
		}
		else
		{
			printf("��b�������Ͻ�����\n");
		}
	}
		return 0;
}
