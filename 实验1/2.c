#include<stdio.h>
int main()
{
	double sum, i;
	printf("�����뱾�������ʣ�");
	scanf("%lf%lf", &sum, &i);
	double interest;
	interest = sum * (i/100);
	interest = interest * (1-0.05); 
	sum += interest;
	printf("��������Ϣ���ܶ�Ϊ��%5.2lf\n", sum);
	system("pause");
	return 0;
}
