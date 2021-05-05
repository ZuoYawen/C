#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* str_cat(char* dest, const char* src)// 把src放到dest后面
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//注意自加在前，防止把目的字符串原本的'\0'保留下来，导致追加失败！！！
	while (*++dest)   
	{
		;
	}
	//while (*dest)
	//{
	//	dest++;
	//}
	while(*dest++ = *src++)
	{
		;
	}
	return ret;
}
int str_cmp1(const char* str1, const char* str2)//一般思路
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1++ == *str2++)
	{
		if (*str1 == '\0')
			return 0;
	}
	return *str1 - *str2;
}
int str_cmp2(const char* str1, const char* str2)//编译环境使用的，很巧妙
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	int ret = 0;
	//条件为两字符串相等且比较的当前字符不是结束标志符
	while (!(ret = *str1 - *str2) && *str1)
	{
		str1++;
		str2++;
	}
	return ret;
}
int main()
{
	char str1[10] = "hello ";
	char str2[10] = "zuoyawen!";
	//str_cat(str1, str2);
	//printf("%s\n", str1);
	int ret = str_cmp2(str1, str2);
	if (ret > 0)
	{
		printf("%s大于%s\n", str1, str2);
	}
	else if (ret == 0)
	{
		printf("%s等于%s\n", str1, str2);
	}
	else
	{
		printf("%s小于%s\n", str1, str2);
	}
	return 0;
}