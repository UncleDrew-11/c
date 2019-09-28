#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码\n");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登陆成功\n");
			break;
		}
		else
		{
			printf("登陆失败\n");
		}
	}
	if (i == 3)
	{
		printf("机会用完退出程序\n");
	}
	return 0;
}