#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void InitBoard(char arr[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			arr[i][j] = ' ';
		}
	}
	return;
}
void PrintBoard(char arr[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		if (i < row - 1) {    //前两行
			for (j = 0; j < col; j++) {
				if (j < col - 1) {    //前两列
					printf(" %c ", arr[i][j]);
					printf("|");
				}
				else {    //前两行最后一列，不需要竖线分割
					printf(" %c ", arr[i][j]);
				}
			}
			printf("\n");
			for (j = 0; j < col; j++) {
				if (j < col - 1) {    //前两列
					printf("___");
					printf("|");
				}
				else {    //前两行最后一列，不需要竖线分割
					printf("___");
				}
			}
			printf("\n");
		}
		else {    //最后一行，不需要横线分割
			for (j = 0; j < col; j++) {
				if (j < col - 1) {    //前两列
					printf(" %c ", arr[i][j]);
					printf("|");
				}
				else {    //最后一列，不需要竖线分割
					printf(" %c ", arr[i][j]);
				}
			}
			printf("\n");
			for (j = 0; j < col; j++) {    
				if (j < col - 1) {    //前两列
					printf("   ");
					printf("|");
				}
				else {    //最后一列，不需要竖线分割
					printf("   ");
				}
			}
			printf("\n");
		}
    }
	printf("\n");
	return;
}
void Player(char arr[ROW][COL]) {
	int row = 0;
	int col = 0;
	while (1) {
		printf("请玩家下子：");
		scanf("%d，%d", &row, &col);
		printf("\n");
		if (row >= 1 && row <= ROW && col >= 1 && col <= COL && arr[row - 1][col - 1] == ' ') {    //输入合法且无值
			arr[row - 1][col - 1] = '*';    //玩家下子
			break;
		}
		else {
			printf("检查该位置是否已有子或者输入子超出棋盘范围！重新");
		}
	}  
	return;
}
void Computer(char arr[ROW][COL]) {
	printf("电脑下子：\n");
	printf("\n");
	do {
		int row = rand() % ROW;
		int col = rand() % COL;
		if (arr[row][col] == ' ') {
			arr[row][col] = '#';    //电脑下子
			break;
		}
	} 	while (1);
	return;
}
static int JudgeFull(char arr[ROW][COL]) {    //只在game.c这个源文件里使用，让static修饰为静态函数改变作用域
	int i = ROW;
	int j = COL;
	for(i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			if (arr[i][j] == ' ') {
				return 1;
			}
		
		}
	}
	return 0;
}
char JudgeResult(char arr[ROW][COL]) {
	/*
	返回值为'P' 玩家赢     返回值为'C' 电脑赢
	返回值为'D' draw平局   返回值为'F' 棋盘未满，继续
	*/
	int i = 0;
	for (i = 0; i < ROW; i++) {
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ') {    //同行
			if (arr[i][0] == '*') {
				return 'P';
			}
			else {
				return 'C';
			}
		}
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ') {    //同列
			if (arr[i][0] == '*') {
				return 'P';
			}
			else {
				return 'C';
			}
		}
		if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ') {    //主对角线
			if (arr[i][0] == '*') {
				return 'P';
			}
			else {
				return 'C';
			}
		}
		if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != ' ') {    //副主对角线
			if (arr[i][0] == '*') {
				return 'P';
			}
			else {
				return 'C';
			}
		}
	}
	int ret = JudgeFull(arr);
	if (ret) {    //棋盘有空，继续
		return 'F';
	}
	else {
		return 'D';    //棋盘输满，平局
	}
}
