#include<stdio.h>
int main()
{
    long n;
    scanf("%ld", &n);
    
    while(n)
    {
        int num = n%10;
        n /= 10;
        printf("%d\n", num);
    }
    
	system("pause");
	return 0;
}
