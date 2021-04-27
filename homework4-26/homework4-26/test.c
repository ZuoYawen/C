#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//测试机器字节序
int main()
{
	int a = 1;
	//char b = (char)a;    //❌，强制转换值，这样会先把a还原成1之后再取最低的1字节赋给b
	char* b = &a;    //✔，强制转换地址才是对的
	if (*b)
	{
		printf("该机器是小端字节序存储！\n");
	}
	else
	{
		printf("该机器是大端字节序存储！\n");
	}
	return 0;
}

//***********************大小端练习题*****************

//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);    //-1,-1,255
//	return 0;
//}

//int main()
//{
//	char a = -128;
//	printf("%u\n", a);    //1111 1111 1111 1111 1111 1111 1000 0000 = 2^32 - 1 - 127 = 4294967168
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);    //整型提升，最高位是1，结果同上
//	return 0;
//}

//int main()
//{
//	int i = -20;    //ff ff ff 1110 1011
//	unsigned int j = 10;    //00 00 00  0000 1010
//	printf("%d\n", i + j);    //ff ff ff 1111 0110 除符号位取反，再加1 -> 80 00 00 0000 1010 -> -10
//  return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);    //i 是无符号，非负
//	}
//  return 0;
//}

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		//i=0,-1 i=1,-2 ... i=127,-128 i=128,127 i=129,126 ... i=255,0 ... 
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));  //共0~254，255个值，后面虽然赋值，但是strlen不计算
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		//范围是0到255，到256自动成0
//		printf("%d __ hello world\n",i);
//	}
//	return 0;
//}

