#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	//����Ľ����ʲô��
//	//2,5
//	return 0;
//}

////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	printf("%p\n", p + 0x1);    //0x1000 0001
//	printf("%p\n", (unsigned long)p + 0x1);    //0x1000 0000 0000 0001
//	printf("%p\n", (unsigned int*)p + 0x1);    //0x1000 0001
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);    //4��2
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);    //0    //1�����ű��ʽ��ȡ���һ��ֵ
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	//0x0000 0004,4  
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);    //0xFFFF FFFC��-4��p��ǰ�棬a�ں��棬Ӧ����Сֵ����ֵ��Ϊ��  
//	return 0;                        
//}

//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));    //10,����
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

//�ַ���СΪ1
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);    //POINT,cpp = 1
//	printf("%s\n", *-- * ++cpp + 3);    //����,cpp = 2
//	printf("%s\n", *cpp[-2] + 3);    //ENTER
//	printf("%s\n", cpp[-1][-1] + 1);    //POINT
//	return 0;
//}

