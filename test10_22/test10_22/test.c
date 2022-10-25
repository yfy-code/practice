#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	printf("电脑会在60s后关机，输入 我是猪B 来解除\n");
	while (1)
	{
		scanf("%s",&input);
		if (strcmp(input,"我是猪B") == 0)
		{
			system("shutdown -a");
			printf("解除成功,suki\n");
			break;
		}
		else
		{
			printf("笨b鲍狗，赶紧重试\n");
		}
	}
		return 0;
}
