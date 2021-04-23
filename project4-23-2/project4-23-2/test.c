#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//关于qsort的应用
// 头文件：<stdlib.h>
//void qsort( void *base, size_t num, size_t width, int ( *compare )(const void *elem1, const void *elem2 ) );
//base：方便接收各种类型的元素的集合
//num：元素个数
//width：每个元素的字节大小
//compare：函数指针，排序时的比较方式：返回值< 0 ，elem1 < elem2; 0 ,elem1 = elem2; > 0 ,elem1 > elem2

//下面比较一下整数数组，升序排列

//int int_cmp(const int* x, const int* y)
//{
//	return *x - *y;
//}
//int main()
//{
//	int arr[] = { 2,4,1,3,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	printf("排序前：");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	qsort(arr, sz, 4, int_cmp);
//	printf("\n");
//	printf("排序后：");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//下面比较一下结构体数组，升序排列（字母按a到z）

//结构体定义及数组初始化
struct hum
{
	char name[20];
	int age;
};
struct hum h[3] = { {"zuo",20},{"chen",10},{"gao",30} };
//年龄比较的方法
int hum_age_cmp(const struct hum* x, const struct hum* y)
{
	return (x->age) - (y->age);
}
//名字比较的方法
int hum_name_cmp(const struct hum* x, const struct hum* y)
{
	return strcmp((x->name), (y->name));
}
int main()
{
	int i = 0;
	int sz = sizeof(h) / sizeof(h[0]);
	printf("排序前：\n");
	for (i = 0; i < sz; i++)
	{
		printf("姓名：%-8s 年龄：%d\n", h[i].name, h[i].age);
	}
	printf("\n");

	qsort(h, sz, sizeof(h[0]), hum_age_cmp);
	printf("按年龄排序后：\n");
	for (i = 0; i < sz; i++)
	{
		printf("姓名：%-8s 年龄：%d\n", h[i].name, h[i].age);
	}
	printf("\n");

	qsort(h, sz, sizeof(h[0]), hum_name_cmp);
	printf("按名字排序后：\n");
	for (i = 0; i < sz; i++)
	{
		printf("姓名：%-8s 年龄：%d\n", h[i].name, h[i].age);
	}

	return 0;
}


