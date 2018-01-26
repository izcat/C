#include<stdio.h>
#include<math.h>

int isPrime(int i)
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
	int x;
	scanf("%d", &x);
	if(isPrime(x))
		printf("%d is a prime\n", x);
	else
		printf("%d is not a prime\n", x);

	system("pause");
	return 0;
}

               
