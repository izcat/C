#include<stdio.h>

int gcd(int m, int n)
{	
	do
	{
		int r = m%n;
		m = n;
		n = r;
	}while(n);
	return m;
}

int main()
{
	int m, n;
	scanf("%d%d", &m, &n);

	int a = gcd(m, n);
	printf("HCF is %d\n", a);
	printf("LCM is %d\n", m*n/a);

	system("pause");
	return 0;
}

               
