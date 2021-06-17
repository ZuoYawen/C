#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>

//跳过空格字符(ASCII码32)，遇上数字字符或者+、-才开始转换
//遇上非数字字符结束,其他情况返回0
//数字的ASCII码：48-57对应0-9
//int a_to_i(const char* string)
//{
//	assert(string);
//	int ret = 0;
//	int flag = 0;
//	while (*string)
//	{ 
//		if (*string == ' ' || *string == '+')//为空格32或为正号43
//		{
//			string++;
//		}
//		else if (*string == '-')//为负45
//		{
//			flag = 1;
//			string++;
//		}
//		else if (*string > '9' || *string < '0')
//		{
//			if (flag)
//			{
//				return -ret;
//			}
//			else
//			{
//				return ret;
//			}
//		}
//		else
//		{
//			ret = (ret * 10)+ (*string - '0');
//			string++;
//		}
//	}
//	if (flag)
//	{
//		return -ret;
//	}
//	else
//	{
//		return ret;
//	}
//}
//升级版2
enum State
{
	NORMAL,
	ABMORMAL
}state = ABMORMAL;
int a_to_i(char* str)
{
	//空指针
	if (str == NULL || *str == "\0")
	{
		return 0;
	}
	//空白字符或正号
	while (isspace(*str) || *str == '+')
	{
		str++;
	}
	int flag = 1;
	if (*str == '-')
	{
		flag = -1;
		str++;
	}
	int ret = 0;
	while (isdigit(*str))
	{
		ret = ret * 10 + flag*(*str - '0');
		str++;
	}
	return ret;
}
int main()
{
	char* a = " fsdh-122wg ";
	int b = a_to_i(a);
	int c = atoi(a);
	printf("%d  %d\n", b,c);
	return 0;
}
// 
// 函数模拟实现
// 
//char* strn_cat(char* dest, const char* src,int count)
//{
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (count--)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	return ret;
//}
//char* strn_cpy(char* dest, const char* src, int count)
//{
//	assert(src != NULL);
//	while (count--)
//	{
//		*dest++ = *src++;
//	}
//	return dest;
//}
//int main()
//{
//	char str1[20] = { "Hello " };
//	char str2[20] = { "Hello " };
//	char* str3 = "zuoyawen!";
//	strn_cat(str1,str3,3);
//	strn_cpy(str2,str3,3);
//	printf("cat:%s cpy:%s\n", str1, str2);
//	return 0;
//}
// 
//找单身狗：一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//void bubbleSort(int* arr, int num)//升序
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0; j < num - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int ret = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = ret;
//				flag = 0;
//			}
//		}
//		if (flag)
//		{
//			break;
//		}
//	}
//}
//void findSingle(int* arr, int num)
//{
//	assert(arr != NULL);
//	bubbleSort(arr, num);
//	int i = 0;
//	while (i < num)
//	{
//		if (arr[i] == arr[i + 1])
//		{
//			i += 2;
//		}
//		else
//		{
//			printf("Single:%d\n", arr[i]);
//			i++;
//		}
//	}
//	return;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,8,3,4,1,2 };
//	findSingle(arr, 10);
//	return 0;
//}
