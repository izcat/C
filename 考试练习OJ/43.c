#include <stdio.h>

int f(int n)
{
	if(n==0)
		return 7%3;
	if(n==1)
		return 11%3;
	return (f(n-1)+f(n-2))%3;

}

int main()
{
	int T;
	scanf("%d", &T);
    int arr[105] = {1, 2};
    int i;
    for(i=2;i<105;i++)
       arr[i] = (arr[i-1] + arr[i-2])%3;
	while(T--)
	{
		int n;
		scanf("%d", &n);
		if(arr[n]==0)
			printf("yes\n");
		else
			printf("no\n");
	}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          
    return 0;
}
