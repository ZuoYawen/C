//较第一版的优化
//1、界面优化 
//2、通讯录存放的数据动态开辟，节省空间 
//3、排序方式灵活
//4、做了各种异常处理，增加健壮性

#include <stdio.h>
#include <string.h>
#include <memory.h>
#include <assert.h>
#include <stdlib.h>

#define NAME 8
#define SEX 5
#define PHONE 12
#define ADDR 20
#define DEFAULT 5

typedef struct people
{
	char name[NAME];
	char sex[SEX];
	int age;
	char phone[PHONE];
	char addr[ADDR];
}people;

typedef struct contact
{
	people* data;
	int num;//当前通讯录的有效人数（即目前实际放了多少人）
	int mem;//当前通讯录的有效内存容量（即可以放多少人）
}contact;

//通讯录初始化
void initContact(contact* c);
//通讯录功能实现
void add(contact* c);
void show(contact* c);
void del(contact* c);
void search(contact* c);
void modify(contact* c);
void clear(contact* c);
void sort(contact* c);
//通讯录销毁
void destoryContacy(contact* c);
