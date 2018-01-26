#include <stdio.h>

int fun(int y, int m)
{
	int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int leap = (y%4==0)&&(y%100!=0) || (y%400==0);
	month[1] +=leap;
	return month[m-1];
}

int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		int year, mon;
		scanf("%d%d", &year, &mon);
		printf("%d\n", fun(year, mon));
	}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
    return 0;
}
