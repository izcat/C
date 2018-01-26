#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    
    float x, min, max, ave;
    scanf("%f", &x);
    ave = min = max = x;
    for(i=2;i<=n;i++)
    {
         float y;
         scanf("%f", &y);
         ave += y;
         if(y<x)
             min = y;
         else if(y>x)
             max = y;                            
    } 
    printf("min=%.2f\n", min);
    printf("max=%.2f\n", max);
    printf("ave=%.2f\n", ave/n);
    
	system("pause");
	return 0;
}
