#include<stdio.h>
int main()
{
	double a, b, c;
	printf("This program will give the root\n");
	printf("of the equation ax^2+bx+c=0.\n");
	printf("Please input a(!=0), b, c:\n");
	scanf("%lf%lf%lf", &a, &b, &c);
	double x1, x2;
	double delta = b*b-4*a*c;
	if(delta>0)
	{
		x1 = (-b+delta)/(2*a);
		x2 = (-b-delta)/(2*a); 
		printf("x1=%.2lf, x2=%.2lf\n", x1, x2);
	}
	else if(delta==0)
	{
		x1 = x2 = -b/(2*a);
		printf("x1=x2=%.2lf\n", x1);
	}
	else
		printf("No root!\n");

	return 0;
}
