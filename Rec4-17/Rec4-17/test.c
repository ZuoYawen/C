#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//�ݹ�ʵ��������̨������

int rec_fab(int n) {
	int a = 1e9 + 7;
	if (n == 0) {
		return 1;
	}
	if (n <= 2) {
		return n;
	}
	else {
		return (rec_fab(n - 1) + rec_fab(n - 2))%a;
	}
}
int main() {
	int input = 0;
	scanf("%d", &input);
	printf("��%d��̨��һ����%d������\n", input, rec_fab(input));
}

//�ǵݹ�ʵ��������̨������

//int no_rec_fab(int n) {
//	int a = 1e9 + 7;
//	int ret = 1;
//	if (n == 0) {
//		ret = 1;
//	}
//	else if (n <= 2) {
//		ret = n;
//	}
//	else {
//		ret = 2;
//		int pre_ret = 1;    //f(n-1)
//		int pre_pre_ret = 0;    //f(n-2)
//		while (n > 2) {
//			pre_pre_ret = pre_ret;
//			pre_ret = ret;
//			ret = pre_pre_ret + pre_ret;
//			n--;
//		}
//	}
//	return ret%a;
//}
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	printf("��%d��̨��һ����%d������\n", input, no_rec_fab(input));
//}


//�ݹ�ʵ�ֺ�ŵ������

//n��ʾ������a��ԭ�� b��Ŀ���� c��������
//int time = 0;    //���һ��ȫ�ֱ�������¼����
//int rec_hanoi(int n, char a, char b, char c) {
//	if (n >= 1) {
//		rec_hanoi(n - 1, a, c, b);    //��a��n-1���Ƶ�������c��
//		printf("��%d�Σ��ѵ�%d��Բ�̴�%c�Ƶ�%c��\n",time+1,n,a,b );    //��a��������һ���Ƶ�Ŀ����b��
//		time++;
//		rec_hanoi(n - 1, c, b, a);    //�Ѹ�����c��n-1���Ƶ�Ŀ����b��
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	rec_hanoi(n, 'A', 'C', 'B');
//	printf("%d\n",time );
//	return 0;
//}

//�ǵݹ�ʵ�ּ��㺺ŵ���ƶ�����

//int no_rec_hanoi(int n) {
//	//�ƶ�(n-1)�㣬�ƶ��Ĵ���Ϊ(2^n)-1��д������ģС�ģ������ܽ�����ɣ�
//	//��ԭ�����ƶ�(n-1)�㵽����������(2^(n-1))-1��
//	//��ԭ���������Ƶ�Ŀ��������1��
//	//�Ѹ�����(n-1)���ƶ���Ŀ��������(2^(n-1))-1��
//	//�����ܴ�������2*((2^(n-1))-1)+1 = 2^n-2+1 = 2^n-1
//	return pow(2,n)-1;    
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", no_rec_hanoi(n));
//	return 0;
//}