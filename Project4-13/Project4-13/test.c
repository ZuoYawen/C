#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>    //���Ե�ͷ�ļ�


//*******************���ڵ��ԵĴ�����ϰ

// ����һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿�֡�

//����˼·��
//    ����ͷ��βָ�룬�ֱ�����˿�ʼ������ָ��left��ǰ������ʼ�ң��ҵ�ż������ż��ָ��right���ٴӺ���ǰ�ҵ�����ͣ������
//��������ָ���ֵ��һ��ѭ����������ֹ����������ָ�����ż��ָ�롣
//void control(int* arr,int sz) {
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while (arr[left] % 2 == 1)//�����������һֱ�����ң�ֱ���ҵ�ż��
//		{
//			left++;
//		}
//		while ( arr[right] % 2 == 0)////�����ż����һֱǰ���ң�ֱ���ҵ�����
//		{
//			right--;
//		}
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//	return;
//}

// ģ��ʵ�ֿ⺯��strcpy

//char* strcpy_(char * ch1,const char * ch2) {
//	assert(ch1 != NULL);    //���ԣ������ָ���쳣�ģ���һ������ʽ����������ʽΪ��ɶҲ���ɣ�Ϊ��ֱ�ӱ���ִ�г���
//	assert(ch2 != NULL);    //NULL��һ��ָ��
//	char* ret = ch1;
//	while (*ch1++ = *ch2++) {
//		;
//	}
//	return ret;
//}

//ģ��ʵ�ֿ⺯��strlen

//int strlen_(const char * ch) {
//	assert(ch != NULL);   
//	int count = 0;
//	while (*ch++) {
//		count++;
//	}
//	return count;
//}

//������

//int main() {
//	char arr1[] = "zuo";
//	char arr2[] = "chen";
//	int ch[] = { 1,2,3,4,5,6,7,8 };
//	printf("%d\n",strlen_(arr1));
//	printf("%s\n", strcpy_(arr2, arr1));
//	int sz = sizeof(ch) / sizeof(ch[0]);
//	control(ch,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", ch[i]);
//	}
//	printf("\n");
//	return 0;
//}