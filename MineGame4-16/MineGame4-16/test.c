#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu() {
	printf("________________________________________\n");
	printf("*********  ��ӭ����ɨ����Ϸ�� **********\n");
	printf("************ ����Ϸ���� 1 **************\n");
	printf("************  �˳����� 0  **************\n");
	printf("����������������������������������������\n");
	return;
}
void game() {
	//ȫ����ʼ��
	char mine[ROWS][COLS] = { 0 };    //���׵��̣����ף�'1'�����ף�'0'��
	char play[ROWS][COLS] = { 0 };    //����Ϸ�����׵��̣�δ�飺'x'���������ʾ��Χ�׵ĸ�����
	InitTable(mine,'0');
	InitTable(play, 'x');
	PrintTable(play);
	//������
	SetMine(mine);
	//PrintTable(mine);    //����ʱʹ�ã���ʽʹ�ÿ���ע����
	//����
	FindMine(mine,play);
	return;
}
int main() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��л���飬���˳���\n");
			break;
		default:
			printf("ֻ������1/0�����������룡\n");
			printf("\n");
			break;
		}
	} while (input);
	return 0;
}
