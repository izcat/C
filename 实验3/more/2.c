#include<stdio.h>

int main()
{
	int t = 1;
	int n = 13;
	while(n--)
	{
		t *= 13;
		if(t>1000)
			t %= 1000;
	}
	printf("%03d\n", t);
	system("pause");
	return 0;
}

               
