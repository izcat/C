#include<stdio.h>
int main()
{
	int n, sum=0;
	for(n=1;n<=10;n++)
        sum += n;
    for(n=11;n<=20;n++)
        sum += 2*n;
	for(n=21;n<=30;n++)
        sum += 3*n;
    printf("%d\n", sum);
	
	system("pause");
	return 0;
}
