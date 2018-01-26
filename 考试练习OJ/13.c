#include <stdio.h>

int fun(int n)
{
	int t = 1;
	while(n!=1)
	{
		if(n%2==0)
			n /= 2;
		else
			n = 3*n + 1;
		t++;
	}
	return t;
}

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n;
		scanf("%d", &n);
		printf("%d\n", fun(n));
	}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    return 0;
}
