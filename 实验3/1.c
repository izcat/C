#include<stdio.h>
#include<math.h>

int isprime(int i)
{
    if(i==1)  return 0;
    if(i==2)  return 1;
    if(i%2==0)  return 0;     
    
	int j;
	int j_up = (int)sqrt(i) + 1;
	for(j=3;j<=j_up;j+=2)
		if(i%j==0)
			return 0;
	return 1;
}

int main()
{
	printf("Please input m, n(0<m<n):\n");
	int m, n;
	scanf("%d%d", &m, &n);

	int i;
	for(i=m;i<=n;i++)
	{
        if(isprime(i))
			printf("%d ", i);
	}
	printf("\n");

	system("pause");
	return 0;
}

               
