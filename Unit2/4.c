#include<stdio.h>
int main()
{
   int n;
   printf("Please input n:");
   scanf("%d", &n);
   
   while(n!=1)
   {
   		
		if(n%2)
        	printf("%d\n", n=3*n+1);
      	else
        	printf("%d\n", n=n/2);
//		getchar(); 
   }
   
   system("pause");
   return 0;
}
