#include<stdio.h>
int main()
{
	int m, n, r;
	scanf("%d%d", &m, &n);
	int t = m*n;
	do
	{
		r = m%n;
		m = n;
		n = r;
	}while(r);
	printf("%d\n", m);
	printf("%d\n", t/m);
	return 0;
}
