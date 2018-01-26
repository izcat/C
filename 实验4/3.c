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
	int month, day;
	scanf("%d%d", &month, &day);
    
    printf("2007.%d.%d is ", month, day);
	switch(isWhatDay(month, day))
	{
		case 0: printf("Sunday\n");break;
		case 1: printf("Monday\n");break;
		case 2: printf("Tuesday\n");break;
		case 3: printf("Wednesday\n");break;
		case 4: printf("Thursday\n");break;
		case 5: printf("Friday\n");break;
		case 6: printf("Saturday\n");break;
	}

	
	system("pause");
	return 0;
}

               
