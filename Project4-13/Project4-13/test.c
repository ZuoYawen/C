#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>    //断言的头文件


//*******************便于调试的代码练习

// 输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分。

//解题思路：
//    设置头和尾指针，分别从两端开始，奇数指针left从前面往后开始找，找到偶数进入偶数指针right，再从后往前找到奇数停下来，
//交换两个指针的值，一趟循环结束。终止条件是奇数指针大于偶数指针。
//void control(int* arr,int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1)//如果是奇数就一直往后找，直到找到偶数
//		{
//			left++;
//		}
//		while ( arr[right] % 2 == 0)////如果是偶数就一直前后找，直到找到奇数
//		{
//			right--;
//		}
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//	return;
//}

// 模拟实现库函数strcpy

//char* strcpy_(char * ch1,const char * ch2) {
//	assert(ch1 != NULL);    //断言，处理空指针异常的，是一个宏表达式。（）里表达式为真啥也不干，为假直接报错不执行程序
//	assert(ch2 != NULL);    //NULL是一个指针
//	char* ret = ch1;
//	while (*ch1++ = *ch2++) {
//		;
//	}
//	return ret;
//}

//模拟实现库函数strlen

//int strlen_(const char * ch) {
//	assert(ch != NULL);   
//	int count = 0;
//	while (*ch++) {
//		count++;
//	}
//	return count;
//}

//主函数

//int main() {
//	char arr1[] = "zuo";
//	char arr2[] = "chen";
//	int ch[] = { 1,2,3,4,5,6,7,8 };
//	printf("%d\n",strlen_(arr1));
//	printf("%s\n", strcpy_(arr2, arr1));
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	control(ch,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", ch[i]);
//	}
//	printf("\n");
//	return 0;
//}