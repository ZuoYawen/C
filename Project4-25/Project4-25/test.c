#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROW 4
#define COL 7

//ʵ��һ�����������������ַ����е�k���ַ���
//void spin(char* arr, int n)
//{
//	int sz = strlen(arr);
//	while (n)
//	{
//		int i = 0;
//		char tmp = 0;
//		tmp = arr[0];
//		for (i = 0; i < sz - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[sz - 1] = tmp;
//		n--;
//	}
//	return;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	int num = 0;
//	printf("�������ַ�����Ҫ��ת���ַ�����");
//	scanf("%s%d", &arr,&num);
//	spin(arr, num);
//	printf("��ת%d���ַ����ַ�����ɣ�%s\n", num, arr);
//	return 0;
//}

//qsortģ��ʵ��
////ð��ģ��ʵ�ֻص����ƣ�����
////�������α�ʾ�����壺Ҫ��������顢�����ڵ�Ԫ�ظ�����ÿ��Ԫ�ص��ֽ������ȽϷ�����e1����e2��������ֵ�����ڷ���0��С�ڷ��ظ�ֵ��
//void swap(char* arr1, char* arr2, int byte)
//{
//	int i = 0;
//	for (i = 0; i < byte; i++)
//	{
//		char tmp = *(arr1 + i);
//		*(arr1 + i) = *(arr2 + i);
//		*(arr2 + i) = tmp;
//	}
//	return;
//}
//void bubble_sort(void* arr, int sz, int byte, int (*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (cmp((char*)arr+j*byte, (char*)arr+(j + 1)*byte) > 0)    //�ѵ㣬������������������������
//			{
//				swap((char*)arr + j * byte, (char*)arr + (j + 1) * byte, byte);
//			}
//		}
//	}
//	return;
//}
////����Ƚ�һ���������飬��������
//int int_cmp(const int* x, const int* y)
//{
//	return (*x - *y);    //��һ�����ž��ǽ��������ˣ������������ʽ
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
//	bubble_sort(arr, sz, 4, int_cmp);
//	printf("\n");
//	printf("�����");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//��ϰһ��float�������qsort����ʵ��
//int float_cmp(const float* x, const float* y)
//{
//	float ret = *x - *y;
//	if (ret > (int)ret)
//	{
//		return (int)ret + 1;
//	}
//	return (int)ret;    
//}
//int main()
//{
//	float arr[] = { 1.2f,3.8f,4.5f,6.4f,5.4f };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	printf("����ǰ��");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%.1f ", arr[i]);
//	}
//	qsort(arr, sz, 4, float_cmp);
//	printf("\n");
//	printf("�����");
//	for (i = 0; i < sz; i++)
//	{
//		if (i != sz - 1) 
//		{
//			printf("%.1f < ", arr[i]);
//		}
//		else
//		{
//			printf("%.1f", arr[i]);
//		}	
//	}
//	printf("\n");
//	return 0;
//}

//�ж�e2�ǲ���e1��ת�õ��ģ��Ƿ���1,���Ƿ���0��ѭ����תe1��e2���Ƚϣ�e2ֻ�����벻�ı䣬����Ϊconst
//int judge_spin(char* e1, const char* e2)
//{
//	int sz = strlen(e1);
//	int i = 0;
//	for (i = 0; i < sz; i++)    //������ת��Ԫ�ظ���
//	{
//		char tmp = e1[0];
//		int j = 0;
//		for (j = 0; j < sz - 1; j++)
//		{
//			e1[j] = e1[j + 1];
//		}
//		e1[sz - 1] = tmp;
//		if (strcmp(e1, e2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char str1[100] = { 0 };
//	char str2[100] = { 0 };
//	printf("������Ҫ�жϵ��ַ�����\n");
//	scanf("%s%s", str1, str2);
//	int ret = judge_spin(str1, str2);
//	if (ret)
//	{
//		printf("��ת�õ��ġ�\n");
//	}
//	else
//	{
//		printf("������ת�õ��ġ�\n");
//	}
//	return 0;
//}

//���Ͼ���:�����ÿ�д������ǵ����ģ�����ÿ�д��ϵ����ǵ����ġ����д���������Ͼ����в���ĳ�������Ƿ����
//int num_search1(int arr[ROW][COL],int num)
//{
//	//Ԫ�ز��ھ���Χ
//	if (num < arr[0][0] || num > arr[ROW - 1][COL - 1])
//	{
//		return 0;
//	}
//	int i = 0;
//	int j = 0;
//	//�����Ͻ���С�Ŀ�ʼ��������������ÿ������1����1
//	while (i < COL)
//	{
//		//��1
//		if (num > arr[i][j])
//		{
//			i++;
//		}
//		//��1���ˣ��˻�ȥ��1
//		if (num < arr[i][j])
//		{
//			i--;
//			j++;
//		}
//		//�ҵ����һ�У�����С�ˣ�������
//		if (i == ROW - 1)
//		{
//			j++;
//		}
//		if (arr[i][j] == num)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int num_search2(int arr[ROW][COL], int num)
//{
//	if (num > arr[ROW - 1][COL - 1] || num < arr[0][0])
//	{
//		return 0;
//	}
//	int i = 0;
//	int j = 0;
//	//�����Ͻ���С�Ŀ�ʼ��������������ÿ������1����1
//	while (i < COL)
//	{
//		//��1
//		if (num > arr[i][j])
//		{
//			j++;
//		}
//		//��1���ˣ��˻�ȥ��1
//		if (num < arr[i][j])
//		{
//			j--;
//			i++;
//		}
//		//�ҵ����һ�У�����С�ˣ�������
//		if (j == COL - 1)
//		{
//			i++;
//		}
//		if (num == arr[i][j])
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[ROW][COL] = { {0,7,14,21,28,35,42},
//		                  {1,8,15,22,29,36,43},
//		                  {2,9,16,23,30,37,44},
//		                  {3,10,17,24,31,38,45} };
//	int input = 0;
//	printf("������Ҫ���ҵ�ֵ��");
//	scanf("%d", &input);
//	//int ret = num_search1(arr, input);
//	int ret = num_search2(arr, input);
//	if (ret)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}