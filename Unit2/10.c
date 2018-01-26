#include<stdio.h>
int main()
{    //2007.1.1 Monday
    int mon_num;
    printf("Please input the Month:");
    scanf("%d", &mon_num);
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Calendar 2007-%d\n", mon_num);
    printf("--------------------------\n");
    printf("Su  Mo  Tu  We  Th  Fr  Sa\n");
    printf("--------------------------\n");
   
    int i, days=0;
    for(i=1;i<mon_num;i++)
        days += month[i-1];
    days %= 7;
    int mon = month[mon_num-1];
    for(i=0;i<=days;i++)         //Monday 前面开始留空 
       printf("%4s", " ");  
        
    for(i=1;i<=mon;i++)
    {
        if((i+days)%7==0)
            printf("\n");
        printf("%-4d", i);
    }
   
    printf("\n");
    printf("--------------------------\n");
    system("pause");
    return 0;
}
