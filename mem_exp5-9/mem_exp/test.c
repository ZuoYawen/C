#define _CRT_SECURE_NO_WARNINS
#include <stdio.h>
#include <memory.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	memset(arr,0,20);//���õ�ʱ��ĸ��������ֽ�Ϊ��λ������ֻ�и�ֵ0��ʱ���������ʵ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}