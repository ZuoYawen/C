#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//递归实现青蛙跳台阶问题

int rec_fab(int n) {
	int a = 1e9 + 7;
	if (n == 0) {
		return 1;
	}
	if (n <= 2) {
		return n;
	}
	else {
		return (rec_fab(n - 1) + rec_fab(n - 2))%a;
	}
}
int main() {
	int input = 0;
	scanf("%d", &input);
	printf("跳%d级台阶一共有%d种跳法\n", input, rec_fab(input));
}

//非递归实现青蛙跳台阶问题

//int no_rec_fab(int n) {
//	int a = 1e9 + 7;
//	int ret = 1;
//	if (n == 0) {
//		ret = 1;
//	}
//	else if (n <= 2) {
//		ret = n;
//	}
//	else {
//		ret = 2;
//		int pre_ret = 1;    //f(n-1)
//		int pre_pre_ret = 0;    //f(n-2)
//		while (n > 2) {
//			pre_pre_ret = pre_ret;
//			pre_ret = ret;
//			ret = pre_pre_ret + pre_ret;
//			n--;
//		}
//	}
//	return ret%a;
//}
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	printf("跳%d级台阶一共有%d种跳法\n", input, no_rec_fab(input));
//}


//递归实现汉诺塔问题

//n表示层数，a：原柱 b：目标柱 c：辅助柱
//int time = 0;    //设计一个全局变量来记录次数
//int rec_hanoi(int n, char a, char b, char c) {
//	if (n >= 1) {
//		rec_hanoi(n - 1, a, c, b);    //把a的n-1层移到辅助柱c上
//		printf("第%d次：把第%d层圆盘从%c移到%c上\n",time+1,n,a,b );    //把a的最下面一层移到目标柱b上
//		time++;
//		rec_hanoi(n - 1, c, b, a);    //把辅助柱c的n-1层移到目标柱b上
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	rec_hanoi(n, 'A', 'C', 'B');
//	printf("%d\n",time );
//	return 0;
//}

//非递归实现计算汉诺塔移动次数

//int no_rec_hanoi(int n) {
//	//移动(n-1)层，移动的次数为(2^n)-1（写几个规模小的，可以总结出规律）
//	//从原柱上移动(n-1)层到辅助柱，用(2^(n-1))-1次
//	//把原柱最下面移到目标柱，用1次
//	//把辅助柱(n-1)层移动到目标柱，用(2^(n-1))-1次
//	//所以总次数就是2*((2^(n-1))-1)+1 = 2^n-2+1 = 2^n-1
//	return pow(2,n)-1;    
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", no_rec_hanoi(n));
//	return 0;
//}