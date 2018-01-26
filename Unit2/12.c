#include<stdio.h>
typedef enum{no, yes} BOOL;
int main()
{
	int A, B, C, D, E, F;
	int i;
	printf("A B C D E F\n");
	for(i=0;i<=64-1;i++)
	{
		A = (i>>5)&1;
		B = (i>>4)&1;
		C = (i>>3)&1;
		D = (i>>2)&1;
		E = (i>>1)&1;
		F = (i&1); 
		BOOL key1 = (A+B)>=1;
		BOOL key2 = (A+E+F)>=2;
		BOOL key3 = A*D==0;
		BOOL key4 = B==C;
		BOOL key5 = (C+D==1);
		BOOL key6 = (D==1||D+E==0);
		if(key1 && key2 && key3 && key4 && key5 && key6)
			printf("%d %d %d %d %d %d\n", A, B, C, D, E, F);
	}
	return 0;
}
