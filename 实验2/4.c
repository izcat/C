#include<stdio.h>
int main()
{
	int m, i;
	scanf("%d", &m);
	for(i=2;i<m;i++)
		if(m%i==0)
			break;
	if(i==m)
		printf("%d IS a prime number\n", m);
	else
		printf("%d is NOT a prime number\n", m);
	return 0;
}
