#include <stdio.h>

int fun1(int n)
{
	int x = n, y = 0;
	while(x>0)
	{
		y *= 10;
		y += x % 10;
		x /= 10;
	}
	if(y==n)
		return 1;
	else
		return 0;
}

int fun2(int n)
{
	if(n<10)
		return n;
	return n%10 + fun2(n/10);
}

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int n;
		scanf("%d", &n);
		if(fun1(n))
			printf("%d\n", fun2(n));
		else
			printf("no\n");
	}
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
    return 0;
}
