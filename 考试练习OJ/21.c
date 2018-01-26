#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int m,n,i,j;
	
	scanf("%d %d", &m, &n);
	int arr[105][105];
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d", &arr[i][j]);

	
	int sum = 0;
	for(i=0;i<m;i++)
	{
		int pos = 0;
		for(j=1;j<n;j++)
		{
			if(arr[i][j]<arr[i][pos])
				pos=j;
		}

		for(j=0;j<m;j++)			
			if(arr[i][pos]<arr[j][pos])
					break;
		
		if(j>=m)
		{
			sum++;
			printf("%d %d %d\n", i, pos, arr[i][pos]);					
		}
	}

	if(sum==0)
		printf("no\n");

	return 0;
}
