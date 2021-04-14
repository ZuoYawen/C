//（1）计算1-10阶乘的和

int mul(int n)    //计算阶乘
{
	int ret = 1;
	for (; n > 0; n--)
	{
		ret *= n;
	}
	return ret;
}

#include<stdio.h>

int main()
{
	int n = 10;
	int r = 1;
	int sum = 0;
	for (; n > 0; n--)
	{
		r = mul(n);
		sum += r;
	}
	printf("1到10的阶乘和是：%d\n", sum);
	return 0;
}

//（2）多个字符从两端移动，向中间汇聚

//#include<stdio.h>
//#include<windows.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[] = "zuoyawen";
//	char arr2[] = "********";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	printf("%s\n", arr2);
//	while (left <= right)
//	{
//		Sleep(1000);    //起暂停屏幕作用，头文件windows.h,注意S大写！！
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		system("cls");    //起清空屏幕作用
//		printf("%s\n", arr2);
//	}
//} 

//（3）模拟登录（允许输入三次）

//#define _CRT_SECURE_NO_WARNINGS 
//
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char pw[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", pw);
//		if (strcmp(pw, "123456") == 0)    //strcmp()是比较字符串大小的函数，值为0相等
//		{
//			printf("登录成功!\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，还有%d次机会\n", (2 - i ));
//		}
//	}
//
//	if (i == 3)
//		printf("登陆失败！\n");
//
//	return 0;
//}

//（4）二分查找寻找与数字一样数组元素下标

//#include<stdio.h>
//
//int binsearch(int x, int v[], int n)    //在v[n]中查找x，并返回数组下标
//{
//	int left = 0;
//	int right = n - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;    //不要忘记把mid放到循环里面，因为它的值一直在变！！！
//		if (v[mid] > x)
//		{
//			right = mid - 1;
//		}
//		else if (v[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int n = 10;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int x = 0;
//	int ret = binsearch(x, arr, n);
//	if (ret >= 0)
//	{
//		printf("找到了，下标为：%d\n", ret);
//	}
//	else
//	{
//		printf("未找到该元素！\n");
//	}
//
//	return 0;
//}

//（5）猜数字游戏（1-100）

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void menu()
//{
//	printf("------1--玩游戏-----\n");
//	printf("------0--退出-------\n");
//	printf("____________________\n");
//}
//
//void game()
//{
//	int in = 0;
//	int num = rand() % 100 + 1;    //本来rand函数生成的随机数在0-32767之间太大了，为了减小游戏难度控制在1-100之间
//	while (1)
//	{
//		printf("请猜数字：\n");
//		scanf("%d", &in);
//		if (in > num)
//		{
//			printf("猜大了！\n");
//		}
//		else if (in < num)
//		{
//			printf("猜小了！\n");
//		}
//		else
//		{
//			printf("猜对了！数字是%d\n", num);
//			break;
//		}
//	}
//}
//
//int main() 
//{
//	int input = 0;
//	srand((unsigned)time(NULL));    //time指时间戳，随时变化的值使得rand生成的随机数随机变化 
//	do
//	{
//		menu();
//		printf("请选择（1/0）：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("请选择1或者0！\n");
//			break;
//		}
//	} 
//	while (input);
//
//	return 0;
//
//}

//（6)goto语句实现关机程序

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 60");    //shutdown -r -s 定时关机
//again:
//	printf("电脑在60秒后将要关机，如要取消，请输入：取消关机！\n");
//	scanf("%s", input);
//	if (strcmp(input, "取消关机！") == 0)
//	{
//		system("shutdown -a");    //shutdown -a 取消关机
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}