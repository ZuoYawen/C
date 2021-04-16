#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu() {
	int r = ROW;
	printf("________________________________________\n");
	printf("******** 欢迎进入%d子棋游戏！***********\n",r);
	printf("************ 玩游戏请输 1 **************\n");
	printf("************ 想退出请输 0 **************\n");
	printf("————————————————————\n");
	return;
}
void game() {
	char board[ROW][COL];    //定义棋盘数组
	char result = 0;
	InitBoard(board, ROW, COL);    //初始化棋盘，默认为空格
	PrintBoard(board, ROW, COL);    //将棋盘打印到屏幕上
	while (1) {
		Player(board);    //玩家走
		PrintBoard(board, ROW, COL);    //将棋盘打印到屏幕上
		result = JudgeResult(board);    //判断输赢
		if (result != 'F') {
			break;
		}
		Computer(board);    //电脑走
		PrintBoard(board, ROW, COL);    //将棋盘打印到屏幕上
		result = JudgeResult(board);    //判断输赢
		if (result != 'F') {
			break;
		}
		printf("继续，");
	}
	if (result == 'P') {
		printf("玩家获胜！\n");
	}
	else if (result == 'C') {
		printf("电脑获胜！\n");
	}
	else {
		printf("平局！\n");
	}
	return;
}
int main() {
	srand((unsigned int)time(NULL));    //采用时间戳作为生成随机数的指标，随时在变
	int input = 0;
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("谢谢使用，已退出！\n");
			break;
		default:
			printf("只能输入1/0，请重新输入！\n");
			printf("\n");
			break;
		}
	} while (input);
	return 0;
}