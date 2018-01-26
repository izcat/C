#include <stdio.h>

long fun(char *str)
{
    char *p = str;
    long n = 0;
    while(*p)
    {
        if(*p>='0' && *p<='9')
        {
            n *= 10;
            n += *p - '0';
        }
        p++;
    }
    return n;
}

int main()
{
	char str[105] = {0};
    while(scanf("%s", str)!=EOF)
    {
        long n =fun(str);
        int k = 2;
        while(k<n)
        {
            if(n%k==0)
                n /= k;
            else
                k++;
        }
        
        printf("%ld\n", n);
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
    return 0;
}
