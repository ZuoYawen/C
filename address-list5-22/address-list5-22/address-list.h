#include <stdio.h>
#include <string.h>

#define NAME 20
#define SEX 5 
#define PHONE 12
#define ADDR 50
#define QQ 11
#define NUM 100

//对联系人结构体重定义，方便后面使用
typedef struct people
{
	char name[NAME];
	char sex[SEX];
	int age;
	char phone[PHONE];
	char addr[ADDR];
	char qq[QQ];
}people;
//对通讯录结构体重定义，方便后面使用
typedef struct contact
{
	people data[NUM];
	int num;
}contact;

void add(contact* c);
void del(contact* c);
void search(contact* c);
void modify(contact* c);
void sort(contact* c);
void show(contact* c);