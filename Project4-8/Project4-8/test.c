#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<math.h>

//*************************************������ϰ

//ʹ��֮��ֵ����һ�ĺ���

//void Add(int* num) {    //��ַ����
//	*num += 1;
//}
//int main() {
//	int num = 0;
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}

//�õݹ�ͷǵݹ�ķ�ʽ��׳�

//int rec_fac(int num)    //�ݹ鷽ʽ
//{
//	if (num > 1)
//		return num * rec_fac(num - 1);
//	else
//		return 1;
//}
//int no_rec_fac(int num)    //�ǵݹ鷽ʽ
//{
//	int i = 0;
//	int result = 1;
//	for (i = 1; i <= num; i++)
//	{
//		result *= i;
//	}
//	return result;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	printf("%d�Ľ׳���%d\n",input, rec_fac(input));
//	printf("%d�Ľ׳���%d\n", input, no_rec_fac(input));
//	return 0;
//}

//�ݹ��ӡ������ÿһλ����

//void print_num(int num)
//{
//	if (num > 9)
//	{
//	print_num(num / 10);    //(num/10)ȥ�����λ
//	}
//	printf("%d ", num % 10);    //(num%10)�õ����λ
//	return;
//}
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	print_num(input);
//	return 0;
//}

//ʵ��n*n�˷��ھ���

//void print_mul_table(int num)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d*%-2d=%-3d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int num = 0;
//	printf("�������n*n�ĳ˷����n�Ǽ���");
//	scanf("%d", &num);
//	print_mul_table(num);
//	return 0;
//}

//ʵ�����������Ľ���(���͵Ĵ�ַ����)

//int swap(int * a, int * b)
//{
//	int  temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	swap(&a, &b);
//	printf("������a = %d,b = %d\n", a, b);
//	return 0;
//}

//������������Ķ��ֲ��ң����������±꣩

