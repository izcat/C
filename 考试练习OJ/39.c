#include <stdio.h>

int main()
{
	int fib[33] = {1, 2}, i;
	for(i=2;i<33;i++)
		fib[i] = fib[i-1] + fib[i-2];

	double ans[30] = {2/1};
	for(i=1;i<30;i++)
		ans[i] = ans[i-1] + (double)fib[i+1]/fib[i];

	int n;
	scanf("%d", &n);
	printf("%.2lf\n", ans[n-1]);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
    return 0;
}
