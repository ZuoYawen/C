#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct contact
{
	int n;
	const char name[20];
	const char num[15];
};

int main()
{
	//FILE* pf;
	////写数据
	//pf = fopen("zuo.txt", "w");
	//if (pf == NULL)
	//{
	//	perror("Writing is wrong!");
	// 	   return 1;
	//}
	//fputs("zuo\n", pf);
	//fputs("ya\n", pf);
	//fputs("wen\n", pf);
	//fclose(pf);
	//pf = NULL;

	////读数据
	//char input[10] = { 0 };
	//pf = fopen("zuo.txt", "r");
	//if (pf == NULL)
 //   {
	//    perror("Reading is wrong!");
	//	return 1;
 //   }
 //   //读下一次会接着上一次的位置继续往后读
	//fgets(input, 6, pf);
	//printf("%s", input);
	//fgets(input, 4, pf);
	//printf("%s", input);
	//fgets(input, 6, pf);
	//printf("%s", input);
	//fclose(pf);
	//pf = NULL;

	////拷贝文件
	//int read = 0;
	//FILE* pf1 = fopen("a.txt", "r");
	//if (pf1 == NULL)
	//{
	//	perror("Reading is wrong!\n");
	//	return 1;
	//}
	//
	//FILE* pf2 = fopen("b.txt", "w");
	//if (pf2 == NULL)
	//{
	//	//若pf1打开成功，pf2打开失败，需要关闭pf1!!!
	//	fclose(pf1);
	//	pf1 == NULL;
	//	perror("Writting is wrong!\n");
	//	return 1;
	//}
	//
	////char input[20] = { 0 };
	//while ((read = fgetc(pf1)) != EOF)
	//{
	//	fputc(read, pf2);
	//	//fgets(input, 20, pf1);
	//	//fputs(input, pf2);
	//}
	//
	//fclose(pf1);
	//pf1 == NULL;
	//fclose(pf2);
	//pf2 == NULL;

	//以二进制的方式存取一个结构体数据
	//struct contact hum1 = { 1,"张三","0987653211" };
	//struct contact hum2 = { 2,"里斯","1234567890" };
	//FILE* pf = fopen("contact.txt", "wb");
	//if (pf == NULL)
	//{
	//	perror("Writting is wrong!");
	//	return 1;
	//}
	//fwrite(&hum1, sizeof(struct contact), 1, pf);
	//fwrite(&hum2, sizeof(struct contact), 1, pf);
	//fclose(pf);
	//pf = NULL;
	//
	//FILE* pf = fopen("contact.txt", "rb");
	//if (pf == NULL)
	//{
	//	perror("Reading is wrong!");
	//	return 1;
	//}
	//struct contact hum = { 0 };
	//fread(&hum, sizeof(struct contact), 1, pf);
	//printf("%d %s %s\n", hum.n, hum.name, hum.num);
	//fclose(pf);
	//pf = NULL;
	FILE* pf = fopen("a.txt", "a");
	if (pf == NULL)
	{
		perror("Openning is wrong!");
		return 1;
	}
	fseek(pf, -1, SEEK_END);
	fputc('!', pf);

	int ret = ftell(pf);
	printf("%d\n", ret);

	rewind(pf);
	ret = ftell(pf);
	printf("%d\n", ret);

	fclose(pf);
	pf = NULL;
	return 0;
}