#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct test
{
	char name[20];
	int age;
};
struct test h1 = { "zuo",21 };
//�ṹ�崫��
void print1(struct test h) {
	printf("ֱ�Ӵ��Σ�%d\n", h.age);
	return;
}
//�ṹ���ַ����
void print2(struct test * ph) {
	printf("��ַ���Σ�%d\n", ph->age);
	return;
}
int main() {
	print1(h1);
	print2(&h1);
	return 0;
}