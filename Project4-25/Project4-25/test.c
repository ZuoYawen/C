#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ROW 4
#define COL 7

//实现一个函数，可以左旋字符串中的k个字符。
// 方法一：一位一位的去旋转，直到完成目标
//void spin1(char* arr, int n)
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
//方法二：通过3次字符串逆置得到结果，提升了效率
//void reverse(char* arr, int num)
//{
//	int left = 0;
//	int right = num - 1;
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	return;
//}
//void spin2(char* arr, int n)
//{
//	int sz = strlen(arr);
//	reverse(arr, n);
//	reverse(arr + n, sz - n);
//	reverse(arr, sz);
//	return;
//}
//int main()
//{
//	char arr[20] = { 0 };
//	int num = 0;
//	printf("请输入字符串和要旋转的字符数：");
//	scanf("%s%d", &arr,&num);
//	//spin1(arr, num);
//	spin2(arr, num);
//	printf("旋转%d个字符后，字符串变成：%s\n", num, arr);
//	return 0;
//}

//qsort模拟实现
////冒泡模拟实现回调机制（升序）
////参数依次表示的意义：要排序的数组、数组内的元素个数、每个元素的字节数、比较方法（e1大于e2，返回正值；等于返回0；小于返回负值）
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
//			if (cmp((char*)arr+j*byte, (char*)arr+(j + 1)*byte) > 0)    //难点，理解了这个就理解了这个函数了
//			{
//				swap((char*)arr + j * byte, (char*)arr + (j + 1) * byte, byte);
//			}
//		}
//	}
//	return;
//}
////下面比较一下整数数组，升序排列
//int int_cmp(const int* x, const int* y)
//{
//	return (*x - *y);    //加一个负号就是降序排列了，这里决定排序方式
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
//	bubble_sort(arr, sz, 4, int_cmp);
//	printf("\n");
//	printf("排序后：");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

//练习一个float型数组的qsort快排实现
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
//	printf("排序前：");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%.1f ", arr[i]);
//	}
//	qsort(arr, sz, 4, float_cmp);
//	printf("\n");
//	printf("排序后：");
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

//判断e2是不是e1旋转得到的，是返回1,不是返回0。循环旋转e1与e2作比较，e2只做输入不改变，定义为const
//方法1：把所有可能的情况都列出来去比较，开销很大但是可行
int judge_spin1(char* e1, const char* e2)
{
	int sz = strlen(e1);
	int i = 0;
	for (i = 0; i < sz; i++)    //可能旋转的元素个数
	{
		char tmp = e1[0];
		int j = 0;
		for (j = 0; j < sz - 1; j++)
		{
			e1[j] = e1[j + 1];
		}
		e1[sz - 1] = tmp;
		if (strcmp(e1, e2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
//方法2：利用strncat()函数构造一个新的字符串，通过strstr()函数直接找到子字串，能找到说明就是旋转得到的
int judge_spin2(char* e1, const char* e2)
{
	int sz = strlen(e1);
	char *str = strncat(e1, e1, sz);
	if(strstr(str,e2) != NULL)
		{
			return 1;
		}
	return 0;
}
int main()
{
	char str1[100] = { 0 };
	char str2[100] = { 0 };
	printf("请输入要判断的字符串：\n");
	scanf("%s%s", str1, str2);
	int ret = judge_spin2(str1, str2);
	if (ret)
	{
		printf("旋转得到的。\n");
	}
	else
	{
		printf("不是旋转得到的。\n");
	}
	return 0;
}

//杨氏矩阵:矩阵的每行从左到右是递增的，矩阵每列从上到下是递增的。请编写程序在杨氏矩阵中查找某个数字是否存在
int num_search(int arr[ROW][COL], int* prow, int* pcol, int num)
{
	//从右上角开始
	int i = 0;
	int j = COL - 1;
	while (i < ROW && j >= 0)
	{
		//下1，去一行
		if (num > arr[i][j])
		{
			i++;
		}
		//左1，去一列
		else if (num < arr[i][j])
		{
			j--;
		}
		else
		{
			*prow = i;
			*pcol = j;
			return 1;
		}
	}
	*prow = -1;
	*pcol = -1;
	return 0;
}
int main()
{
	int arr[ROW][COL] = { {0,7,14,21,28,35,42},
		                  {1,8,15,22,29,36,43},
		                  {2,9,16,23,30,37,44},
		                  {3,10,17,24,31,38,45} };
	int x = ROW;
	int y = COL;
	int input = 0;
	printf("请输入要查找的值：");
	scanf("%d", &input);
	int ret = num_search(arr, &x, &y, input);
	if (ret)
	{
		printf("存在，坐标是(%d,%d)\n", x + 1, y + 1);
	}
	else
	{
		printf("不存在\n");
	}
	return 0;
}
