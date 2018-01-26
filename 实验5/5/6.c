#include<stdio.h>
#include<string.h>

int CompactIntergers(int a[], int len)
{
	int i, j, counter=0;
	int b[100] = {0};
	for(i=0,j=0;i<len;i++)
		if(a[i]==0)
		    counter++;
		else
			b[j++] = a[i];

	for(i=0;i<j;i++)
		a[i] = b[i];
	return counter;
}

int main()
{
	int a[100]={6, 12, 0, 28, 31, 0, 0, 51, 99};
	int num = CompactIntergers(a, 9);
	printf("%d\n", num);
	int i;
	for(i=0;i<9;i++)
		printf("%d ", a[i]);
	system("pause");
	return 0;
}
