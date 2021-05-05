#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	//程序的结果是什么？
//	//2,5
//	return 0;
//}

//由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x00 0000。 如下表表达式的值分别为多少？
//int main()
//{
//	printf("%p\n", p + 0x1);    //0x0000 0014，20换成十六进制就是14，已知p的值，直接加就好
//	printf("%p\n", (unsigned long)p + 0x1);    //0x0000 0001，无符号数整型提升补充0，再加1得到0x0000 0001
//	printf("%p\n", (unsigned int*)p + 0x1);    //0x0000 0004，指针加1就是加4个字节
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	//4，2000 0000，第一个很好理解，主要说一下第二个
//    //整型数组在小端字节序的平台内存中是这样存储的：（低地址到高地址）01 00 00 00，02 00 00 00，03 00 00 00，04 00 00 00
//    //a是数组首元素地址，指向的就是1这个整型元素
//    //强制转换成整型加1之后再强制转换成整型指针，就是指针移动1个字节，此时赋给ptr2
//    //ptr2表示指向 00 00 00 02这部分的地址，再解引用从高位开始输出就是02 00 00 00，去掉无效位就是200 0000
//	printf("%x,%x", ptr1[-1], *ptr2);    
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);    //0    //1，逗号表达式，取最后一个值
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	//0x0000 0004,4  
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);    //0xFFFF FFFC，-4（p在前面，a在后面，应该是小值减大值，为负）  
//	return 0;                        
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));    //10,5
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);    //at
//	return 0;
//}

//int main()
//{
//	//解释过于复杂，详见博客
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);    //POINT,cpp = 1
//	printf("%s\n", *-- * ++cpp + 3);    //ER
//	printf("%s\n", *cpp[-2] + 3);    //ST
//	printf("%s\n", cpp[-1][-1] + 1);   //EW
//	return 0;
//}

