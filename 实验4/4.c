#include<stdio.h>

int mon_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int isWhatDay(int mon, int day)
{ // 2007.1.1 Monday
	int days = 0;
	int i = 1;
	while(i<mon)
	{
		days += mon_days[i];
		i++;
	}
	days += day;
	
	int weekday = days%7;
	return weekday;

}
int main()
{
	int month;
	scanf("%d", &month);
    
    printf("Calendar 2007 - %d\n", month);
    printf("-----------------------------\n");
    printf("  Su  Mo  Tu  We  Th  Fr  Sa \n");	
	printf("-----------------------------\n");
	int weekday = isWhatDay(month,1);
	int i;
	for(i=1;i<=weekday;i++)
		printf("%4s", " ");
	
	for(i=1;i<=mon_days[month];i++)
	{
		printf("%4d", i);
		if((i+weekday)%7==0)
			printf("\n");
	}
    printf("\n");
	printf("-----------------------------\n");
	
	system("pause");
	return 0;
}

               
