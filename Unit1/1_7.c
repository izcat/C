#include<stdio.h>
int main()
{
	typedef char* string;
	string country1, country2, country3, country4, country5;
	double area1, area2, area3, area4, area5;
	double pop1, pop2, pop3, pop4, pop5;
	double gdp1, gdp2, gdp3, gdp4, gdp5;
	
	country1="China";	area1=960.00;	pop1=129500.00;	gdp1=1080.00;
	country2="Iceland";	area2=10.30;	pop2=27.57;	gdp2=8.20;
	country3="India";	area3=297.47;	pop3=97000.00;	gdp3=264.80;
	country4="Madagascar";	area4=62.70;	pop4=1635.00;	gdp4=3.60;
	country5="Maldive";	area5=0.0298;	pop5=27.80;	gdp5=0.23;
	
	printf("-------------------------------------------------------\n");
	printf("Country     Area(10K km2)    Pop(10k)     GDP(billion$)\n");
	printf("%-10s %10.2lf %15.2lf %15.2lf\n", country1, area1, pop1, gdp1);
	printf("%-10s %10.2lf %15.2lf %15.2lf\n", country2, area1, pop2, gdp2);
	printf("%-10s %10.2lf %15.2lf %15.2lf\n", country3, area3, pop3, gdp3);
	printf("%-10s %10.2lf %15.2lf %15.2lf\n", country4, area4, pop4, gdp4);
	printf("%-10s %10.2lf %15.2lf %15.2lf\n", country5, area5, pop5, gdp5);
	printf("-------------------------------------------------------\n");
	
	system("pause");
	return 0;
}
