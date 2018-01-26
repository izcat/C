#include <stdio.h>

int fun(int n)
{
	if(n<10)
		return n;
	return n%10 + fun(n/10);
}

int main()
{
	int n;
	while(~scanf("%d", &n))
	{
		printf("%d\n", fun(n));
	}
	return 0;
}
