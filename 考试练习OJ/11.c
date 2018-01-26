#include <stdio.h>

int fun(int a)
{
	int i, b = 0;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
			b += i;
	}
	if(b==a)
		return 1;
	else
		return 0;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);

	for(;a<=b;a++)
	{
		if(fun(a))
			printf("%d\n", a);
	}
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
    return 0;
}
