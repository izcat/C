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
		int y;
		for(j=0;j<n;j++)
		{
			if(arr[i][j]<arr[i][y])
				y=j;
		}

		for(j=0;j<m;j++)			
			if(arr[i][y]<arr[j][y])
					break;
		
		if(j>=m)
		{
			sum++;
			printf("%d %d %d\n", i, y, arr[i][y]);					
		}
	}

	if(sum==0)
		printf("no\n");

	return 0;
}
