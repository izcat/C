#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int m,n,i,j;
	printf("please input m and n :\n");
	scanf("%d %d", &m, &n);
	int arr[100][100];
	
	srand((unsigned)time(NULL));
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			arr[i][j] = rand()%10;


	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",arr[i][j]);
		printf("\n");	
	}
	
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
			printf("arr[%d][%d]:%d\n", i, pos, arr[i][pos]);					
		}
	}

	if(sum==0)
		printf("Not found!\n");

	return 0;
}
