#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//    int arr1[] = { 1, 2, 3 };
//    int arr2[] = { 4, 5, 6 };
//    int arr3[] = { 7, 8, 9 };
//    int* arr[] = { arr1, arr2, arr3 };
//    int i = 0;
//    for (i = 0; i < 3; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 3; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

void print(int(*arr)[5],int x, int y)
{
	int i = 0;
	for (i = 0; i < x; i++)
	{
		int j = 0;
		for (j = 0; j < y; j++)
		{
			printf("%-2d ", *(*(arr+i)+j));
			//printf("%-2d ",(*(arr+i))[j]);
			//printf("%-2d ", arr[i][j]);
		}
		printf("\n");
	}
	return;
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{4,5,6,7,8},{7,8,9,10,11} };
	print(arr, 3, 5);
	return 0;
}