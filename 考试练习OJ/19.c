#include <stdio.h>

int main()
{
	int n, arr[110], *p = arr;
	scanf("%d", &n);

	for(;p<arr+n;p++)
		scanf("%d", p);

	int i, j;
	for(i=0;i<n;i++)
		for(j=1;j<n-i;j++)
		{
			if(arr[j]%2==0 && arr[j-1]%2)
			{
				int t = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = t;
			}
			else if((arr[j]+arr[j-1])%2==0 && arr[j]>arr[j-1])
			{
				int t = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = t;
			}
		}
			

	for(p=arr;p<arr+n;p++)
		printf("%d ", *p);
	
	system("pause");	                             
    return 0;
}
