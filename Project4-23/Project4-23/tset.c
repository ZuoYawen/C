#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
//������ص��Ӽ��˳��ĸ�����
void cal(int (*pfun)(int, int))    //�β�Ϊ����ָ�루��ָ��ָ��ĺ���������ֵint���β���2��int��
{
	int x = 0;
	int y = 0;
	printf("�������������");
	scanf("%d%d", &x, &y);
	int ret = (*pfun)(x, y);    //Ҳ����ֱ��pfun(x, y); ���������Ǻ����׵�ַ
	printf("result:%d\n", ret);
	return;
}

int main()
{
	//char *pc = "zuoyawen";     //�൱�ڣ�char pc[] = "zuoyawen"   
	//printf("%s\n", pc);    //%s�Ӽ�������һ���ַ���

	//ָ�������ʹ��
	//int arr1[] = { 1,2,3 };
	//int arr2[] = { 2,3,4 };
	//int arr3[] = { 3,4,5 };
	//int* arr[] = { arr1,arr2,arr3 };
	//int i = 0, j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//	printf("\n");
	//}

	//����ָ���ʹ��
	//int arr[3][3] = { 1,2,3,2,3,4,3,4,5 };
	//int(*pa)[3] = arr;    //��������Ϊ int (*)[3] ������ָ�룬ָ���СΪ3���ֽڵ���������
	//int i = 0;
	//int j = 0;
	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//	{
	//		printf( "%d ", (*(pa+i))[j] );
	//	}
	//	printf("\n");
	//}

	//����ָ���ʹ��
	//int (*padd)(int, int) = Add;    //Add��&Addһ����˼�����Ǻ�����Ԫ�ص�ַ
	//int ret = (*padd)(2, 3);    //padd() �� (*padd)() һ����˼
	//printf("result:%d\n", ret);

	//����ָ�����飨Ҳ��ת�Ʊ���Ӧ�ã�����дһ���Ӽ��˳�������
	//int (*pcalarr[5])(int, int) = { 0,Add,Sub,Mul,Div };
	//int input = 0;
	//do
	//{
	//	printf("��ѡ��1.�ӷ�  2.����  3.�˷�  4.����  0.�˳�\n");
	//	scanf("%d", &input);
	//	if (input == 0)
	//	{
	//		break;
	//	}
	//	else if (input >= 1 && input <= 4)
	//	{
	//		int x = 0;
	//		int y = 0;
	//		printf("��������Ҫ����ĵĲ�������");
	//		scanf("%d%d", &x, &y);
	//		int ret = pcalarr[input](x, y);
	//		printf("result:%d\n", ret);
	//	}
	//	else
	//	{
	//		printf("����Υ�����������룡\n");
	//	}
	//} while (input);

	//�ص�������Ӧ��,�ں���cal��ص��Ӽ��˳��ĸ�����
	int input = 0;
	do
	{
		printf("��ѡ��1.�ӷ�  2.����  3.�˷�  4.����  0.�˳�\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			cal(Add);
			break;
		case 2:
			cal(Sub);
			break;
		case 3:
			cal(Mul);
			break;
		case 4:
			cal(Div);
			break;
		case 0:
			printf("��лʹ�ã����˳���\n");
			break;
		default:
			printf("����Υ�����������룡\n");
			break;
		}
	} while (input);

	return 0;
}