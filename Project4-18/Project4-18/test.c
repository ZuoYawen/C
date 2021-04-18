#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//指针数组
int main() {
	int a = 1;
	int b = 2;
	int c = 3;
	int i = 0;
	int* arr[3] = { &a,&b,&c };
	for (i = 0; i < 3; i++) {
		printf("%d ", *arr[i]);
	}
	return 0;
}

//指针运算

//指针的关系运算
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	int* p_arr = &arr[0];
//	for (p_arr; p_arr < &arr[5]; *p_arr++) {
//		printf("%d ", *p_arr);
//	}
//	return 0;
//}

//加减整数和指针相减
//int main() {
//	int a[] = { 1,2,3,4,5 };
//	int* p = &a[0];
//	int* s = &a[4];
//	int ret = s - p;
//	printf("%d\n", ret);
//	printf("%d\n", *p + ret);
//	return 0;
//}

