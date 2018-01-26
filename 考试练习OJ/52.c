#include <stdio.h>

int main()
{
	int n, i, a[6] = {0};
	scanf("%d", &n);

	float ave = 0;
	for(i=0;i<n;i++)
	{
		int k;
		scanf("%d", &k);
		ave += k;

		if(k<=50)
			a[0]++;
		else if(k<=100)
			a[1]++;
		else if(k<=150)
			a[2]++;
		else if(k<=200)
			a[3]++;
		else if(k<=300)
			a[4]++;
		else
			a[5]++;
	}
    printf("%.2f\n", ave/n);

    for(i=0;i<6;i++)
    	printf("%d ", a[i]);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
    return 0;
}
