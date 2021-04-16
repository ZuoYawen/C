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
		if (i < row - 1) {    //ǰ����
			for (j = 0; j < col; j++) {
				if (j < col - 1) {    //ǰ����
					printf(" %c ", arr[i][j]);
					printf("|");
				}
				else {    //ǰ�������һ�У�����Ҫ���߷ָ�
					printf(" %c ", arr[i][j]);
				}
			}
			printf("\n");
			for (j = 0; j < col; j++) {
				if (j < col - 1) {    //ǰ����
					printf("___");
					printf("|");
				}
				else {    //ǰ�������һ�У�����Ҫ���߷ָ�
					printf("___");
				}
			}
			printf("\n");
		}
		else {    //���һ�У�����Ҫ���߷ָ�
			for (j = 0; j < col; j++) {
				if (j < col - 1) {    //ǰ����
					printf(" %c ", arr[i][j]);
					printf("|");
				}
				else {    //���һ�У�����Ҫ���߷ָ�
					printf(" %c ", arr[i][j]);
				}
			}
			printf("\n");
			for (j = 0; j < col; j++) {    
				if (j < col - 1) {    //ǰ����
					printf("   ");
					printf("|");
				}
				else {    //���һ�У�����Ҫ���߷ָ�
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
		printf("��������ӣ�");
		scanf("%d��%d", &row, &col);
		printf("\n");
		if (row >= 1 && row <= ROW && col >= 1 && col <= COL && arr[row - 1][col - 1] == ' ') {    //����Ϸ�����ֵ
			arr[row - 1][col - 1] = '*';    //�������
			break;
		}
		else {
			printf("����λ���Ƿ������ӻ��������ӳ������̷�Χ������");
		}
	}  
	return;
}
void Computer(char arr[ROW][COL]) {
	printf("�������ӣ�\n");
	printf("\n");
	do {
		int row = rand() % ROW;
		int col = rand() % COL;
		if (arr[row][col] == ' ') {
			arr[row][col] = '#';    //��������
			break;
		}
	} 	while (1);
	return;
}
static int JudgeFull(char arr[ROW][COL]) {    //ֻ��game.c���Դ�ļ���ʹ�ã���static����Ϊ��̬�����ı�������
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
	����ֵΪ'P' ���Ӯ     ����ֵΪ'C' ����Ӯ
	����ֵΪ'D' drawƽ��   ����ֵΪ'F' ����δ��������
	*/
	int i = 0;
	for (i = 0; i < ROW; i++) {
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ') {    //ͬ��
			if (arr[i][0] == '*') {
				return 'P';
			}
			else {
				return 'C';
			}
		}
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ') {    //ͬ��
			if (arr[i][0] == '*') {
				return 'P';
			}
			else {
				return 'C';
			}
		}
		if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ') {    //���Խ���
			if (arr[i][0] == '*') {
				return 'P';
			}
			else {
				return 'C';
			}
		}
		if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != ' ') {    //�����Խ���
			if (arr[i][0] == '*') {
				return 'P';
			}
			else {
				return 'C';
			}
		}
	}
	int ret = JudgeFull(arr);
	if (ret) {    //�����пգ�����
		return 'F';
	}
	else {
		return 'D';    //����������ƽ��
	}
}
