#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//*************************************函数练习

//递归和非递归实现计算非负整数组成数字之和

//int rec_add(int num) {
//	if (num > 9) {
//		return rec_add(num / 10) + num % 10;
//	}
//	else {
//		return num;
//	}
//}
//int no_rec_add(int num) {
//	int sum = 0;
//	if (num <= 9) {
//		return  num;
//	}
//	while (num != 0) {
//		sum += (num % 10);
//		num = num / 10;
//	}
//	return sum;
//}
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	printf("输入的数字之和是：%d\n",rec_add(input));
//	printf("输入的数字之和是：%d\n", no_rec_add(input));
//}

//递归实现n的k次方

//double power(double n, double k) {
//	if (n == 0) {
//		return 0;
//	}
//	if (k > 0)
//	{
//		return n * power(n, k - 1);
//	}
//	if (k == 0) {
//		return 1;
//	}
//	if(k < 0){ 
//		return 1 / power(n, -k );    //分母为1表示已经次方过一次，所以递归的时候不用再给次数减一
//	}
//}
//int main() {
//	double n = 0;
//	double k = 0;
//	double result = 0;
//	printf("依次输入底数（n）和幂（k）:");
//	scanf("%lf %lf", &n, &k);    //输入double型数据(8字节)用%lf，float型数据（4字节）用%f
//	result = power(n, k);
//	printf("结果是：%.3f\n",result);    //输出时不做区分
//	return 0;
//}

//用递归和非递归的方式求斐波那契数列

//int rec_fab(int n)    //递归方式
//{
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return rec_fab(n - 1) + rec_fab(n - 2);
//	}
//}
//int no_rec_fab(int n)    //非递归方式
//{    //注意把区间表示完！！
//	int result = 1;
//	int result_pre = 1;
//	int result_pre_pre = 1;
//	if (n <= 2) {
//		result = 1;
//	}
//	while (n > 2) {
//		result_pre_pre = result_pre;
//		result_pre = result;
//		result = result_pre + result_pre_pre;
//		n -= 1;
//	} 
//	return result;
//}
//int main(){
//	int input = 0;
//	scanf("%d", &input);
//	printf("斐波那契数列的值为：%d\n", rec_fab(input));
//	printf("斐波那契数列的值为：%d\n", no_rec_fab(input));
//}

//用递归和非递归的方式模拟strlen函数

//int rec_strlen(char * ch)    //递归方式
//{
//	if (*ch == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return rec_strlen(ch + 1) + 1;
//	}
//}
//int no_rec_strlen(char* ch)    //非递归方式
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		count += 1;
//		ch = ch + 1;    //地址的加减
//	}
//	return count;
//}
//int main()
//{
//	char str[20] = {"zuo"};
//	int result = 0;
//	printf("字符串长度为：%d\n", rec_strlen(str));
//	printf("字符串长度为：%d\n", no_rec_strlen(str));
//	return 0;
//}
