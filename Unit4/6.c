#include <stdio.h>

int fun(int n)
{
	int i = 0, m = 0;
	while(++i<n)
	{
		if(n%i==0)
			m += i;
	}
	if(m==n)
		return 1;
	else
		return 0;
}

int main()
{
	int n;
	for(n=1;n<=999999;n++)
	{
		if(fun(n))
			printf("%d\n", n);
	}
	return 0;
}
