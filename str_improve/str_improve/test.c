#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>

char* str_cat(char* dest, const char* src)// ��src�ŵ�dest����
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	//ע���Լ���ǰ����ֹ��Ŀ���ַ���ԭ����'\0'��������������׷��ʧ�ܣ�����
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
int str_cmp1(const char* str1, const char* str2)//һ��˼·
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
int str_cmp2(const char* str1, const char* str2)//���뻷��ʹ�õģ�������
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	int ret = 0;
	//����Ϊ���ַ�������ұȽϵĵ�ǰ�ַ����ǽ�����־��
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
		printf("%s����%s\n", str1, str2);
	}
	else if (ret == 0)
	{
		printf("%s����%s\n", str1, str2);
	}
	else
	{
		printf("%sС��%s\n", str1, str2);
	}
	return 0;
}