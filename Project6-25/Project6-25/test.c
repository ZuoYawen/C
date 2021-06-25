#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//������̬���پ���
int main()
{
	//mallocʹ��
	//malloc��ʵ�ο����ǳ������߳������ʽ���м�Ҫ����ǿ������ת��
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

	//callocʹ��
	//��ʼֵ���ÿ���ֽڸ�0
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

	//reallocʹ��
	//�����p1��p3��Ҫ������������ܵ����ڴ�й¶
	int* p3 = NULL;
	p3 = (int*)realloc(p1, 20 * sizeof(int));
	if (p3 == NULL)
	{
		perror("calloc-error:");
	}
	//Ҳ���Ե���֮���ٸ��ظ�ԭ����p1����ʱ��Ҫ���˰�p3�ÿ�
    //�����ͷŵ�ʱ��ҲֻҪ�ͷ�p1����
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
	 
	//freeʹ��
	free(p1);
	p1 = NULL;
	free(p2);
	p2 = NULL;

	return 0;
}