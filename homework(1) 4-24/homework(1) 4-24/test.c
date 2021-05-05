#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//************************关于strlen和sizeof在数组上的一些练习*************************

//精髓有三点：
//第一是，记住两个例外，对于数组名除了 &数组名 和 sizeof（数组名）是表示数组全部，其余都是数组首元素地址
//第二是，对于sizeof只关注大小，单位是字节；对于strlen，关注的是传入的一定要是地址，然后它会一直找'\0'
//第三是，二维数组首元素是一行，一位数组首元素是一个！！！

int main()
{
	////一维数组
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));    //16
	//printf("%d\n", sizeof(a + 0));    //4
	//printf("%d\n", sizeof(*a));    //4
	//printf("%d\n", sizeof(a + 1));   //4 
	//printf("%d\n", sizeof(a[1]));    //4
	//printf("%d\n", sizeof(&a));    //16    //4，取址的结果一定是4或者8，因为都是地址
	//printf("%d\n", sizeof(*&a));    //16
	//printf("%d\n", sizeof(&a + 1));    //不会    //4，取址的结果一定是4或者8，因为都是地址
	//printf("%d\n", sizeof(&a[0]));    //4
	//printf("%d\n", sizeof(&a[0] + 1));    //4


	//字符数组
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr));    //6
	//printf("%d\n", sizeof(arr + 0));    //1    //4，地址
	//printf("%d\n", sizeof(*arr));    //1
	//printf("%d\n", sizeof(arr[1]));    //1
	//printf("%d\n", sizeof(&arr));    //4
	//printf("%d\n", sizeof(&arr + 1));    //4
	//printf("%d\n", sizeof(&arr[0] + 1));    //4
	//int strlen(const char* arr);
	//printf("%d\n", strlen(arr));    //随机值，它要找到'\0'才会停下来
	//printf("%d\n", strlen(arr + 0));    //1    //随机值，原因和上一个一样
	////printf("%d\n", strlen(*arr));    //1    //传过来不是地址，代码error崩溃
	////printf("%d\n", strlen(arr[1]));    //1     //传过来不是地址，代码error崩溃
	//printf("%d\n", strlen(&arr));    //4     //随机值，原因和第一个一样
	//printf("%d\n", strlen(&arr + 1));    //4     //随机值，原因和第一个一样
	//printf("%d\n", strlen(&arr[0] + 1));    //4     //随机值，原因和第一个一样

	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));    //7
	//printf("%d\n", sizeof(arr + 0));    //4
	//printf("%d\n", sizeof(*arr));    //1
	//printf("%d\n", sizeof(arr[1]));    //1
	//printf("%d\n", sizeof(&arr));    //4
	//printf("%d\n", sizeof(&arr + 1));    //4
	//printf("%d\n", sizeof(&arr[0] + 1));    //4
	//printf("%d\n", strlen(arr));    //6
	//printf("%d\n", strlen(arr + 0));    //6
	////printf("%d\n", strlen(*arr));    //错误，不是指针
	////printf("%d\n", strlen(arr[1]));    //错误，不是指针
	//printf("%d\n", strlen(&arr));    //6
	//printf("%d\n", strlen(&arr + 1));    //随机值
	//printf("%d\n", strlen(&arr[0] + 1));    //5

	//char* p = "abcdef";
	//printf("%d\n", sizeof(p));    //4
	//printf("%d\n", sizeof(p + 1));    //4
	//printf("%d\n", sizeof(*p));    //7    //1，首元素地址解引用
	//printf("%d\n", sizeof(p[0]));    //1
	//printf("%d\n", sizeof(&p));    //4
	//printf("%d\n", sizeof(&p + 1));    //4
	//printf("%d\n", sizeof(&p[0] + 1));    //4
	//printf("%d\n", strlen(p));    //6
	//printf("%d\n", strlen(p + 1));    //5
	////printf("%d\n", strlen(*p));    //错误，不是指针
	////printf("%d\n", strlen(p[0]));    //错误，不是指针
	//printf("%d\n", strlen(&p));    //随机值，p的地址，会再往后找'\0'
	//printf("%d\n", strlen(&p + 1));    //随机值，原因同上
	//printf("%d\n", strlen(&p[0] + 1));    //5

	//二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));    //3*4*4 = 48
	//printf("%d\n", sizeof(a[0][0]));    //4
	//printf("%d\n", sizeof(a[0]));    //16，首元素，第一行
	//printf("%d\n", sizeof(a[0] + 1));    // 4，sizeof(数组名)才是一行，有了运算就只是第1行第2个元素地址
	//printf("%d\n", sizeof(*(a[0] + 1)));    //4，第1行第2个元素地址解引用
	//printf("%d\n", sizeof(a + 1));    //4，首元素地址+1，应该是第二行地址
	//printf("%d\n", sizeof(*(a + 1)));    //16，第二行地址解引用是第二行元素大小
	//printf("%d\n", sizeof(&a[0] + 1));    //4，首元素地址+1，第二行地址    
	//printf("%d\n", sizeof(*(&a[0] + 1)));    //16，第二行地址解引用为第二行元素大小
	//printf("%d\n", sizeof(*a));    //16，二维数组首元素地址，第一行地址解引用
	//printf("%d\n", sizeof(a[3]));    //16，虽然越界，但是不会访问，大小可以仿照a[2]，1行也就是4个元素

	return 0;
}
