#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int a, b, c;
	for(a=1;a<=9;a++)
		for(b=0;b<=9;b++)
			for(c=1;c<=9;c++)
			{
				int k = a*100 + b*10 + c;
				k += c*100 + b*10 + a;
				if(k==n)
					printf("%d %d %d\n", a, b, c);
			}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
    return 0;
}
