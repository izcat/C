#include <stdio.h>

int main ()
{
	int n, i;
	n = -100000;
	for(i=1;i<=4;i++)
	{
		int k;
		scanf("%d", &k);
		if(k>n)
			n = k;
	}
	printf("%d\n", n);
	return 0;
}
