#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

int str_len1(const char* arr)    //正常实现,count计数
{
	assert(arr != NULL);
	int count = 0;
	while (*arr++)
	{
		count++;
	}
	return count;
}
int str_len2(const char* arr)    //递归实现
{
	assert(arr != NULL);
	if (*arr)
	{
		return 1+str_len2(arr + 1);
	}
	else
	{
		return 0;
	}
}
int str_len3(const char* arr)    //指针的减法运算实现
{
	assert(arr != NULL);
	char* ps = arr;
	while (*ps++)
	{;}
	return ps - arr - 1;   //最后一次判断不满足退出循环还会加一次，这里减掉 
}
char* str_cpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while(*dest++ = *src++)
	{; }
	return ret;
}

int main()
{
	char arr1[] = "zuoyawen";
	char arr3[20];
	int ret = str_len3(arr1);
	printf("长度是：%d\n", ret);
	str_cpy(arr3, arr1);
	printf("复制后的数组2：%s\n", arr3);
	return 0;
}