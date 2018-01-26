#include<stdio.h>
int main()
{    //2007.1.1 Monday
    int year, mon_num;
    printf("Please input the Year & Month:");
    scanf("%d%d", &year, &mon_num);
    while(year<2007)
    {
    	printf("Please input the year after 2007!\n");
    	printf("Please input the Year & Month:");
    	scanf("%d%d", &year, &mon_num);
    }
    
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Calendar %d-%d\n", year, mon_num);
    printf("--------------------------\n");
    printf("Su  Mo  Tu  We  Th  Fr  Sa\n");
    printf("--------------------------\n");
   
	int leapyear = 0;
    int i, days=0;
    for(i=2007;i<year;i++)
    	leapyear += (i%4==0 && i%100!=0 || i%400==0);
    for(i=1;i<mon_num;i++)
        days += month[i-1];
    days +=(year-2007)*365 + leapyear;
    days %= 7;
    
    month[1] += (year%4==0 && year%100!=0 || year%400==0);
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
