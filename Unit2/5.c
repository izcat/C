#include<stdio.h>
int main()
{
	printf("Please input n:");
	int i, n;
	scanf("%d", &n);
	double f=1, fact=1;
	for(i=1;i<=n;i++)
	{	//f += 1.0/fact(i);
		fact *= i;
		f += 1.0/fact;
	}
	printf("f(%d)=%.10lf\n", n, f);
	system("pause");
	return 0;
}
