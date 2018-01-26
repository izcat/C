#include<stdio.h>
int main()
{
   int n, m;
   printf("Please input n, m:");
   scanf("%d%d", &n, &m);
   
   int i;
   for(i=0;i<n;i++)
   {
       int space1 = n-i;
       int star = 2*i+1;
       int space2 = m;
       
       /*打印三角*/ 
       while(space1--)  
           putchar(' ');
       while(star--)
           putchar('*');
           
       /*打印倒三角*/ 
       while(space2--)  
           putchar(' ');
       star = 2*(n-1-i)+1;   
       while(star--)
           putchar('*');   
           
       printf("\n");
   }
   
   system("pause");
   return 0;
}
