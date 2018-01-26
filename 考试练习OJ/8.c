#include <stdio.h>


int main()
{
	int m;
	scanf("%d", &m);
	while(m--)
	{
		float a, fee = 0;
		scanf("%f", &a);
		if(a<=110)
			fee = a * 0.5;
		else if(a<=210)
			fee = 110 * 0.5 + (a-110) * 0.55;
		else
			fee = 110 * 0.5 + (210-110) * 0.55 + (a-210) * 0.7;

		printf("%.2f\n", fee);
	}
	
	system("pause");	                                                                                                                                                                                                                                                                                                             
    return 0;
}
