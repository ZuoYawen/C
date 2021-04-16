#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu() {
	printf("________________________________________\n");
	printf("*********  欢迎进入扫雷游戏！ **********\n");
	printf("************ 玩游戏请输 1 **************\n");
	printf("************  退出请输 0  **************\n");
	printf("————————————————————\n");
	return;
}
void game() {
	//全部初始化
	char mine[ROWS][COLS] = { 0 };    //放雷的盘（有雷：'1'，无雷：'0'）
	char play[ROWS][COLS] = { 0 };    //玩游戏即找雷的盘（未查：'x'，查过：显示周围雷的个数）
	InitTable(mine,'0');
	InitTable(play, 'x');
	PrintTable(play);
	//设置雷
	SetMine(mine);
	//PrintTable(mine);    //测试时使用，正式使用可以注销掉
	//找雷
	FindMine(mine,play);
	return;
}
int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("感谢体验，已退出！\n");
			break;
		default:
			printf("只能输入1/0，请重新输入！\n");
			printf("\n");
			break;
		}
	} while (input);
	return 0;
}
