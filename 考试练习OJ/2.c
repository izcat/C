#include <stdio.h>

int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	int i, j, arr[1005] = {0};
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);

	for(i=0;i<n;i++)
		for(j=1;j<n-i;j++)
		{
			if(arr[j]>arr[j-1])
			{
				int t = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = t;
			}
		}
    if(m>n)
      m = n;
	for(i=0;i<m;i++)
		printf("%d ", arr[i]);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
    return 0;
}
