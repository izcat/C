#include<stdio.h>
int main()
{
	while(1)
	{
		int year;
		scanf("%d", &year);
		if(year==0)
			break;
		if(year%4==0&&year%100!=0||year%400==0)
			printf("The year %d IS a leapyear\n", year);
		else
			printf("The year %d is NOT a leapyear\n", year);
	}
	return 0;
}
