#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>
//求最小公倍数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int ret = (a > b ? a : b);
//	int flag = ret;
//	int i = 2;
//	while(i)
//	{
//		if (ret % a == 0 && ret % b == 0)
//		{
//			printf("%d", ret);
//			return 0;
//		}
//		else 
//		{
//			
//			ret = flag * i;
//			i++;
//		}
//	}
//}
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	long long ret = (a > b ? a : b);
//	while (ret <= (long long)a * b)
//	{
//		if (ret % a == 0 && ret % b == 0)
//		{
//			printf("%d", ret);
//			return 0;
//		}
//		else
//		{
//			ret++;//递加效率太低
//		}
//	}
//}
 
//【倒置字符串】将一句话的单词进行倒置，标点不倒置。比如 I like beijing.经过函数后变为：beijing.like I
// 
// 想用strtok(),但是不对
//int judge_space(const char* str)
//{
//	assert(str != NULL);
//	int sz = strlen(str);
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (str[i] == ' ')
//		{
//			flag++;
//		}
//	}
//	return flag;
//}
//char* reverse(char* str)
//{
//	char* str1[100] = { 0 };
//	char*_cdecl  pstr;
//	pstr = strtok(str, ' ');
//	int n = judge_space(str);
//	str1[n] = *pstr;
//	while (pstr != NULL && n--)
//	{
//		pstr = strtok(NULL, ' ');
//		str1[n] = *pstr;
//	}
//	int num = judge_space(str);
//	int i = 0;
//	for (i = 1; i <= num; i++)
//	{
//		strcat(str1[0], str1[i]);
//	}
//	return str1[0];
//}
// 
//可以使用两次逆置， I like beijing. --> I ekil .gnijieb --> beijing.like I
void reverse(char* left, char* right)
{
	while (left <= right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void reverse_str(char* str)
{
	char* flag = str;
	while (*str)//判断是否找到结束标志符
	{
		char* left = str;
		char* right = str;
		while (*right != ' ' && *right != '\0')
		{
			right++;
		}
		reverse(left, right - 1);
		if (*right != '\0')
		{
			str = right + 1;
		}
		else
		{
			str = right;
		}
	}
	reverse(flag, flag + strlen(flag) - 1);
}
int main()
{
	char str1[100];
	gets(str1);//获取字符串，防止不能识别空格
	reverse_str(str1);
	printf("%s\n", str1);
	return 0;
}
