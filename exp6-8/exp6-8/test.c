#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = (a > b ? a : b);
//	while(ret <= a * b)
//	{
//		if (ret % a == 0 && ret % b == 0)
//		{
//			printf("%d", ret);
//			return 0;
//		}
//		else 
//		{
//			ret++;
//		}
//	}
//}
// 
//【倒置字符串】将一句话的单词进行倒置，标点不倒置。比如 I like beijing.经过函数后变为：beijing.like I
int judge_space(const char* str)
{
	assert(str != NULL);
	int sz = strlen(str);
	int i = 0;
	int flag = 0;
	for (i = 0; i < sz; i++)
	{
		if (str[i] == ' ')
		{
			flag++;
		}
	}
	return flag;
}
char* reverse(char* str)
{
	char* str1[100] = { 0 };
	char*_cdecl  pstr;
	pstr = strtok(str, ' ');
	int n = judge_space(str);
	str1[n] = *pstr;
	while (pstr != NULL && n--)
	{
		pstr = strtok(NULL, ' ');
		str1[n] = *pstr;
	}
	int num = judge_space(str);
	int i = 0;
	for (i = 1; i <= num; i++)
	{
		strcat(str1[0], str1[i]);
	}
	return str1[0];
}
int main()
{
	char str1[100];
	char* str2;
	gets(str1);
	str2 = reverse(str1);
	printf("%s\n", str2);
	return 0;
}