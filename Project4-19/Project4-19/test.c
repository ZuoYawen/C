#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//数据溢出

////究其根源，是因为栈区分配时地址由高到低，而数组分配时随着下标增大，地址由低到高
//int main() {
//	int i = 0;
//	int arr[] = { 1,2,3,4,5 };
//	for (i = 0; i < 8; i++) {
//		arr[i] = 0;
//		printf("@#$%\n");
//	}
//	return 0;
//}

//阶乘求和

//int main() {
//	int i = 0;
//	int j = 0; 
//	int ret = 1;
//	int sum = 0;
//	int input = 0;
//	scanf("%d", &input);
//	for (i = 1;i <= input;i++) {
//		//ret = 1;
//		for (j = 1;j <= i;j++) {
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
