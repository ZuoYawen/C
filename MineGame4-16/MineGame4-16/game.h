#define _CRT_SECURE_NO_WARNINGS

//ɨ�׵Ĺ�ģ
#define ROW 5
#define COL 5

//Ϊ�˼���ߣ���ֹ������ڹ�ģ�Ļ����ϼ�һ��߽�
#define ROWS (ROW+2)
#define COLS (COL+2)

//�����׵ĸ���
#define NUM 5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 //��ʼ�����
void InitTable(char arr[ROWS][COLS], char c); 
//������ӡ����Ļ��
void PrintTable(char arr[ROWS][COLS]);    
//��NUM����
void SetMine(char arr[ROWS][COLS]);
//ɨ��
void FindMine(char arr1[ROWS][COLS], char arr2[ROWS][COLS]);
//������ΧһȦ�׵ĸ���
int CalMineNum(char arr[ROWS][COLS], int x, int y);