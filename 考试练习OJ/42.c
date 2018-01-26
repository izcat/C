#include <stdio.h>

int main()
{
	char n[15];
	gets(n);
	int num[10] = {0};
	char *p = n;
	while(*p)
	{
		num[*p++ -'0']++;
	}
    
    int i, j;
    for(i=9;i>=0;i--)
    {
    	for(j=1;j<=num[i];j++)
    		printf("%d ", i);
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
    return 0;
}
