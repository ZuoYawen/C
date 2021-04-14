#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//*************************************操作符练习

//不创建临时变量，交换两个整数的内容(经典!!!)

//void swap(int * a, int * b) {
//	*a = *a ^ *b;
//	*b = *a ^ *b;
//	*a = *a ^ *b;
//}
//int main() {
//	int a = 2;
//	int b = 3;
//	swap(&a, &b);
//	printf("a:%d b:%d\n", a, b);
//	return 0;
//}

//统计一个整数二进制中1的个数

//int count_one(int n) {
//	int count = 0;
//	while (n) {
//		count++;
//		n &= (n - 1);
//	}
//	return count;
//}
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	printf("1的个数：%d\n",count_one(input));
//	return 0;
//}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列(易错！！！)

//void print_bin(int n) {    //与1按位相与得到其本身
//	int i = 0;
//	printf("偶数位：");
//	for (i = 30; i >= 0; i-=2) {
//		if ((n >> i) & 1) {
//			printf("1 ");
//		}
//		else {
//			printf("0 ");
//		}
//	}
//	printf("\n");
//	printf("奇数位：");
//	for (i = 31; i >= 1; i -= 2) {
//		if ((n >> i) & 1) {
//			printf("1 ");
//		}
//		else {
//			printf("0 ");
//		}
//	}
//	printf("\n");
//}
//int main() {
//	int input = 0;
//	scanf("%d", &input);
//	print_bin(input);
//  return 0;
//}

//求两个数的二进制位中不同位的个数(异或)

//int diff1(int a, int b) {    //异或的方法，结果为1即不同的值
//	int x = 0;
//	int count = 0;
//	x = a ^ b;
//	while(x){
//		count++;
//      x &= (x - 1);    //最优解
//	}
//	return count;
//}
//int diff2(int a, int b) {    //按位与的方法，循环32次，没有上面那个简便
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++) {
//		if( ((a >> i) & 1) != ((b >> i) & 1)) {
//			count++;
//		}
//	}
//	return count;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	int result = 0;
//	scanf("%d %d", &a, &b);
//	result = diff1(a, b);
//	printf("方法1不同位的个数是：%d\n", result);
//	result = diff2(a, b);
//	printf("方法2不同位的个数是：%d\n", result);
//	return 0;
//}

//*************************************数组练习

//将整型数组A的内容与数组B的内容交换。

//void print(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//		printf("\n");
//	}
//void swap(int* arr1, int* arr2,int sz) {
//	int temp = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	printf("交换后：\n");
//	print(arr1,sz);
//	print(arr2, sz);
//}
//int main() {
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("交换前：\n");
//	print(arr1, sz);
//	print(arr2, sz);
//	swap(arr1, arr2,sz);
//	return 0;
//}

//创建一个整形数组，完成对数组的操作。（1）实现print()  打印数组的每个元素 （2） 实现函数init() 初始化数组为全0（3)实现reverse()  函数完成数组元素的逆置。

//void print(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//		printf("\n");
//	}
//void init(int* arr,int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		arr[i] = 0;
//	}
//	print(arr,sz);
//}
//
//void reverse(int* arr,int sz) {
//	int left = 0;
//	int right = sz - 1;
//	int temp = 0;
//	while (left < right) {
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//	print(arr,sz);
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr,sz);
//	init(arr,sz);
//	return 0;
//}

//实现对整型数组的冒泡降序排序

//void Bubble_sort(int arr[],int sz) {
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	for (i = 0; i < sz-1; i++) {    //最后一趟不需要比，直接前九个都比好了
//		for (j = 0; j < sz - 1 - i ; j++){    //每趟进行两两元素的比较,同理，前i个元素已经比好了
//			if (arr[j] < arr[j+1]) {
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[+j+1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//
//}
//int main() {
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	Bubble_sort(arr,10);
//	return 0;
//}

//*************************************递归函数练习

//递归和非递归将参数字符串中的字符反向排列，注意不是逆序输出

//int Strlen(char* ch) {
//	int count = 0;
//	while (*ch != '\0') {
//		ch++;
//		count++;
//	}
//	return count;
//}
//void n_rec_reverse_string(char* string)
//{
//	if (*string != '\0')
//	{
//		n_rec_reverse_string(string + 1);    //逆序输出，先递归到最里面找到最后一个不是'\0'的元素，再一层一层往外输出
//	}
//	printf("%c", *string);
//}
//void rec_reverse_string(char * string ) {     //递归排列
//	char temp = 0;
//	int len = Strlen(string);
//	temp = string[0];    //第一个元素值暂存起来
//	string[0] = string[len - 1];    //把最后一个元素放到第一个元素位置
//	string[len - 1] = '\0';    //递归思想，把最后一个元素置为'\0'，规模变小
//	if (strlen(string + 1) >= 2) {    //只要还有需要交换的元素，就再进入一层
//		rec_reverse_string(string + 1);    //当前层第一个已经换成了最后一个元素，所以元素首地址指向当前层的第二个元素，进入再一层
//	}
//	string[len - 1] = temp;    //把置为'\0'的最后一个元素置为暂存起来的第一个元素的值
//}
//void no_rec_reverse_string(char * string) {    //非递归排列
//	int left = 0;
//	int right = Strlen(string) - 1;    //函数内部求元素个数最好不要用sizeof（）
//	char temp = 0;
//	while (left <= right) {
//		temp = string[left];
//		string[left] = string[right];
//		string[right] = temp;
//		left++;
//		right--;
//	}
// }
//int main() {
//	char ch[] = "zuoyawen!fighing!";
//	no_rec_reverse_string(ch);
//	printf("%s\n", ch);
//	rec_reverse_string(ch);
//	printf("%s\n", ch);
//	n_rec_reverse_string(ch);
//	return 0;
//}

//在不创建中间变量的情况下，求字符串的长度

//int str_len(char* ch) {
//	if (*ch == '\0')
//		return 0;
//	else
//		return 1 + str_len(ch + 1);
//}
//int main() {
//	char ch[] = "zuoyawen";
//	printf("%d\n", str_len(ch));
//	return 0;
//}
