#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char a = 0xa1;
    short b = 0xa123;
    int c = 0xa1234567;

    if (a == 0xa1)
    {
        printf("a\n");
    }
    if (b == 0xa123)
    {
        printf("b\n");
    }
    if (c == 0xa1234567)
    {
        printf("c\n");
    }

    return 0;
	//int a = 2;
	//int b = 3;
	//a = a ^ b;
	//b = a ^ b;    //a ^ b = (a ^b) ^ b = a ^ (b ^ b) = a ^ 0 = a
	//a = a ^ b;
	//printf("a = %d,b = %d\n", a, b);
	//return 0;
}