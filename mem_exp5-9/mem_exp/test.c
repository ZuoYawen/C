#define _CRT_SECURE_NO_WARNINS
#include <stdio.h>
#include <memory.h>

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	memset(arr,0,20);//设置的时候的个数是以字节为单位，所以只有赋值0的时候可以完美实现
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}