#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu() {
	int r = ROW;
	printf("________________________________________\n");
	printf("******** ��ӭ����%d������Ϸ��***********\n",r);
	printf("************ ����Ϸ���� 1 **************\n");
	printf("************ ���˳����� 0 **************\n");
	printf("����������������������������������������\n");
	return;
}
void game() {
	char board[ROW][COL];    //������������
	char result = 0;
	InitBoard(board, ROW, COL);    //��ʼ�����̣�Ĭ��Ϊ�ո�
	PrintBoard(board, ROW, COL);    //�����̴�ӡ����Ļ��
	while (1) {
		Player(board);    //�����
		PrintBoard(board, ROW, COL);    //�����̴�ӡ����Ļ��
		result = JudgeResult(board);    //�ж���Ӯ
		if (result != 'F') {
			break;
		}
		Computer(board);    //������
		PrintBoard(board, ROW, COL);    //�����̴�ӡ����Ļ��
		result = JudgeResult(board);    //�ж���Ӯ
		if (result != 'F') {
			break;
		}
		printf("������");
	}
	if (result == 'P') {
		printf("��һ�ʤ��\n");
	}
	else if (result == 'C') {
		printf("���Ի�ʤ��\n");
	}
	else {
		printf("ƽ�֣�\n");
	}
	return;
}
int main() {
	srand((unsigned int)time(NULL));    //����ʱ�����Ϊ�����������ָ�꣬��ʱ�ڱ�
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
			printf("ллʹ�ã����˳���\n");
			break;
		default:
			printf("ֻ������1/0�����������룡\n");
			printf("\n");
			break;
		}
	} while (input);
	return 0;
}