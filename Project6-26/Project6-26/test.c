#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��̬���پ���������
// 
////��������Test1 ��������ʲô���Ľ����
//void GetMemory1(char* p) {
//	p = (char*)malloc(100);
//}
//void Test1(void) {
//	char* str = NULL;
//	GetMemory1(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////��ֵ���ã�p�Ǿֲ�������������������,���Գ������������û���ͷ�����ڴ�й©
//
//
////��������Test2 ��������ʲô���Ľ����
//char* GetMemory2(void) {
//	char p[] = "hello world";
//	return p;
//}
//void Test2(void) {
//	char* str = NULL;
//	str = GetMemory2();
//	printf(str);
//}
////��Ȼ������p�����ֲ��������������Ѿ�ûֵ�ˣ�str����Ұָ��
//
////��������Test3 ��������ʲô���Ľ����
//void GetMemory3(char** p, int num) {
//	*p = (char*)malloc(num);
//}
//void Test3(void) {
//	char* str = NULL;
//	GetMemory3(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
////��ַ������ȷ��û���ͷŵ����ڴ�й©
//
////��������Test4 ��������ʲô���Ľ����
//void Test4(void) {
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
////û���ÿգ������൱����Ұָ��
//
//int main()
//{
//	Test1();
//	return 0;
//}

//���������ʹ��
//struct S
//{
//	int i;
//	char s[];
//};
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(p) + 6);
//	if (p == NULL)
//	{
//		perror("malloc_error:");
//		return 0;
//	}
//	else
//	{
//		p->i = 6;
//		int k = 0;
//		for (k = 0; k < p->i; k++)
//		{
//			p->s[k] = 'a' + k;
//		}
//		for (k = 0; k < p->i; k++)
//		{
//			printf("%d:%c   ", k + 1, p->s[k]);
//		}
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

//��ͨ��̬����ʵ����������
struct S
{
	int i;
	char* s;
};
int main()
{
	struct S* p = (struct S*)malloc(sizeof(struct S));
	if (p == NULL)
	{
		perror("malloc_p:");
		return 0;
	}
	else
	{
		p->i = 6;
		p->s = (char*)malloc(sizeof(char) * p->i);
		if (p->s == NULL)
		{
			perror("malloc_p->s:");
			return 0;
		}
		else
		{
			int k = 0;
			for (k = 0; k < p->i; k++)
			{
				p->s[k] = 'a' + k;
			}
			for (k = 0; k < p->i; k++)
			{
				printf("%d:%c   ", k + 1, p->s[k]);
			}
			free(p->s);
			p->s = NULL;
			free(p);
			p = NULL;
		}
	}
	return 0;
}
