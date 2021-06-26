#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//动态开辟经典面试题
// 
////请问运行Test1 函数会有什么样的结果？
//void GetMemory1(char* p) {
//	p = (char*)malloc(100);
//}
//void Test1(void) {
//	char* str = NULL;
//	GetMemory1(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
////传值调用，p是局部变量，出函数便销毁,所以程序崩溃；另外没有释放造成内存泄漏
//
//
////请问运行Test2 函数会有什么样的结果？
//char* GetMemory2(void) {
//	char p[] = "hello world";
//	return p;
//}
//void Test2(void) {
//	char* str = NULL;
//	str = GetMemory2();
//	printf(str);
//}
////虽然返回了p，但局部变量所以里面已经没值了，str就是野指针
//
////请问运行Test3 函数会有什么样的结果？
//void GetMemory3(char** p, int num) {
//	*p = (char*)malloc(num);
//}
//void Test3(void) {
//	char* str = NULL;
//	GetMemory3(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
////传址调用正确，没有释放导致内存泄漏
//
////请问运行Test4 函数会有什么样的结果？
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
////没有置空，所以相当于是野指针
//
//int main()
//{
//	Test1();
//	return 0;
//}

//柔性数组的使用
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

//普通动态开辟实现柔性数组
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
