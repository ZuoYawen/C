#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"
void menu()
{
	printf(" ___________________________________\n");
	printf("|                                   |\n");
	printf("|     1.add     2.del   3.search    |\n");
	printf("|     4.modify  5.sort  6.show      |\n");
	printf("|          7.claer   0.exit         |\n");
	printf("|___________________________________|\n");
	printf("\n");
	return;
}
enum menu
{
	ADD = 1,
	DEL = 2,
	SEARCH = 3,
	MODIFY = 4,
	SORT = 5,
	SHOW = 6,
	CLEAR = 7,
	EXIT = 0
};
int main()
{
	int input = 0;
	contact c = { 0 };
	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		printf("\n");
		switch (input)
		{
		case ADD:
			add(&c);
			break;
		case DEL:
			del(&c);
			break;
		case SEARCH:
			search(&c);
			break;
		case MODIFY:
			modify(&c);
			break;
		case SORT:
			sort(&c);
			break;
		case SHOW:
			show(&c);
			break;
		case CLEAR:
			clear(&c);
			break;
		case EXIT:
			printf("��лʹ�ã����˳���\n");
			break;
		default:
			printf("���������������ȷ�����֣�\n");
		}
	} 	
	while (input);
	return 0;
}