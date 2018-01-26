#include <stdio.h>

int main()
{
	long n;
	scanf("%ld", &n);

	int len = 0, max = 0, min = 9;
	if(n==0)
	{
		min = 0;
		len = 1;
	}
	while(n)
	{
		int k =  n % 10;
		if(k>max) max = k;
		if(k<min) min = k;
		n /= 10;
		len++;
	} 
	printf("%d %d %d", len, max, min);

    return 0;
}
