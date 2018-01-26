#include<stdio.h>
int main()
{
	int a1, b1;
	int a2, b2;
	printf("请输入一个虚数，实部在前，虚部在后；");
    scanf("%d%d", &a1, &b1);
    printf("x=%d+%di\n", a1, b1);
    
    printf("请再输入一个虚数，实部在前，虚部在后；"); 
	scanf("%d%d", &a2, &b2);
	printf("y=%d+%di\n", a2, b2);
	
	printf("x+y = %d+%di\n", a1+a2, b1+b2);
	system("pause");
	return 0;
}
