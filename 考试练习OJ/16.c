#include <stdio.h>

int fun(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main()
{
	
    int T;
    scanf("%d", &T);
    while(T--)
    {
    	int n, i;
    	scanf("%d", &n);
    	for(i=2;i<n;i++)
        	if(fun(i) && fun(n-i))
            {
            	printf("%d %d\n", i, n-i);
            	break;
            }
    }
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
    return 0;
}
