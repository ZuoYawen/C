#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	////һά����
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));    //16
	//printf("%d\n", sizeof(a + 0));    //4
	//printf("%d\n", sizeof(*a));    //4
	//printf("%d\n", sizeof(a + 1));   //4 
	//printf("%d\n", sizeof(a[1]));    //4
	//printf("%d\n", sizeof(&a));    //16
	//printf("%d\n", sizeof(*&a));    //4
	//printf("%d\n", sizeof(&a + 1));    //4
	//printf("%d\n", sizeof(&a[0]));    //4
	//printf("%d\n", sizeof(&a[0] + 1));    //4


	//�ַ�����
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));    //6
	//printf("%d\n", sizeof(arr + 0));    //6
	//printf("%d\n", sizeof(*arr));    //1
	//printf("%d\n", sizeof(arr[1]));    //1
	//printf("%d\n", sizeof(&arr));    //24
	//printf("%d\n", sizeof(&arr + 1));    //4
	//printf("%d\n", sizeof(&arr[0] + 1));    //4
	//printf("%d\n", strlen(arr));    //���ֵ
	//printf("%d\n", strlen(arr + 0));    //���ֵ
	//printf("%d\n", strlen(*arr));    //1
	//printf("%d\n", strlen(arr[1]));    //1
	//printf("%d\n", strlen(&arr));    //���ֵ
	//printf("%d\n", strlen(&arr + 1));    //4
	//printf("%d\n", strlen(&arr[0] + 1));    //4

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));    //7
	//printf("%d\n", sizeof(arr + 0));    //6
	//printf("%d\n", sizeof(*arr));    //1
	//printf("%d\n", sizeof(arr[1]));    //1
	//printf("%d\n", sizeof(&arr));    //4
	//printf("%d\n", sizeof(&arr + 1));    //4
	//printf("%d\n", sizeof(&arr[0] + 1));    //4
	//printf("%d\n", strlen(arr));    //6
	//printf("%d\n", strlen(arr + 0));    //6
	//printf("%d\n", strlen(*arr));    //1
	//printf("%d\n", strlen(arr[1]));    //1
	//printf("%d\n", strlen(&arr));    //24
	//printf("%d\n", strlen(&arr + 1));    //4
	//printf("%d\n", strlen(&arr[0] + 1));    //4

	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));    //4
	//printf("%d\n", sizeof(p + 1));    //4
	//printf("%d\n", sizeof(*p));    //7
	//printf("%d\n", sizeof(p[0]));    //1
	//printf("%d\n", sizeof(&p));    //4
	//printf("%d\n", sizeof(&p + 1));    //4
	//printf("%d\n", sizeof(&p[0] + 1));    //4
	//printf("%d\n", strlen(p));    //6
	//printf("%d\n", strlen(p + 1));    //5
	//printf("%d\n", strlen(*p));    //4
	//printf("%d\n", strlen(p[0]));    //1
	//printf("%d\n", strlen(&p));    //4
	//printf("%d\n", strlen(&p + 1));    //4
	//printf("%d\n", strlen(&p[0] + 1));    //4

	//��ά����
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));    //3*4*4 = 48
	//printf("%d\n", sizeof(a[0][0]));    //4
	//printf("%d\n", sizeof(a[0]));    //4����һ����Ԫ��
	//printf("%d\n", sizeof(a[0] + 1));    //4���ڶ�����Ԫ��
	//printf("%d\n", sizeof(*(a[0] + 1)));    //4
	//printf("%d\n", sizeof(a + 1));    //4
	//printf("%d\n", sizeof(*(a + 1)));    //4
	//printf("%d\n", sizeof(&a[0] + 1));    //4
	//printf("%d\n", sizeof(*(&a[0] + 1)));    //4
	//printf("%d\n", sizeof(*a));    //4
	//printf("%d\n", sizeof(a[3]));    //4


	return 0;
}