//int bin_search(int *arr,int sz,int x) {
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	while (left <= right) {
//		mid = (left + right) / 2;    //ע���mid��ֵ�ŵ�ѭ���ڲ�����֤�����е��ڶ�̬�仯
//		if (x > arr[mid]) {
//			left = mid + 1;
//		}
//		else if (x < arr[mid]) {
//			right = mid - 1;
//		}
//		else {
//			return mid;
//		}
//	}
//	if (left > right) {
//		return -1;
//	}
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int input = 0;
//	int result = 0;
//	printf("����Ҫ��ѯ������\n");
//	scanf("%d", &input);
//	result = bin_search(arr, sz, input);
//	if (result == -1) {
//		printf("�Ҳ�����\n");
//	}
//	else {
//		printf("�ҵ��ˣ������±���%d\n", result);
//	}
//	return 0;
//}

//�ж����������

//�����ж�����
// 
//int is_leep_year(int year)
//{
//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
// 
//�ú���ʵ���ж�100��200֮�������
// 
//int is_prime(int num)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (num % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	scanf("%d", &input);
//	ret = is_prime(input);
//	//ret = is_leep_year(input);
//	if (ret == 1)
//		printf("yes!\n");
//	else
//		printf("no!\n");
//	return 0;
//}

//*************************************ѭ����ϰ

//int main()
//{
	//��д������һ���������������в��Ҿ����ĳ������Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

	//int arr[] = { 1,2,3,4,5,6,7,8,9 };
	//int num = 0;
	//scanf("%d", &num);
	//int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//int middle = 0;
	//while (left <= right)
	//{
	//	middle = (left + right) / 2;
	//	if (num == arr[middle])
	//	{
	//		printf("����%d���±�Ϊ%d\n", num, middle);
	//		break;
	//	}
	//	else if (num > arr[middle])
	//		left = middle + 1;
	//	else
	//		right = middle - 1;
	//}
	//if (left > right)
	//{
	//	printf("δ�ҵ������֣�\n");
	//}

	//��ӡ�žų˷��ھ���

	//int i = 0;
	//int j = 0;
	//for (i = 1; i <= 9; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		printf("%d*%d=%-2d ", j, i, i * j);    //%-2dʹ��������ʽ����룬%2d�Ҷ���
	//	}
	//	printf("\n");
	//}

	//��10�������е����ֵ

	//int arr[10] = { 0 };
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	scanf("%d", &arr[i]);
	//}
	//int j = 0;
	//int max = arr[0];    
	//for (j = 0; j < 9; j++)
	//{
	//	if (arr[j] < arr[j + 1])
	//		max = arr[j+1];    //���ܳ�ʼ��Ϊ0��Ҫ�Ƕ��ǽ��������磺-1��-10�������������ж����������Լ����������ĳ��Ԫ�������ֵ
	//}
	//printf("10���������ǣ�%d\n", max);

	//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ

	//int i = 0;
	//double sum = 0;
	//int sign = 1;
	//for (i = 1; i <= 100; i++)
	//{
	//	sum += sign * (1.0 / i);    //���ڳ���Ҫ�ǳ������߶�����������ô���Ҳ��Ĭ��������
	//	sign = -sign;
	//}
	//printf("%.4f\n", sum);

	//1-100����ĳ�����ֵĸ�����9Ϊ����

	//int i = 0;
	//int count = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 10 == 9)    //�����λ��9
	//		count++;
	//	if (i / 10 == 9)    //����ʮλ��9
	//		count++;
	//}
	//printf("����9�ĸ���Ϊ��%d\n",count);    

	//��ӡ100��200֮����������Գ�����

	//int num = 0;
	//int i = 0;
	//for (num = 101; num <= 199; num+= 2)    //�����Ż���������������ż�� 
	//{
	//	for (i = 2; i <= sqrt(num); i++)
	//	{
	//		if (num % i == 0)
	//			break;
	//	}
	//	if (i > sqrt(num))    //2-sqrt(num)���궼���ᱻ��������������
	//		printf("%d ", num);
	//}
	//printf("\n");

	////1000��2000֮�������

	//int year = 1000;
	//for (year = 1000; year <= 2000; year++)
	//{
	//	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
	//		printf("%d ", year);
	//}
	//printf("\n");

	//�������������������Լ��

	////����һ��������ⷨ����ͨѭ���ж�
	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//int min = 0;
	//min = (a < b) ? a : b;
	//int i = 0;
	//for (i = min; i > 0; i--)
	//{
	//	if (a % i == 0 && b % i == 0)
	//	{
	//		printf("���Լ����%d\n", i);
	//		break;
	//	}
	//}
    ////��������շת�����
    //int a = 0;
    //int b = 0;
    //int c = 0;
	//scanf("%d %d", &a, &b);
	//while (a % b != 0) {
	//	c = a % b;
	//	a = b;
	//	b = c;
	//}
	//printf("���Լ����%d\n", b);

	//��100����3�Ĺ�����

	//int i = 0;
	//for (i = 1; i <= 100; i++)
	//{
	//	if (i % 3 == 0)
	//	{
	//		printf("%d ", i);
	//	}
	//}
	//printf("\n");

	//������������С����

	//int a = 0;
	//int b = 0;
	//int c = 0;
	//scanf("%d %d %d", &a, &b, &c);
	//int temp = 0;
	//if (a < b)
	//{
	//	temp = a;
	//	a = b;
	//	b = temp;
	//}
	//if (a < c)
	//{
	//	temp = a;
	//	a = c;
	//	c = temp;
	//}
	//if (b < c)
	//{
	//	temp = b;
	//	b = c;
	//	c = temp;
	//}
	//printf("�Ӵ�С��%d > %d > %d\n", a, b, c);

	//���������еĽϴ�ֵ

	//int a = 0;
	//int b = 0;
	//scanf("%d %d", &a, &b);
	//int max = 0;
	//max = ((a > b) ? a : b);
	//printf("�ϴ�ֵ�ǣ�%d\n", max);

//	return 0;
//}