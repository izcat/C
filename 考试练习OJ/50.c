#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	int i, k, ave = 0;
	for(i=0;i<n;i++)
	{
		scanf("%d", &k);
		ave += k;
	}

	printf("%.2lf\n", (double)ave/n);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
    return 0;
}
