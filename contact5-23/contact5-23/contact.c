#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void add(contact* c)
{
	printf("��������Ҫ��ӵ���ϵ����Ϣ(�������Ա����䣬�绰����ַ):\n");
	scanf("%s %s %d %s %s", c->data[c->num].name, c->data[c->num].sex, &(c->data[c->num].age),
		                    c->data[c->num].phone, c->data[c->num].addr);
	c->num++;
	printf("��ӳɹ���\n");
	return;
}
void show(contact* c)
{
	printf("%-8s %-5s %-5s %-11s %-10s\n","����","�Ա�","����","�绰","��ַ");
	int i = 0;
	for (i = 0; i < c->num; i++)
	{
		printf("%-8s %-5s %-5d %-11s %-10s\n", c->data[i].name, c->data[i].sex, c->data[i].age,
			                                   c->data[i].phone, c->data[i].addr);
	}
	printf("��ʾ��ϣ�\n");
	return;
}
static int findByName(contact* c, char* name)//ͨ������Ѱ����ϵ�ˣ����������±�
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
		printf("����ͨѶ¼���ڻ�û����ϵ�ˣ��������ร�\n");
	}
	else
	{
		printf("��������Ҫɾ������ϵ��������");
		char name[NAME];
		scanf("%s", name);
		int ret = findByName(c, name);
		printf("\n");
		if (ret == -1)
		{
			printf("�Բ��𣬲��޴����أ�\n");
		}
		else
		{
			int i = 0;
			for (i = ret; i < c->num - 1; i++)
			{
				c->data[i] = c->data[i + 1];
			}
			c->num--;
			printf("ɾ����ϣ�\n");
		}
	}
	return;
}
void search(contact* c)
{
	if (c->num == 0)
	{
		printf("����ͨѶ¼���ڻ�û����ϵ�ˣ��������ร�\n");
	}
	else
	{
		printf("��������Ҫ���ҵ���ϵ��������");
		char name[NAME];
		scanf("%s", name);
		int ret = findByName(c, name);
		printf("\n");
		if (ret == -1)
		{
			printf("�Բ��𣬲��޴����أ�\n");
		}
		else
		{
			printf("��Ŷ���ҵ��ˣ�\n");
			printf("\n");
			printf("%-8s %-5s %-5s %-11s %-10s\n", "����", "�Ա�", "����", "�绰", "��ַ");
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
		printf("����ͨѶ¼���ڻ�û����ϵ�ˣ��������ร�\n");
	}
	else
	{
		printf("��������Ҫ�޸ĵ���ϵ��������");
		char name[NAME];
		scanf("%s", name);
		int ret = findByName(c, name);
		printf("\n");
		if (ret == -1)
		{
			printf("�Բ��𣬲��޴����أ�\n");
		}
		else
		{
			printf("�������޸ĺ����ϵ����Ϣ(�������Ա����䣬�绰����ַ)��\n");
			scanf("%s %s %d %s %s", c->data[ret].name, c->data[ret].sex,&( c->data[ret].age),
				                      c->data[ret].phone, c->data[ret].addr);
			printf("�޸ĳɹ���\n");
		}
	}
	return;
}
void clear(contact* c)
{
	memset(c, 0, sizeof(*c));//c��ָ�룬��������
	printf("�����ϣ�\n");
	return;
}
static void sortByName(contact* c)
{
	int i = 0;
	for (i = 0; i < c->num - 1; i++)
	{
		if (strcmp(c->data[i].name, c->data[i + 1].name) < 0)
		{
			people tmp = c->data[i];
			c->data[i] = c->data[i + 1];
			c->data[i + 1] = tmp;
		}
	}
	printf("������������ϣ�\n");
	return;
}
static void sortBySex(contact* c)
{
	int i = 0;
	for (i = 0; i < c->num - 1; i++)
	{
		if (strcmp(c->data[i].sex, c->data[i + 1].sex) < 0)
		{
			people tmp = c->data[i];
			c->data[i] = c->data[i + 1];
			c->data[i + 1] = tmp;
		}
	}
	printf("���Ա�������ϣ�\n");
	return;
}
static void sortByAge(contact* c)
{
	int i = 0;
	for (i = 0; i < c->num - 1; i++)
	{
		if (c->data[i].age > c->data[i + 1].age)
		{
			people tmp = c->data[i];
			c->data[i] = c->data[i + 1];
			c->data[i + 1] = tmp;
		}
	}
	printf("������������ϣ�\n");
	return;
}
void sort(contact* c)
{
	printf("��ѡ������ʽ��Ӧ�����֣�1.����/2.�Ա�/3.���䣩��");
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
		printf("������涨���֣�\n");
		break;
	}
	return;
}