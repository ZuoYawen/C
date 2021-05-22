#define _CRT_SECURE_NO_WARNINGS
#include "address-list.h"
void menu()
{
	printf(" _________________________________\n");
	printf("|  1.add     2.del      3.search  |\n");
	printf("|  4.modify    5.sort     6.show  |\n");
	printf("|            0.exit               |\n");
	printf(" ！！！！！！！！！！！！！！！！-\n");
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
EXIT = 0
};
int main()
{
	//延楚兜兵晒
	people data[NUM] = { 0 };
	int input = 0;
	contact c = { 0 };
	do
	{
		menu();
		printf("Have a choice:");
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
		    case EXIT:
				printf("Exited,thanks for use!\n");
				printf("\n");
			    break;
			default:
				printf("Please input correct num!\n");
				printf("\n");
				break;
		}
	} while (input);
	return 0;
}