#include <stdio.h>

#define PI 3.1415926

int main()
{
	int r1, r2;
	scanf("%d%d", &r1, &r2);

	double v1, v2;

	v1 = 4.0/3 * PI * r1*r1*r1 /20/20/20;
	v2 = 4.0/3 * PI * r2*r2*r2 /20/20/20;
	
	printf("%.3lf %.3lf\n", v1*7.86, v2*19.3);
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    return 0;
}
