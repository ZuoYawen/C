#define _CRT_SDECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//�������������Ƿ��з���λ��һЩ����

//int main() {
//	char a = -1;    //û�й涨Ĭ���Ƿ��з��ţ����������������Ĭ��Ϊ�з���
//	signed char b = -1;
//	unsigned char c = -1;    //�޷���charֻ�ܱ�ʾ0~255��-1�Ĳ���ȫ1��ת��Ϊ�޷��ž���255
//	printf("a:%d b:%d c:%d\n", a, b, c);
//	return 0;
//}

//int main() {
//	unsigned int i = 0;    //�޷��ż���ʾû�и���
//	for (i = 9; i >= 0; i--) {    //��iΪ�����Ż��˳���������ѭ����i���-1ʱ����ֱ�Ӱ������밴�޷��ż���
//		printf("%u\n", i);
//	}
//	return 0;
//}

//int main() {
//	char arr[1000];    //char�͵����飬��Χ��-128~127
//	int i = 0;
//	for (i = 0; i < 1000; i++) {
//		arr[i] = -i - 1;    //��ֵ������-1,-2,-3,...,-128,127,126,...,3,2,1,0,-1,-2,-3,...
//	}
//	printf("%d\n", strlen(arr));    //i = 255ʱ��-i-1��0,'\0'��ASCIIΪ0����ʱstrlen��Ϊ�Լ������˽�����־������Ĳ��ټ���
//	return 0;
//}

//���ڸ����ͺ������ڴ����洢�Ĳ��
int main() {
	int a = 5;
	float* pa = (float*)&a;    //���帡����ָ�룬�Ը����ʹ洢��ʽָ��a
	printf("%d %f\n", a, *pa);    //��float�洢��ʽ��ָ��λEȫ0����ʾһ����������0��С��

	float b = 5.0;
	int* pb = (int*)&b;
	printf("%f %d\n", b, *pb);    //��float�洢��ʽ��ָ��λE��ֵ��ת���������о��Ǻܴ��ֵ
	return 0;
}

//�жϵ�ǰƽ̨���ֽ���

//������

//int main() {
//	int a = 1;    //a:0x 00 00 00 01
//	char* p = (char*)&a;    //����ָ��pָ��͵�ַ
//	if (*p == 1) {    //�жϵ͵�ַ���ŵ��Ƿ��ǵ�λ�ֽ�������
//		printf("С���ֽ���洢\n");
//	}
//	else {
//		printf("����ֽ���洢\n");
//	}
//	return 0;
//}

//�Ľ���

//int check(void) {
//	int a = 1;
//	return *((char*)&a);
//}
//int main() {
//	int ret = check();
//	if (ret) {   
//		printf("С���ֽ���洢\n");
//	}
//	else {
//		printf("����ֽ���洢\n");
//	}
//	return 0;
//}