//��1������1-10�׳˵ĺ�

int mul(int n)    //����׳�
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
	printf("1��10�Ľ׳˺��ǣ�%d\n", sum);
	return 0;
}

//��2������ַ��������ƶ������м���

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
//		Sleep(1000);    //����ͣ��Ļ���ã�ͷ�ļ�windows.h,ע��S��д����
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		system("cls");    //�������Ļ����
//		printf("%s\n", arr2);
//	}
//} 

//��3��ģ���¼�������������Σ�

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
//		if (strcmp(pw, "123456") == 0)    //strcmp()�ǱȽ��ַ�����С�ĺ�����ֵΪ0���
//		{
//			printf("��¼�ɹ�!\n");
//			break;
//		}
//		else
//		{
//			printf("������󣬻���%d�λ���\n", (2 - i ));
//		}
//	}
//
//	if (i == 3)
//		printf("��½ʧ�ܣ�\n");
//
//	return 0;
//}

//��4�����ֲ���Ѱ��������һ������Ԫ���±�

//#include<stdio.h>
//
//int binsearch(int x, int v[], int n)    //��v[n]�в���x�������������±�
//{
//	int left = 0;
//	int right = n - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;    //��Ҫ���ǰ�mid�ŵ�ѭ�����棬��Ϊ����ֵһֱ�ڱ䣡����
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
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	}
//	else
//	{
//		printf("δ�ҵ���Ԫ�أ�\n");
//	}
//
//	return 0;
//}

//��5����������Ϸ��1-100��

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void menu()
//{
//	printf("------1--����Ϸ-----\n");
//	printf("------0--�˳�-------\n");
//	printf("____________________\n");
//}
//
//void game()
//{
//	int in = 0;
//	int num = rand() % 100 + 1;    //����rand�������ɵ��������0-32767֮��̫���ˣ�Ϊ�˼�С��Ϸ�Ѷȿ�����1-100֮��
//	while (1)
//	{
//		printf("������֣�\n");
//		scanf("%d", &in);
//		if (in > num)
//		{
//			printf("�´��ˣ�\n");
//		}
//		else if (in < num)
//		{
//			printf("��С�ˣ�\n");
//		}
//		else
//		{
//			printf("�¶��ˣ�������%d\n", num);
//			break;
//		}
//	}
//}
//
//int main() 
//{
//	int input = 0;
//	srand((unsigned)time(NULL));    //timeָʱ�������ʱ�仯��ֵʹ��rand���ɵ����������仯 
//	do
//	{
//		menu();
//		printf("��ѡ��1/0����");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("��ѡ��1����0��\n");
//			break;
//		}
//	} 
//	while (input);
//
//	return 0;
//
//}

//��6)goto���ʵ�ֹػ�����

//#define _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 60");    //shutdown -r -s ��ʱ�ػ�
//again:
//	printf("������60���Ҫ�ػ�����Ҫȡ���������룺ȡ���ػ���\n");
//	scanf("%s", input);
//	if (strcmp(input, "ȡ���ػ���") == 0)
//	{
//		system("shutdown -a");    //shutdown -a ȡ���ػ�
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}