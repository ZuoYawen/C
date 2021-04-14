#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h> //double pow( double x, double y );x的y次方

//*******************************编程练习

//喝汽水问题：喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水

//int main() {   
//	int money = 0;    //给的总钱数
//	scanf("%d", &money);
//	int n = money;    //当前汽水总数 
//	int num = n;    //总的汽水数
//	while (n >= 2) {
//		int count = 0;    //当换的汽水数为奇数时下一次换多出的1瓶汽水
//		if (n % 2 != 0) {
//			count += 1;
//		}
//		num = num + n / 2;
//		n = n / 2 + count;    //不可以写成n /= 2 + count；会使得运算顺序出现混乱！！！ 
//	}
//	printf("一共的汽水数量：%d\n", num);
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

//求出0～100000之间的所有“水仙花数”并输出。一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//int main() {
//	int i = 0;
//	printf("水仙花数：\n");
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
//		//判断是否为水仙花数
//		if (i == sum) {
//			printf("%d ", sum);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//写一个函数，可以逆序一个字符串的内容（不完美，希望可以不用提前输入长度的逆序解法）

//void print_str(char* arr,int sz) {
//	int i = 0;
//	for (i = sz -1; i >= 0; i--) {
//		printf("%c", *(arr+i));    //字符的输出用%c
//	}
//	printf("\n");
//	return;
//}
//int main() {
//	int i = 0;
//	char str[100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	getchar();    //gethchar接收scanf函数确认结束的那个回车，防止数据溢出！！！
//	for (i = 0; i < n; i++) {
//		scanf("%c", &str[i]);
//	}
//	print_str(str,n);
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