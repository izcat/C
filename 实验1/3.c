#include<stdio.h>
int main()
{
	int a1, b1;
	int a2, b2;
	printf("������һ��������ʵ����ǰ���鲿�ں�");
    scanf("%d%d", &a1, &b1);
    printf("x=%d+%di\n", a1, b1);
    
    printf("��������һ��������ʵ����ǰ���鲿�ں�"); 
	scanf("%d%d", &a2, &b2);
	printf("y=%d+%di\n", a2, b2);
	
	printf("x+y = %d+%di\n", a1+a2, b1+b2);
	system("pause");
	return 0;
}
