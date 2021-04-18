#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct test
{
	char name[20];
	int age;
};
struct test h1 = { "zuo",21 };
//结构体传参
void print1(struct test h) {
	printf("直接传参：%d\n", h.age);
	return;
}
//结构体地址传参
void print2(struct test * ph) {
	printf("地址传参：%d\n", ph->age);
	return;
}
int main() {
	print1(h1);
	print2(&h1);
	return 0;
}