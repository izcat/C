#include <stdio.h>
#include <stdlib.h>

void fun1(void);
void fun2(void);
void fun3(char ch);

int main()
{
	fun1();
	fun2();
	printf("Input the char to find:");
	fun3(getchar());
	return 0;
}

void fun1()
{
	FILE *fp = fopen("a.txt", "w");
	char name[20];
	printf("Input your name:");
	gets(name);

	fprintf(fp, "%s\n", name);
	fprintf(fp, "%s\n", "Done");
	
	fclose(fp);
}

void fun2()
{
	FILE *fa = fopen("a.txt", "r");
	FILE *fb = fopen("b.txt", "w");
	// char s[100];
	// while(fgets(s, 100, fa)!=NULL)
	// {
	// 	fputs(s, fb);
	// 	printf("OK\n");
	// }   bug...
	
	// while(fscanf(fa, "%s", s)!=EOF)
	// {
	// 	fprintf(fb, "%s\n", s);
	// 	printf("OK\n");
	// }
	char c;
	while((c=getc(fa))!=EOF)
	{
		putc(c, fb);
		printf("OK\n");
	} 
	
	fclose(fa);
	fclose(fb);
}

void fun3(char ch)
{
	FILE *fa = fopen("a.txt", "r");
	char c;
	while((c=getc(fa))!=EOF)
	{
		if(c==ch)
		{
			printf("Exist!\n");
			return;
		}
	} 
	if(c==EOF)
		printf("Not Found!\n");
	fclose(fa);
}
