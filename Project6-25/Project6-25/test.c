#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//完整动态开辟举例
int main()
{
	//malloc使用
	//malloc的实参可以是常量或者常量表达式，切记要进行强制类型转换
	int* p1 = (int*)malloc(10 * sizeof(int));
	if (p1 == NULL)
	{
		perror("malloc-error:");
	}
	else
	{
		printf("malloc's use:");
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p1 + i) = i;
			printf("%d ", p1[i]);
		}
		printf("\n");
	}

	//calloc使用
	//初始值会给每个字节赋0
	int* p2 = (int*)calloc(10, sizeof(int));
	if (p2 == NULL)
	{
		perror("calloc-error:");
	}
	else
	{
		printf("calloc's use:");
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			printf("%d ", p2[i]);
		}
		printf("\n");
	}

	//realloc使用
	//这里的p1和p3不要重名，否则可能导致内存泄露
	int* p3 = NULL;
	p3 = (int*)realloc(p1, 20 * sizeof(int));
	if (p3 == NULL)
	{
		perror("calloc-error:");
	}
	//也可以调整之后再赋回给原来的p1，这时不要忘了把p3置空
    //这样释放的时候也只要释放p1即可
	else
	{
		p1 = p3;
		p3 = NULL;
		printf("realloc's use:");
		int i = 0;
		for (i = 0; i < 20; i++)
		{
			*(p1 + i) = i;
			printf("%d ", p1[i]);
		}
		printf("\n");
	}
	 
	//free使用
	free(p1);
	p1 = NULL;
	free(p2);
	p2 = NULL;

	return 0;
}