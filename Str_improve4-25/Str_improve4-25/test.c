#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

int str_len1(const char* arr)    //����ʵ��,count����
{
	assert(arr != NULL);
	int count = 0;
	while (*arr++)
	{
		count++;
	}
	return count;
}
int str_len2(const char* arr)    //�ݹ�ʵ��
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
int str_len3(const char* arr)    //ָ��ļ�������ʵ��
{
	assert(arr != NULL);
	char* ps = arr;
	while (*ps++)
	{;}
	return ps - arr - 1;   //���һ���жϲ������˳�ѭ�������һ�Σ�������� 
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
	printf("�����ǣ�%d\n", ret);
	str_cpy(arr3, arr1);
	printf("���ƺ������2��%s\n", arr3);
	return 0;
}