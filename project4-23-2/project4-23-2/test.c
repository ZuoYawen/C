#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//����qsort��Ӧ��
// ͷ�ļ���<stdlib.h>
//void qsort( void *base, size_t num, size_t width, int ( *compare )(const void *elem1, const void *elem2 ) );
//base��������ո������͵�Ԫ�صļ���
//num��Ԫ�ظ���
//width��ÿ��Ԫ�ص��ֽڴ�С
//compare������ָ�룬����ʱ�ıȽϷ�ʽ������ֵ< 0 ��elem1 < elem2; 0 ,elem1 = elem2; > 0 ,elem1 > elem2

//����Ƚ�һ���������飬��������

//int int_cmp(const int* x, const int* y)
//{
//	return *x - *y;
//}
//int main()
//{
//	int arr[] = { 2,4,1,3,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	printf("����ǰ��");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	qsort(arr, sz, 4, int_cmp);
//	printf("\n");
//	printf("�����");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//����Ƚ�һ�½ṹ�����飬�������У���ĸ��a��z��

//�ṹ�嶨�弰�����ʼ��
struct hum
{
	char name[20];
	int age;
};
struct hum h[3] = { {"zuo",20},{"chen",10},{"gao",30} };
//����Ƚϵķ���
int hum_age_cmp(const struct hum* x, const struct hum* y)
{
	return (x->age) - (y->age);
}
//���ֱȽϵķ���
int hum_name_cmp(const struct hum* x, const struct hum* y)
{
	return strcmp((x->name), (y->name));
}
int main()
{
	int i = 0;
	int sz = sizeof(h) / sizeof(h[0]);
	printf("����ǰ��\n");
	for (i = 0; i < sz; i++)
	{
		printf("������%-8s ���䣺%d\n", h[i].name, h[i].age);
	}
	printf("\n");

	qsort(h, sz, sizeof(h[0]), hum_age_cmp);
	printf("�����������\n");
	for (i = 0; i < sz; i++)
	{
		printf("������%-8s ���䣺%d\n", h[i].name, h[i].age);
	}
	printf("\n");

	qsort(h, sz, sizeof(h[0]), hum_name_cmp);
	printf("�����������\n");
	for (i = 0; i < sz; i++)
	{
		printf("������%-8s ���䣺%d\n", h[i].name, h[i].age);
	}

	return 0;
}


