#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//结构体自引用
struct stu
{
	int age;
	struct stu* next;
};
int main()
{
	struct stu s = { 18,NULL };
	printf("age = %d\n", s.age);
	return 0;
}