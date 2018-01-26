#include<stdio.h>

int main()
{
	
	int n, ts=0;
	scanf("%d", &n);
	while(n!=1)
	{
		if(n%2)  //odd
			n = (3*n + 1)/2;
		else
			n /= 2;

		ts++;
	}
	printf("%d\n", ts);

	system("pause");
	return 0;
}

               
