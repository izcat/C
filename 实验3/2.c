#include<stdio.h>
int main()
{
   int i, j, k;
   for(i=0;i<=100/5;i++)
    for(j=0;j<=100/3;j++)
    {
      k = 100 - i - j;
      if(5*i+3*j+k/3.0==100.0)
        printf("cock:%d hen:%d chilken:%d\n", i, j, k);
    }
   
   system("pause");
   return 0;
}
