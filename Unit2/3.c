#include<stdio.h>
int main()
{
   int i, j;
   printf("     Nine-by-nine Multiplication Table\n");
   printf("----------------------------------------\n");
   printf("  ");
   for(i=1;i<=9;i++)
       printf("%4d", i);
   printf("\n");
   printf("----------------------------------------\n");
   
   for(i=1;i<=9;i++)
   {
       printf("%2d", i);
       for(j=1;j<=i;j++)
           printf("%4d", i*j);
       printf("\n");
   }
   
   system("pause");
   return 0;
}
