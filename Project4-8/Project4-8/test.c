#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<math.h>

//*************************************函数练习

//使用之后值自增一的函数

//void Add(int* num) {    //传址调用
//	*num += 1;
//}
//int main() {
//	int num = 0;
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//用递归和非递归的方式求阶乘

//int rec_fac(int num)    //递归方式
//{
//	if (num > 1)
//		return num * rec_fac(num - 1);
//	else
//		return 1;
//}
//int no_rec_fac(int num)    //非递归方式
//{
//	int i = 0;
//	int result = 1;
//	for (i = 1; i <= num; i++)
//	{
//		result *= i;
//	}
//	return result;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	printf("%d的阶乘是%d\n",input, rec_fac(input));
//	printf("%d的阶乘是%d\n", input, no_rec_fac(input));
//	return 0;
//}

//递归打印整数的每一位数字

//void print_num(int num)
//{
//	if (num > 9)
//	{
//	print_num(num / 10);    //(num/10)去掉最低位
//	}
//	printf("%d ", num % 10);    //(num%10)得到最低位
//	return;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	print_num(input);
//	return 0;
//}

//实现n*n乘法口诀表

//void print_mul_table(int num)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("你想输出n*n的乘法表的n是几？");
//	scanf("%d", &num);
//	print_mul_table(num);
//	return 0;
//}

//实现两个整数的交换(典型的传址调用)

//int swap(int * a, int * b)
//{
//	int  temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("交换后：a = %d,b = %d\n", a, b);
//	return 0;
//}

//有序整数数组的二分查找（返回数组下标）

//int bin_search(int *arr,int sz,int x) {
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;    //注意把mid的值放到循环内部，保证二分中点在动态变化
//		if (x > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (x < arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	if (left > right) {
//		return -1;
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int input = 0;
//	int result = 0;
//	printf("输入要查询的数：\n");
//	scanf("%d", &input);
//	result = bin_search(arr, sz, input);
//	if (result == -1) {
//		printf("找不到！\n");
//	}
//	else {
//		printf("找到了，数组下标是%d\n", result);
//	}
//	return 0;
//}

//判断闰年和素数

//函数判断闰年
// 
//int is_leep_year(int year)
//{
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
// 
//用函数实现判断100到200之间的素数
// 
//int is_prime(int num)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	scanf("%d", &input);
//	ret = is_prime(input);
//	//ret = is_leep_year(input);
//	if (ret == 1)
//		printf("yes!\n");
//	else
//		printf("no!\n");
//	return 0;
//}

//*************************************循环练习

//int main()
//{
	//编写代码在一个整形有序数组中查找具体的某个数。要求：找到了就打印数字所在的下标，找不到则输出：找不到。

	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int num = 0;
	//scanf("%d", &num);
	//int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//int middle = 0;
	//while (left <= right)
	//{
	//	middle = (left + right) / 2;
	//	if (num == arr[middle])
	//	{
	//		printf("数字%d的下标为%d\n", num, middle);
	//		break;
	//	}
	//	else if (num > arr[middle])
	//		left = middle + 1;
	//	else
	//		right = middle - 1;
	//}
	//if (left > right)
	//{
	//	printf("未找到该数字！\n");
	//}

	//打印九九乘法口诀表

	//int i = 0;
	//int j = 0;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf("%d*%d=%-2d ", j, i, i * j);    //%-2d使得所有算式左对齐，%2d右对齐
	//	}
	//	printf("\n");
	//}

	//求10个整数中的最大值

	//int arr[10] = { 0 };
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//int j = 0;
	//int max = arr[0];    
	//for (j = 0; j < 9; j++)
	//{
	//	if (arr[j] < arr[j + 1])
	//		max = arr[j+1];    //不能初始化为0，要是都是降序负数（如：-1到-10），不会满足判断条件，所以假设数组里的某个元素是最大值
	//}
	//printf("10个数最大的是：%d\n", max);

	//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值

	//int i = 0;
	//double sum = 0;
	//int sign = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum += sign * (1.0 / i);    //对于除法要是除号两边都是整数，那么结果也会默认是整数
	//	sign = -sign;
	//}
	//printf("%.4f\n", sum);

	//1-100出现某个数字的个数（9为例）

	//int i = 0;
	//int count = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 9)    //计算个位的9
	//		count++;
	//	if (i / 10 == 9)    //计算十位的9
	//		count++;
	//}
	//printf("出现9的个数为：%d\n",count);    

	//打印100到200之间的素数（试除法）

	//int num = 0;
	//int i = 0;
	//for (num = 101; num <= 199; num+= 2)    //代码优化，素数不可能是偶数 
	//{
	//	for (i = 2; i <= sqrt(num); i++)
	//	{
	//		if (num % i == 0)
	//			break;
	//	}
	//	if (i > sqrt(num))    //2-sqrt(num)走完都不会被整除，就是素数
	//		printf("%d ", num);
	//}
	//printf("\n");

	////1000到2000之间的闰年

	//int year = 1000;
	//for (year = 1000; year <= 2000; year++)
	//{
	//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	//		printf("%d ", year);
	//}
	//printf("\n");

	//给定两个数，求其最大公约数

	////方法一：暴力求解法，普通循环判断
	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//int min = 0;
	//min = (a < b) ? a : b;
	//int i = 0;
	//for (i = min; i > 0; i--)
	//{
	//	if (a % i == 0 && b % i == 0)
	//	{
	//		printf("最大公约数：%d\n", i);
	//		break;
	//	}
	//}
    ////方法二：辗转相除法
    //int a = 0;
    //int b = 0;
    //int c = 0;
	//scanf("%d %d", &a, &b);
	//while (a % b != 0) {
	//	c = a % b;
	//	a = b;
	//	b = c;
	//}
	//printf("最大公约数：%d\n", b);

	//求100以内3的公倍数

	//int i = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 3 == 0)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n");

	//把三个数按大到小排列

	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d %d %d", &a, &b, &c);
	//int temp = 0;
	//if (a < b)
	//{
	//	temp = a;
	//	a = b;
	//	b = temp;
	//}
	//if (a < c)
	//{
	//	temp = a;
	//	a = c;
	//	c = temp;
	//}
	//if (b < c)
	//{
	//	temp = b;
	//	b = c;
	//	c = temp;
	//}
	//printf("从大到小：%d > %d > %d\n", a, b, c);

	//求两个数中的较大值

	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//int max = 0;
	//max = ((a > b) ? a : b);
	//printf("较大值是：%d\n", max);

//	return 0;
//}