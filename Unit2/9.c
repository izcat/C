#include<stdio.h>
int main()
{
   printf("Calendar 2006-12\n");
   printf("--------------------------\n");
   printf("Su  Mo  Tu  We  Th  Fr  Sa\n");
   printf("--------------------------\n");
   
   int date;
   for(date=1;date<=5;date++)
      printf("%4s", " ");   
   for(date=1;date<=31;date++)
   {
       if((date+4)%7==0)
           printf("\n");
       printf("%-4d", date);
   }
   
   printf("\n");
   printf("--------------------------\n");
   system("pause");
   return 0;
}
