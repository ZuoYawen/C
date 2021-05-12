#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>
#include <string.h>

//char* str_cat(char* dest, const char* src)
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
//}
//int str_cmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return str1 - str2;
//}
//int str_cmp(const char* str1, const char* str2)
//{
//	assert(str1 != NULL);
//	assert(str2 != NULL);
//	while (*str1 != '\0' && *str2 != '\0')
//	{
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
//	int ret = 0;
//	while (*str1 && !(ret = *str1 - *str2))
//	{
//		str1++;
//		str2++;
//	}
//	return ret;
//}
//int main()
//{
//	char* str1 = "hello ";
//	char* str2 = "xiaozuo!";
//	int ret = str_cmp(str1, str2);
//	if (ret > 0)
//	{
//		printf("%s > %s\n", str1, str2);
//	}
//	else if (ret = 0)
//	{
//		printf("%s = %s\n", str1, str2);
//	}
//	else
//	{
//		printf("%s < %s\n", str1, str2);
//	}
//	return 0;
//}
//int main()
//{
//	char str1[20] = "hello ";
//	char* str2 = "xiaozuo!";
//	strncat(str1, str2, 8);
//	printf("%s\n", str1);
//	return 0;
//}
//int main()
//{
//	char arr[][5] = { "R2D2","C3P0","R2A6" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		if (strncmp(arr[i], "R2xx", 2) == 0)
//		{
//			printf("find it! -> %s\n",arr[i]);
//		}
//	}
//	return 0;
//}
//int judge_spin(const char* str, const char* spin_str)
//{
//	int num = strlen(str);
//	char* str1 = strncat(str,str, num);
//	if (strstr(str1, spin_str) != NULL)
//	{
//		return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char str1[30] = "abcde";
//	char str2[30] = "eabcd";
//	int ret = judge_spin(str1, str2);
//	if (ret)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}
//int main()
//{
//	char str[] = ".xiao.zuo.xiao.chen";
//	char* pstr;
//	pstr = strtok(str, ".");
//	while (pstr != NULL)
//	{
//		printf("%s\n", pstr);
//		pstr = strtok(NULL, ".");
//	}
//	return 0;
//}
//int main()
//{
//	char* ip = "192.168.0.1";
//	const char* sign = ".";
//	//创建临时变量来进行切分，防止改变被操作数
//	char str1[30];
//	strcpy(str1, ip);
//	//创建一个指向每部分字符串的指针
//	char* str = strtok(str1, sign);
//	//循环走完所有的分隔符，除了上面初始化用原字符串，其余使用这个函数时，原字符串为承接上一个的NULL
//	for (str; str != NULL; str = strtok(NULL, sign))
//	{
//		printf("%s\n", str);
//	}
//	return 0;
//}
#include <errno.h>
int main () 
{ 
 FILE * pFile; //定义一个文件
 pFile = fopen ("unexist.doc","r"); //以只读的方式打开该文件
 if (pFile == NULL)
 {
	 printf("Error information ->  %s\n", strerror(errno));
	 //perror("Error information");
 }
 return 0; 
}