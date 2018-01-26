#include<stdio.h>
int main()
{
   int n;
   printf("Please input n:");
   scanf("%d", &n);
   
   int i;
   for(i=0;i<n;i++)
   {
       int space = n-i;
       int star = 2*i+1;
       while(space--)
       {
           putchar(' ');
       }
       while(star--)
       {
           putchar('*');
       }
       printf("\n");
   }
   
   system("pause");
   return 0;
}
