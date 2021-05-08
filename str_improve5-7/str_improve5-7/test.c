#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

//结构体自引用
//struct stu
//{
//	int age;
//	struct stu* next;
//};
//int main()
//{
//	struct stu s = { 18,NULL };
//	printf("age = %d\n", s.age);
//	return 0;
//}

//strcmp的模拟实现
//int str_cmp(const char* str1, const char* str2)
//{
//	while (*str1 != '\0' && *str2 != '\0')    //不能用指针判空，结束标志符所在的地方不一定就是NULL指针
//	{
//     //碰到不同的直接通过ASCII码返回差值，否则向后移动指针
//		if (*str1 != *str2)
//		{
//			return *str1 - *str2;
//		}
//		str1++;
//		str2++;
//	}
//	return 0;
//}
//int str_cmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//int str_cmp(const char* str1, const char* str2)    //目前最好！！！
//{
//	int ret = 0;
//	while (!(ret = *str1 - *str2) && *str1)    //当差值为0且不是'\0'时指针后移，否则返回差值
//	{
//		str1++;
//		str2++;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[] = "zuoyawen";
//	char str2[] = "chenjie";
//	int ret = str_cmp(str1, str2);
//	if (ret > 0)
//	{
//		printf("%s > %s\n", str1, str2);
//	}
//	else if (ret == 0)
//	{
//		printf("%s = %s\n", str1, str2);
//	}
//	else
//	{
//		printf("%s < %s\n", str1, str2);
//	}
//	return 0;
//}

//strcat的模拟实现
//char* str_cat(char* dest, const char* src)    //不可以自追加
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*ret)
//	{
//		ret++;
//	}
//	while (*ret++ = *src++)
//	{
//		;
//	}
//	return dest;
//
//}
//int main()
//{
//	char str1[20] = "hello ";
//	char str2[] = "zuoyawen!";
//	char* ret = str_cat(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}

//strstr的模拟实现
char* str_str(const char* str, const char* sub_str)
{
	assert(str != NULL);
	assert(str != NULL);
	//每一趟回来都可能改变指针的值，所以新建一组保存原数据
	const char* cp = str;    //让cp做str的标记，记录每一次比较
	const char* s = str;
	const char* s_sub = sub_str;
	while (*cp)
	{
		s = cp;
		s_sub = sub_str;
		//一趟查找
		while (*s == *s_sub)
		{
			s++;
			s_sub++;
			if (*s == '\0')
			{
				return (char*)cp;
			}
		}
		cp++;
	}
	return NULL;
}
int main()
{
	char *str1 = "abcdef";
	char *str2 = "cda";
	char *ret = strstr(str1, str2);
	printf("%s\n", ret);
	return 0;
}
