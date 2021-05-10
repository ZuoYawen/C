#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//sizeof(数组名)表示整个数组地址，做形参时就只表示数组首元素地址
int func(char str[100])
{
	return sizeof(str);
}
int main()
{
	char str[100];
	int ret = 0;
	ret = sizeof(str);
	printf("%d\n", ret);
	printf("%d\n", func(str));
	
	return 0;
}
