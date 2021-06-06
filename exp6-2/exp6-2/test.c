#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

//跳过空格字符，遇上数字字符或者+、-才开始转换
//遇上非数字字符结束,其他情况返回0
//数字的ASCII码：48-57对应0-9
int a_to_i(const char* string)
{
	assert(string);
	if (*string > 57 || *string < 48)
	{
		
	}
}
int main()
{
	char* a = " 1234fr";
	int b = atoi(a);
	printf("%d\n", b);
	return 0;
}
