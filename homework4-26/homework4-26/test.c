#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���Ի����ֽ���
int main()
{
	int a = 1;
	char b = (char)a;
	if (b)
	{
		printf("�û�����С���ֽ���洢��\n");
	}
	else
	{
		printf("�û����Ǵ���ֽ���洢��\n");
	}
	return 0;
}

//***********************��С����ϰ��*****************

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
//	printf("%u\n", a);    //�������������λ��1�����ͬ��
//	return 0;
//}

//int main()
//{
//	int i = -20;    //ff ff ff 1110 1011
//	unsigned int j = 10;    //00 00 00  0000 1010
//	printf("%d\n", i + j);    //ff ff ff 1111 0110 ������λȡ�����ټ�1 -> 80 00 00 0000 1010 -> -10
//  return 0;
//}

//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);    //i ���޷��ţ��Ǹ�
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
//	printf("%d", strlen(a));  //��0~254��255��ֵ��������Ȼ��ֵ������strlen������
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		//��Χ��0��255����256�Զ���0
//		printf("%d __ hello world\n",i);
//	}
//	return 0;
//}

