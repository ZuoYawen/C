#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>
//int str_len(const char* str)
//{
//	assert(str != NULL);
//	while (*str++)
//	{
//		return 1 + str_len(str++);
//	}
//	return 0;
//}
//int str_len(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//int str_len(const char* str)
//{
//	assert(*str != NULL);
//	const char* ret = str;
//	while (*ret++)
//	{
//		;
//	}
//	return ret - str - 1;
//}

char* str_cpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	while (*ret++ = *src++)
	{
		;
	}
	return dest;
}
int main()
{
	char str1[20];
	char str2[] = "zuoyawen";
	char* ret = strcpy(str1, str2);
	printf("%s\0", str1);
	return 0;
}