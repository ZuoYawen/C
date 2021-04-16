#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void InitTable(char arr[ROWS][COLS], char c) {
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			arr[i][j] = c;
		}
	}
	return;
}
void PrintTable(char arr[ROWS][COLS]) {
	int i = 0;
	int j = 0;
	//i，j的值从1开始，0是为了防止计算边缘盘格溢出加的辅助格
	for (i = 1; i <= ROW; i++) {
		for (j = 1; j <= COL; j++) {
			printf(" %c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return;
}
void SetMine(char arr[ROWS][COLS]) {
	int num = NUM;
	while (num > 0) {
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (arr[x][y] == '0') {
			arr[x][y] = '1';
			num--;
		}
	}
	return;
}
void FindMine(char arr1[ROWS][COLS],char arr2[ROWS][COLS]) {    //数组1：雷盘 数组2：玩家盘
	int x = 0;
	int y = 0;
	int time = ROW * COL;
	while (time > NUM) {
		printf("请输入要查的坐标：");
		scanf("%d，%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= ROW) {    //输入合法
			if (arr1[x][y] == '1') {
				PrintTable(arr1);
				printf("不小心扫到雷咯！\n");
				break;
			}
			else if(arr2[x][y]!='x'){
				printf("这个坐标已经被扫过，请重新输入：");  
				continue;
			}
			else {
				int sum = CalMineNum(arr1, x, y);
				arr2[x][y] = '0' + sum;    //0的ASCII码值加上雷的个数，表示雷的个数的ASCII值
				PrintTable(arr2);
				time--;
			}
		}
		else {
			printf("请注意，输入不合法！\n");
		}
		if (time == NUM) {
			printf("棒！游戏结束，雷全部排完！\n");
			PrintTable(arr1);
			break;
		}
	}
	return;
}
int CalMineNum(char arr[ROWS][COLS],int x,int y) {
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++) {
		for (j = y - 1; j <= y + 1; j++) {
			if (arr[i][j] == '1') {
				count++;
			}
		}
	}
	return count;
}