#include<stdio.h>

int main()
{
	
	int x = 9828;
	int i;
	printf("%d=", x);

	for(i=2;i<x;)
		if(x%i==0)
		{
			printf("%d*", i);
			x /= i;
		}
		else  i++;
		
	printf("%d\n", x);

	system("pause");
	return 0;
}

               
