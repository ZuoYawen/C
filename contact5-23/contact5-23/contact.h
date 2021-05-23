#include <stdio.h>
#include <string.h>
#include <memory.h>

#define NAME 8
#define SEX 5
#define PHONE 12
#define ADDR 20
#define NUM 100

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
	people data[NUM];
	int num;
}contact;

void add(contact* c);
void show(contact* c);
void del(contact* c);
void search(contact* c);
void modify(contact* c);
void clear(contact* c);
void sort(contact* c);