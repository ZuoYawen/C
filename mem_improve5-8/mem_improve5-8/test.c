#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <memory.h>
#include <assert.h>

//模拟实现memcpy()函数(不重叠拷贝)
void* mem_cpy(void *dest, const void *src, size_t num)
{
	void* ret = dest;
	assert(dest);
	assert(src);
	while (num--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
		//(char*)dest = (char*)dest + 1;
		//(char*)src = (char*)src + 1;
	}
	return ret;
}

//模拟实现memmove()函数（实现重叠拷贝）
void* mem_move(void* dest, const void* src, size_t num)
{
	assert(dest);
	assert(src);
	void* ret = dest;
	if (dest < src)    //从前向后拷贝
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			((char*)dest)++;
			((char*)src)++;
		}

	}
	else    //从后向前拷贝
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
int main()
{
	int arr1[10] = { 0 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	mem_cpy(arr1, arr2, 20);
	int i = 0;
	for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	mem_move(arr2 + 2, arr2, 16);
	for (i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}