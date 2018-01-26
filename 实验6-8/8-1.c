#include <stdio.h>

void p_merge(int a[], int b[], int c[])
{
	int *pa = a + 4;
	int *pb = b + 4;
	int *pc = c;
	while(pa>=a && pb>=b)
		*pc++ = *pa>*pb?*pa--:*pb--;
	while(pa>=a)
        *pc++ = *pa--;
    while(pb>=b)
		*pc++ = *pb--;
}

int main()
{
	int a[5] = {1, 5, 6, 9, 10};
	int b[5] = {0, 2, 5, 7, 9};
	int c[10] = {0};

	p_merge(a, b, c);

	int i;
	for(i=0;i<10;i++)
		printf("%d ", c[i]);
	printf("\n");
	
	system("pause");
	return 0;
}
