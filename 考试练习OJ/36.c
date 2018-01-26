#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	char c;
	switch(n/10)
	{
		case 10:
		case 9: c = 'A'; break;
		case 8: c = 'B'; break;
		case 7: c = 'C'; break;
		case 6: c = 'D'; break;
		default: c = 'E';
	}
		
	printf("%c\n", c);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    return 0;
}
