#define _CRT_SECURE_NO_WARNINGS
#include "address-list.h"
void add(contact* c)
{
	if (c->num == NUM)
	{
		printf("Your contacts have fulled!\n");
		printf("\n");
	}
	else
	{
		printf("Please input information that you need to add(name sex age phone address qq):\n");
		printf("\n");
		scanf("%s %s %d %s %s %s", c->data[c->num].name, c->data[c->num].sex,
			                       &(c->data[c->num].age), c->data[c->num].phone,
			                       c->data[c->num].addr, c->data[c->num].qq);
		c->num++;
		printf("Add successed!\n");
		printf("\n");
	}
	return;
}
static int searchByName(contact* c, char* name)
{
	//���ﲻʵ���пգ����庯����ȥʵ�֣���ֻ�Ǹ���̬����
	int i = 0;
	for (i = 0; i < c->num; i++)
	{
		if (strcmp(c->data[i].name, name) == 0)//�Ƚ��ַ�����������==����Ҫ��ֵ�������ڴ��ַ
		{
			return i;
		}
	}
	return -1;
}
void del(contact* c)
{
	if (c->num == 0)
	{
		printf("Sorry!The list is null!\n");
		printf("\n");
	}
	else
	{
		char name[NAME] = { 0 };
		printf("Please input name what you need to delete:");
		scanf("%s", name);
		int ret = searchByName(c, name);
		if (ret == -1)
		{
			printf("Sorry,no such people!\n");
			printf("\n");
		}
		else
		{
			int i = 0;
			for (i = ret; i < c->num - 1; i++)
			{
				c->data[i] = c->data[i + 1];
			}
			c->num--;//�������ǣ�����
			printf("Delete successfully!\n");
			printf("\n");
		}
	}
	return;
}
void search(contact* c)
{
	if (c->num == 0)
	{
		printf("Sorry!The list is null!\n");
		printf("\n");
	}
	else
	{
		char name[NAME] = { 0 };
		printf("Please input name what you need to search:");
		scanf("%s", name);
		int ret = searchByName(c, name);
		if (ret == -1)
		{
			printf("Sorry,no such people!\n");
			printf("\n");
		}
		else
		{
			printf("Wow!Have found!\n ");
			printf("\n");
			printf("%-5s %-7s %-5s %-12s %-10s %-11s\n", "name", "sex", "age", "phone", "address", "qq");
			printf("%-5s %-7s %-5d %-12s %-10s %-11s\n", c->data[ret].name, c->data[ret].sex, c->data[ret].age,
				c->data[ret].phone, c->data[ret].addr, c->data[ret].qq);
			printf("\n");
		}
	}
	return;
}
void modify(contact* c)
{
	if (c->num == 0)
	{
		printf("Sorry!The list is null!\n");
		printf("\n");
	}
	else
	{
		char name[NAME] = { 0 };
		printf("Please input name what you need to modify:");
		scanf("%s", name);
		int ret = searchByName(c, name);
		if (ret == -1)
		{
			printf("Sorry,no such people!\n");
			printf("\n");
		}
		else
		{
			printf("Please input the new information(name sex age phone address qq):\n");
			scanf("%s %s %d %s %s %s", c->data[ret].name, c->data[ret].sex, &(c->data[ret].age),
				                       c->data[ret].phone, c->data[ret].addr, c->data[ret].qq);
		}
	}
	printf("Modify successfully!\n");
	printf("\n");
	return;
}
void sort(contact* c)
{
	//��������������ֵ���������
	int i = 0;//����
	for (i = 0; i < c->num - 1; i++)
	{
		int flag = 0;//���Ż��������������һ�˲���Ҫ�����ˣ�֤���Ѿ��ź���
		int j = 0;//ÿ�˵ıȽ�
		for (j = 0; j < c->num - i - 1; j++)
		{
			if (strcmp(c->data[j].name, c->data[j + 1].name) > 0)
			{
				people tmp = c->data[j];
				c->data[j] = c->data[j + 1];
				c->data[j + 1] = tmp;
			}
			flag = 1;
		}
		if (flag == 0)
		{
			break;
		}
	}
	printf("Sort successfully!\n");
	printf("\n");
	return;
}
void show(contact* c)
{
	printf("%-5s %-7s %-5s %-12s %-10s %-11s\n", "name", "sex", "age", "phone", "address", "qq");
	int i = 0;
	for (i = 0; i < c->num; i++)
	{
		printf("%-5s %-7s %-5d %-12s %-10s %-11s\n", c->data[i].name, c->data[i].sex, c->data[i].age,
			c->data[i].phone, c->data[i].addr, c->data[i].qq);
	}
	printf("\n");
	return;
}