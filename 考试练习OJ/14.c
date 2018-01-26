#include <stdio.h>

double A(int n)
{
	if(n==1)
		return 1;
	return 1.0/(1+A(n-1));
}

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n;
		scanf("%d", &n);
		printf("%f\n", A(n));
	}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    return 0;
}
