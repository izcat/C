#include <stdio.h>

int fun1(int n)
{
	if(n<10)
		return n;
	return n%10 + fun1(n/10);
}

int fun2(int n)
{
	if(n<10)
		return n;
	return fun2(n%10 + fun1(n/10));
}

int main()
{
	int n;
	while(~scanf("%d", &n))
	{
		printf("%d\n", fun2(n));
	}
	return 0;
}
