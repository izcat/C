#include<stdio.h>
int main()
{
	float sf=0, xf=0.1f;
	double sd=0, xd=0.1;
	
	int i;
	for(i=1;i<=1000;i++)
	    sf += xf;
    for(i=1;i<=1000;i++)
        sd += xd;
    
    printf("(100.0-s)=%f\n", 100.0-sf);
    printf("(100.0-s)=%lf\n", 100.0-sd);	
	system("pause");
	return 0;
}
