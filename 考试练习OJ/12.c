#include <stdio.h>

int fun(int a, int b)
{
    if(a==0)
      return b;
    if(b==0)
      return a;
	do
	{
		int r = a % b;
		a = b;
		b = r;
	}while(b!=0);
	return a;
}

int main()
{
	int a, b;
	while(scanf("%d%d", &a, &b) && !(a==0&&b==0))
	{
		printf("%d\n", fun(a, b));
	}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    return 0;
}
