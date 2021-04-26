#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h> //double pow( double x, double y );x的y次方
#define EMPTYBOTTLE 3

//*******************************编程练习

//喝汽水问题：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水

//int drink(int n)
//{
//	int sum = n;    //总的汽水数
//	while (n >= EMPTYBOTTLE)
//	{
//		int count = 0;    //不够换一瓶的空瓶子数
//		if (n % EMPTYBOTTLE)
//		{
//			count += n % EMPTYBOTTLE;
//		}
//		sum = sum + n / EMPTYBOTTLE;
//		n = n / EMPTYBOTTLE + count;    //不可以写成n /= 2 + count；会使得运算顺序出现混乱！！！ 
//	}
//	return sum;
//}
//int drink2(int n)
//{
//	return 2 * n -1;
//}
//int main() 
//{   
//	int n = 0;    //给的总钱数
//	printf("请输入你的钱数：");
//	scanf("%d", &n);
//	printf("一共可以喝的汽水数量：%d\n", drink2(n));
//	return 0;
//}

//*******************************指针练习

//打印菱形

//void print_star(int n) {
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	//上半部分
//	for (i = 1; i <= n; i++) {    //打印的行
//		for (j = 0; j < n - i ; j++) {    //每行打印的空格是n - i
//			printf(" ");
//		}
//		for (k = 0; k < 2 * i - 1; k++) {    //每行打印的*是2*i-1
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分
//	for (i = 1; i <= n - 1; i++) {    //打印的行，最长的那一行与上半部分一样，所以舍去
//		for (j = 0; j < i; j++) {    //每行打印的空格，因为最长的一行舍去了，所以第几行打印几个空格
//			printf(" ");
//		}
//		for (k = 0; k < 2 * (n - i) - 1; k++) {    //每行打印的*，与上半部分相反，所以把i换成(n-i)
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int num = 0;
//	printf("打印的菱形一半是几行的？");
//	scanf("%d", &num);
//	print_star(num);
//	return 0;
//}

//求出0～100000之间的所有自幂数并输出。一个n位数，其各位数字的n次方之和确好等于该数本身

//int main() {
//	int i = 0;
//	printf("自幂数：\n");
//	for (i = 0; i < 100000; i++) {
//		int temp = i;    //防止循环过程i被赋予不同值，计算出问题
//		int n = 1;
//		int sum = 0;
//
//		//计算这个数字的位数
//		while (temp > 9) {
//			n++;
//			temp /= 10;
//		}
//
//		//计算位数次方和
//		temp = i;    //计算位数时temp可能会变成0，所以这里重新赋一下值
//		while (temp) {
//			sum += pow((temp % 10), n);
//			temp /= 10;
//		}
//
//		//判断是否为自幂数
//		if (i == sum) {
//			printf("%d ", sum);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//写一个函数，可以逆序一个字符串的内容

//逆序打印
//void print_str(char* arr) {    
//	int i = 0;
//	int sz = strlen(arr);
//	for (i = sz -1; i >= 0; i--) {
//		printf("%c", *(arr+i));    //字符的输出用%c
//	}
//	printf("\n");
//	return;
//}
//字符串逆置
//void reverse(char* arr)
//{
//	int sz = strlen(arr);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	return;
//}
//int main() {
//	int i = 0;
//	char str[100] = { 0 };
//	printf("please input your string:");
//	gets(str);
//	//scanf("%s", str);    //直接%s输入
//	reverse(str);
//	printf("after reverse:%s",str);
//	//print_str(str);
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，

//int sum_a(int a,int n) {
//	int sum = 0;
//	int i = 0;
//	int a_ = a;
//	while (n > i) {
//		sum = sum + a;
//		i++;
//		a = a * 10 + a_;
//	}
//	return sum;
//}
//int main() {
//	int a = 0;
//	int n = 0;
//	printf("依次输入数字a和项数n：\n");
//	scanf("%d%d", &a,&n);
//	int sum = sum_a(a,n);
//	printf("%d\n", sum);
//	return 0;
//}

//使用指针打印数组内容

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *(arr+i));
//	}
//	printf("\n");
//	return 0;
//}
