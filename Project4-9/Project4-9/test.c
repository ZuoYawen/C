#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//*************************************������ϰ

//�ݹ�ͷǵݹ�ʵ�ּ���Ǹ������������֮��

//int rec_add(int num) {
//	if (num > 9) {
//		return rec_add(num / 10) + num % 10;
//	}
//	else {
//		return num;
//	}
//}
//int no_rec_add(int num) {
//	int sum = 0;
//	if (num <= 9) {
//		return  num;
//	}
//	while (num != 0) {
//		sum += (num % 10);
//		num = num / 10;
//	}
//	return sum;
//}
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	printf("���������֮���ǣ�%d\n",rec_add(input));
//	printf("���������֮���ǣ�%d\n", no_rec_add(input));
//}

//�ݹ�ʵ��n��k�η�

//double power(double n, double k) {
//	if (n == 0) {
//		return 0;
//	}
//	if (k > 0)
//	{
//		return n * power(n, k - 1);
//	}
//	if (k == 0) {
//		return 1;
//	}
//	if(k < 0){ 
//		return 1 / power(n, -k );    //��ĸΪ1��ʾ�Ѿ��η���һ�Σ����Եݹ��ʱ�����ٸ�������һ
//	}
//}
//int main() {
//	double n = 0;
//	double k = 0;
//	double result = 0;
//	printf("�������������n�����ݣ�k��:");
//	scanf("%lf %lf", &n, &k);    //����double������(8�ֽ�)��%lf��float�����ݣ�4�ֽڣ���%f
//	result = power(n, k);
//	printf("����ǣ�%.3f\n",result);    //���ʱ��������
//	return 0;
//}

//�õݹ�ͷǵݹ�ķ�ʽ��쳲���������

//int rec_fab(int n)    //�ݹ鷽ʽ
//{
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return rec_fab(n - 1) + rec_fab(n - 2);
//	}
//}
//int no_rec_fab(int n)    //�ǵݹ鷽ʽ
//{    //ע��������ʾ�꣡��
//	int result = 1;
//	int result_pre = 1;
//	int result_pre_pre = 1;
//	if (n <= 2) {
//		result = 1;
//	}
//	while (n > 2) {
//		result_pre_pre = result_pre;
//		result_pre = result;
//		result = result_pre + result_pre_pre;
//		n -= 1;
//	} 
//	return result;
//}
//int main(){
//	int input = 0;
//	scanf("%d", &input);
//	printf("쳲��������е�ֵΪ��%d\n", rec_fab(input));
//	printf("쳲��������е�ֵΪ��%d\n", no_rec_fab(input));
//}

//�õݹ�ͷǵݹ�ķ�ʽģ��strlen����

//int rec_strlen(char * ch)    //�ݹ鷽ʽ
//{
//	if (*ch == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return rec_strlen(ch + 1) + 1;
//	}
//}
//int no_rec_strlen(char* ch)    //�ǵݹ鷽ʽ
//{
//	int count = 0;
//	while (*ch != '\0')
//	{
//		count += 1;
//		ch = ch + 1;    //��ַ�ļӼ�
//	}
//	return count;
//}
//int main()
//{
//	char str[20] = {"zuo"};
//	int result = 0;
//	printf("�ַ�������Ϊ��%d\n", rec_strlen(str));
//	printf("�ַ�������Ϊ��%d\n", no_rec_strlen(str));
//	return 0;
//}

