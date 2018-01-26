#include<stdio.h>
#define pi 3.1415926536
int main()
{
	printf("请输入半径的值：");
	double r; 
	double S1, S2, V;
	scanf("%lf", &r);
	S1 = pi * r*r; 
	S2 = 4*pi * r*r;
	V = pi * r*r*r *4 /3;
	printf("圆的面积是%15.10lf\n", S1);
	printf("球的表面积是%15.10lf\n", S2);
	printf("球的体积是%15.10lf\n", V);
	system("pause");
	return 0;
}
