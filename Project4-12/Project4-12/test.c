#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h> //double pow( double x, double y );x��y�η�

//*******************************�����ϰ

//����ˮ���⣺����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ

//int main() {   
//	int money = 0;    //������Ǯ��
//	scanf("%d", &money);
//	int n = money;    //��ǰ��ˮ���� 
//	int num = n;    //�ܵ���ˮ��
//	while (n >= 2) {
//		int count = 0;    //��������ˮ��Ϊ����ʱ��һ�λ������1ƿ��ˮ
//		if (n % 2 != 0) {
//			count += 1;
//		}
//		num = num + n / 2;
//		n = n / 2 + count;    //������д��n /= 2 + count����ʹ������˳����ֻ��ң����� 
//	}
//	printf("һ������ˮ������%d\n", num);
//	return 0;
//}

//*******************************ָ����ϰ

//��ӡ����

//void print_star(int n) {
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	//�ϰ벿��
//	for (i = 1; i <= n; i++) {    //��ӡ����
//		for (j = 0; j < n - i ; j++) {    //ÿ�д�ӡ�Ŀո���n - i
//			printf(" ");
//		}
//		for (k = 0; k < 2 * i - 1; k++) {    //ÿ�д�ӡ��*��2*i-1
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�°벿��
//	for (i = 1; i <= n - 1; i++) {    //��ӡ���У������һ�����ϰ벿��һ����������ȥ
//		for (j = 0; j < i; j++) {    //ÿ�д�ӡ�Ŀո���Ϊ���һ����ȥ�ˣ����Եڼ��д�ӡ�����ո�
//			printf(" ");
//		}
//		for (k = 0; k < 2 * (n - i) - 1; k++) {    //ÿ�д�ӡ��*�����ϰ벿���෴�����԰�i����(n-i)
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int num = 0;
//	printf("��ӡ������һ���Ǽ��еģ�");
//	scanf("%d", &num);
//	print_star(num);
//	return 0;
//}

//���0��100000֮������С�ˮ�ɻ������������һ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������

//int main() {
//	int i = 0;
//	printf("ˮ�ɻ�����\n");
//	for (i = 0; i < 100000; i++) {
//		int temp = i;    //��ֹѭ������i�����費ֵͬ�����������
//		int n = 1;
//		int sum = 0;
//
//		//����������ֵ�λ��
//		while (temp > 9) {
//			n++;
//			temp /= 10;
//		}
//
//		//����λ���η���
//		temp = i;    //����λ��ʱtemp���ܻ���0�������������¸�һ��ֵ
//		while (temp) {
//			sum += pow((temp % 10), n);
//			temp /= 10;
//		}
//
//		//�ж��Ƿ�Ϊˮ�ɻ���
//		if (i == sum) {
//			printf("%d ", sum);
//		}
//	}
//	printf("\n");
//	return 0;
//}

//дһ����������������һ���ַ��������ݣ���������ϣ�����Բ�����ǰ���볤�ȵ�����ⷨ��

//void print_str(char* arr,int sz) {
//	int i = 0;
//	for (i = sz -1; i >= 0; i--) {
//		printf("%c", *(arr+i));    //�ַ��������%c
//	}
//	printf("\n");
//	return;
//}
//int main() {
//	int i = 0;
//	char str[100] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	getchar();    //gethchar����scanf����ȷ�Ͻ������Ǹ��س�����ֹ�������������
//	for (i = 0; i < n; i++) {
//		scanf("%c", &str[i]);
//	}
//	print_str(str,n);
//	return 0;
//}

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

//int sum_a(int a,int n) {
//	int sum = 0;
//	int i = 0;
//	int a_ = a;
//	while (n > i) {
//		sum = sum + a;
//		i++;
//		a = a * 10 + a_;
//	}
//	return sum;
//}
//int main() {
//	int a = 0;
//	int n = 0;
//	printf("������������a������n��\n");
//	scanf("%d%d", &a,&n);
//	int sum = sum_a(a,n);
//	printf("%d\n", sum);
//	return 0;
//}

//ʹ��ָ���ӡ��������

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *(arr+i));
//	}
//	printf("\n");
//	return 0;
//}