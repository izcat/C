#include<stdio.h>
int main()
{
	double sum, i;
	printf("请输入本金与利率：");
	scanf("%lf%lf", &sum, &i);
	double interest;
	interest = sum * (i/100);
	interest = interest * (1-0.05); 
	sum += interest;
	printf("本金与利息的总额为：%5.2lf\n", sum);
	system("pause");
	return 0;
}
