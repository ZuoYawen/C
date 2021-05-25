#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stddef.h>
int main()
{
	////练习1
	//struct S1
	//{
	//	char c1;//0
	//	int i;//4
	//	char c2;//8
	//}s;
	//printf("%d\n", offsetof(struct S1,c1));
	//printf("%d\n", offsetof(struct S1, i));
	//printf("%d\n", offsetof(struct S1, c2));
	//printf("%d\n", sizeof(struct S1));//12
	////练习2
	//struct S2
	//{
	//	char c1;//0
	//	char c2;//1
	//	int i;//4
	//};
	//printf("%d\n", sizeof(struct S2));//8
	////练习3
	//struct S3
	//{
	//	double d;//0
	//	char c;//8
	//	int i;//12
	//};
	//printf("%d\n", sizeof(struct S3));//16
	////练习4-结构体嵌套问题
	//struct S4
	//{
	//	char c1;//0
	//	struct S3 s3;//8,S3的最大对齐数是 8
	//	double d;//24
	//};
	//printf("%d\n", sizeof(struct S4));//32
	//struct A {
	//	int _a : 2;//第一个是int，开辟4字节，32个比特位，_a占2个比特位
	//	int _b : 5;//剩余30个比特位，_b占5个比特位
	//	int _c : 10;//剩余25个比特位，_b占10个比特位
	//	int _d : 30;//剩余15个比特位，_c不够用，_c是int,所以再开辟4字节
	//};
	//printf("%d\n", sizeof(struct A));//8
	//enum Color//颜色
	//{
	//	RED = 1,
	//	GREEN = 2,
	//	BLUE = 4
	//};
	//enum Color clr = GREEN;//只能拿枚举常量给枚举变量赋值，才不会出现类型的差异。
	//clr = 5;//❌，类型不兼容
	//union Un
	//{
	//	int i;
	//	char c;
	//};
	//union Un un;
	//// 下面输出的结果是一样的吗？
	//printf("%p\n", &(un.i));
	//printf("%p\n", &(un.c));
	////下面输出的结果是什么？
	//un.i = 0x11223344;
	//un.c = 0x55;
	//printf("%x\n", un.i);//11223355,因为联合共用内存，改变一个就会改变内存
	union Un1    //对齐数4
	{
		char c[5];//5*1 = 5
		int i;//4
	};
	union Un2    //对齐数4
	{
		short c[7];//7*2 = 14
		int i;//4
	};
	//下面输出的结果是什么？
	printf("%d\n", sizeof(union Un1));//8
	printf("%d\n", sizeof(union Un2));//16
	return 0;
}