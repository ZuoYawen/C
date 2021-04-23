#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//在这里回调加减乘除四个函数
void cal(int (*pfun)(int, int))    //形参为函数指针（该指针指向的函数：返回值int，形参是2个int）
{
	int x = 0;
	int y = 0;
	printf("请输入操作数：");
	scanf("%d%d", &x, &y);
	int ret = (*pfun)(x, y);    //也可以直接pfun(x, y); 函数名就是函数首地址
	printf("result:%d\n", ret);
	return;
}

int main()
{
	//char *pc = "zuoyawen";     //相当于：char pc[] = "zuoyawen"   
	//printf("%s\n", pc);    //%s从键盘输入一个字符串

	//指针数组的使用
	//int arr1[] = { 1,2,3 };
	//int arr2[] = { 2,3,4 };
	//int arr3[] = { 3,4,5 };
	//int* arr[] = { arr1,arr2,arr3 };
	//int i = 0, j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	//数组指针的使用
	//int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
	//int(*pa)[3] = arr;    //定义类型为 int (*)[3] 的数组指针，指向大小为3个字节的整型数组
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf( "%d ", (*(pa+i))[j] );
	//	}
	//	printf("\n");
	//}

	//函数指针的使用
	//int (*padd)(int, int) = Add;    //Add和&Add一个意思，都是函数首元素地址
	//int ret = (*padd)(2, 3);    //padd() 和 (*padd)() 一个意思
	//printf("result:%d\n", ret);

	//函数指针数组（也叫转移表）的应用，这里写一个加减乘除计算器
	//int (*pcalarr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	//int input = 0;
	//do
	//{
	//	printf("请选择：1.加法  2.减法  3.乘法  4.除法  0.退出\n");
	//	scanf("%d", &input);
	//	if (input == 0)
	//	{
	//		break;
	//	}
	//	else if (input >= 1 && input <= 4)
	//	{
	//		int x = 0;
	//		int y = 0;
	//		printf("请输入需要计算的的操作数：");
	//		scanf("%d%d", &x, &y);
	//		int ret = pcalarr[input](x, y);
	//		printf("result:%d\n", ret);
	//	}
	//	else
	//	{
	//		printf("输入违法，重新输入！\n");
	//	}
	//} while (input);

	//回调函数的应用,在函数cal里回调加减乘除四个函数
	int input = 0;
	do
	{
		printf("请选择：1.加法  2.减法  3.乘法  4.除法  0.退出\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			cal(Add);
			break;
		case 2:
			cal(Sub);
			break;
		case 3:
			cal(Mul);
			break;
		case 4:
			cal(Div);
			break;
		case 0:
			printf("感谢使用，已退出！\n");
			break;
		default:
			printf("输入违法，重新输入！\n");
			break;
		}
	} while (input);

	return 0;
}