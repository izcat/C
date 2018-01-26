#include<stdio.h>
int main()
{
    const float lilv[5] = {3.87/100, 4.50/100, 5.22/100, 0, 5.76/100};
    float benjin;
    scanf("%f", &benjin);
    
    int period[5]={1,2,3,0,5};
    int i, j;
    for(i=0;i<5;i++)
    {
        if(3==i)  continue;
        int k = period[i];
        float sum = benjin;
        for(j=k;j<=30;j=j+k)
            sum += sum*lilv[i]*(i+1);
        
        printf("The total money is %f\n", sum);
    }
    
    system("pause");
    return 0;
}   
        
        
