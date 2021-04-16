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
	//i��j��ֵ��1��ʼ��0��Ϊ�˷�ֹ�����Ե�̸�����ӵĸ�����
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
void FindMine(char arr1[ROWS][COLS],char arr2[ROWS][COLS]) {    //����1������ ����2�������
	int x = 0;
	int y = 0;
	int time = ROW * COL;
	while (time > NUM) {
		printf("������Ҫ������꣺");
		scanf("%d��%d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= ROW) {    //����Ϸ�
			if (arr1[x][y] == '1') {
				PrintTable(arr1);
				printf("��С��ɨ���׿���\n");
				break;
			}
			else if(arr2[x][y]!='x'){
				printf("��������Ѿ���ɨ�������������룺");  
				continue;
			}
			else {
				int sum = CalMineNum(arr1, x, y);
				arr2[x][y] = '0' + sum;    //0��ASCII��ֵ�����׵ĸ�������ʾ�׵ĸ�����ASCIIֵ
				PrintTable(arr2);
				time--;
			}
		}
		else {
			printf("��ע�⣬���벻�Ϸ���\n");
		}
		if (time == NUM) {
			printf("������Ϸ��������ȫ�����꣡\n");
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