#define _CRT_SDECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//关于整型数据是否有符号位的一些运算

//int main() {
//	char a = -1;    //没有规定默认是否有符号，但大多数编译器都默认为有符号
//	signed char b = -1;
//	unsigned char c = -1;    //无符号char只能表示0~255，-1的补码全1，转换为无符号就是255
//	printf("a:%d b:%d c:%d\n", a, b, c);
//	return 0;
//}

//int main() {
//	unsigned int i = 0;    //无符号即表示没有负数
//	for (i = 9; i >= 0; i--) {    //当i为负数才会退出，所以死循环。i变成-1时，是直接把它补码按无符号计算
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main() {
//	char arr[1000];    //char型的数组，范围是-128~127
//	int i = 0;
//	for (i = 0; i < 1000; i++) {
//		arr[i] = -i - 1;    //赋值依次是-1,-2,-3,...,-128,127,126,...,3,2,1,0,-1,-2,-3,...
//	}
//	printf("%d\n", strlen(arr));    //i = 255时，-i-1是0,'\0'的ASCII为0，此时strlen认为自己遇到了结束标志，后面的不再计算
//	return 0;
//}

//关于浮点型和整型内存分配存储的差别
int main() {
	int a = 5;
	float* pa = (float*)&a;    //定义浮点型指针，以浮点型存储方式指向a
	printf("%d %f\n", a, *pa);    //在float存储方式中指数位E全0，表示一个无限趋近0的小数

	float b = 5.0;
	int* pb = (int*)&b;
	printf("%f %d\n", b, *pb);    //在float存储方式中指数位E有值，转换到整型中就是很大的值
	return 0;
}

//判断当前平台的字节序

//基础版

//int main() {
//	int a = 1;    //a:0x 00 00 00 01
//	char* p = (char*)&a;    //定义指针p指向低地址
//	if (*p == 1) {    //判断低地址里存放的是否是低位字节序内容
//		printf("小端字节序存储\n");
//	}
//	else {
//		printf("大端字节序存储\n");
//	}
//	return 0;
//}

//改进版

//int check(void) {
//	int a = 1;
//	return *((char*)&a);
//}
//int main() {
//	int ret = check();
//	if (ret) {   
//		printf("小端字节序存储\n");
//	}
//	else {
//		printf("大端字节序存储\n");
//	}
//	return 0;
//}