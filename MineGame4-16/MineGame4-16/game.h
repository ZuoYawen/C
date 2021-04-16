#define _CRT_SECURE_NO_WARNINGS

//扫雷的规模
#define ROW 5
#define COL 5

//为了计算边，防止溢出增在规模的基础上加一层边界
#define ROWS (ROW+2)
#define COLS (COL+2)

//设置雷的个数
#define NUM 5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 //初始化表格
void InitTable(char arr[ROWS][COLS], char c); 
//将表格打印到屏幕上
void PrintTable(char arr[ROWS][COLS]);    
//放NUM个雷
void SetMine(char arr[ROWS][COLS]);
//扫雷
void FindMine(char arr1[ROWS][COLS], char arr2[ROWS][COLS]);
//计算周围一圈雷的个数
int CalMineNum(char arr[ROWS][COLS], int x, int y);