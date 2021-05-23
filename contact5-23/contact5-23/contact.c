#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void add(contact* c)
{
	printf("请输入需要添加的联系人信息(姓名，性别，年龄，电话，地址):\n");
	scanf("%s %s %d %s %s", c->data[c->num].name, c->data[c->num].sex, &(c->data[c->num].age),
		                    c->data[c->num].phone, c->data[c->num].addr);
	c->num++;
	printf("添加成功！\n");
	return;
}
void show(contact* c)
{
	printf("%-8s %-5s %-5s %-11s %-10s\n","姓名","性别","年龄","电话","地址");
	int i = 0;
	for (i = 0; i < c->num; i++)
	{
		printf("%-8s %-5s %-5d %-11s %-10s\n", c->data[i].name, c->data[i].sex, c->data[i].age,
			                                   c->data[i].phone, c->data[i].addr);
	}
	printf("显示完毕！\n");
	return;
}
static int findByName(contact* c, char* name)//通过名字寻找联系人，返回数组下标
{
	int i = 0;
	for (i = 0; i < c->num; i++)
	{
		if (strcmp(c->data[i].name, name) == 0)
			return i;
	}
	return -1;
}
void del(contact* c)
{
	if (c->num == 0)
	{
		printf("您的通讯录现在还没有联系人，请先添加喔！\n");
	}
	else
	{
		printf("请输入需要删除的联系人姓名：");
		char name[NAME];
		scanf("%s", name);
		int ret = findByName(c, name);
		printf("\n");
		if (ret == -1)
		{
			printf("对不起，查无此人呢！\n");
		}
		else
		{
			int i = 0;
			for (i = ret; i < c->num - 1; i++)
			{
				c->data[i] = c->data[i + 1];
			}
			c->num--;
			printf("删除完毕！\n");
		}
	}
	return;
}
void search(contact* c)
{
	if (c->num == 0)
	{
		printf("您的通讯录现在还没有联系人，请先添加喔！\n");
	}
	else
	{
		printf("请输入需要查找的联系人姓名：");
		char name[NAME];
		scanf("%s", name);
		int ret = findByName(c, name);
		printf("\n");
		if (ret == -1)
		{
			printf("对不起，查无此人呢！\n");
		}
		else
		{
			printf("哇哦！找到了！\n");
			printf("\n");
			printf("%-8s %-5s %-5s %-11s %-10s\n", "姓名", "性别", "年龄", "电话", "地址");
			printf("%-8s %-5s %-5d %-11s %-10s\n", c->data[ret].name, c->data[ret].sex, c->data[ret].age,
				                                   c->data[ret].phone, c->data[ret].addr);
		}
	}
	return;
}
void modify(contact* c)
{
	if (c->num == 0)
	{
		printf("您的通讯录现在还没有联系人，请先添加喔！\n");
	}
	else
	{
		printf("请输入需要修改的联系人姓名：");
		char name[NAME];
		scanf("%s", name);
		int ret = findByName(c, name);
		printf("\n");
		if (ret == -1)
		{
			printf("对不起，查无此人呢！\n");
		}
		else
		{
			printf("请输入修改后的联系人信息(姓名，性别，年龄，电话，地址)：\n");
			scanf("%s %s %d %s %s", c->data[ret].name, c->data[ret].sex,&( c->data[ret].age),
				                      c->data[ret].phone, c->data[ret].addr);
			printf("修改成功！\n");
		}
	}
	return;
}
void clear(contact* c)
{
	memset(c, 0, sizeof(*c));//c是指针，不是数组
	printf("清空完毕！\n");
	return;
}
static void sortByName(contact* c)
{
	int i = 0;
	for (i = 0; i < c->num - 1; i++)
	{
		int flag = 0;
		int j = 0;
		for (j = 0; j < c->num - 1 - i; j++)
		{
			if (strcmp(c->data[j].name, c->data[j + 1].name) > 0)
			{
				people tmp = c->data[j];
				c->data[j] = c->data[j + 1];
				c->data[j + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	printf("按名字排序完毕！\n");
	return;
}
static void sortBySex(contact* c)
{
	int i = 0;
	for (i = 0; i < c->num - 1; i++)
	{
		int flag = 0;
		int j = 0;
		for (j = 0; j < c->num - 1 - i; j++)
		{
			if (strcmp(c->data[i].sex, c->data[i + 1].sex) > 0)
			{
				people tmp = c->data[i];
				c->data[i] = c->data[i + 1];
				c->data[i + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	printf("按性别排序完毕！\n");
	return;
}
static void sortByAge(contact* c)
{
	int i = 0;
	for (i = 0; i < c->num - 1; i++)
	{
		int flag = 0;
		int j = 0;
		for (j = 0; j < c->num - 1 - i; j++)
		{
			if (c->data[i].age > c->data[i + 1].age)
			{
				people tmp = c->data[i];
				c->data[i] = c->data[i + 1];
				c->data[i + 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	printf("按年龄排序完毕！\n");
	return;
}
void sort(contact* c)
{
	printf("请选择排序方式对应的数字（1.姓名/2.性别/3.年龄）：");
	int sortnum = 0;
	scanf("%d", &sortnum);
	switch (sortnum)
	{
	case 1:
		sortByName(c);
		break;
	case 2:
		sortBySex(c);
		break;
	case 3:
		sortByAge(c);
		break;
	default:
		printf("请输入规定数字：\n");
		break;
	}
	return;
}
