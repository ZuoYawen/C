#define _CRT_SEECURE_NO_WARNINGS

#define ROW 3
#define COL 3

#include<stdio.h>
#include<time.h>     //Ϊ�������������ʹ��time()ʱ�������
#include<stdlib.h>    //Ϊ��ʹ�������rand
#include<string.h>

void InitBoard(char arr[ROW][COL], int row, int col);
void PrintBoard(char arr[ROW][COL], int row, int col);
void Player(char arr[ROW][COL]);
void Computer(char arr[ROW][COL]);
char JudgeResult(char arr[ROW][COL]);