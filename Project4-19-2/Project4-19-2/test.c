#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
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