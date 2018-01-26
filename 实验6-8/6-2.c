#include<stdio.h>
#define MAXN 30
#define MAXM 30

typedef int Matrix[MAXN][MAXM];
int n, m;

void Add(Matrix a, Matrix b, Matrix c);
void Trans(Matrix a, Matrix b);
void Print(Matrix a, int n, int m);

int main()
{
	Matrix a, b, c;
	scanf("%d %d", &n, &m);

	int i, j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			a[i][j] = (i+1)*(j+1);

	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			b[i][j] = (5-i)*(j+3);
	Add(a, b, c);
	Print(c, n, m);
	Print(a, n, m);
	Trans(a, c);
	Print(c, m, n);

 	system("pause");
	return 0;
}

void Add(Matrix a, Matrix b, Matrix c)
{
	int i, j;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
    		c[i][j] = a[i][j] + b[i][j];
}

void Trans(Matrix a, Matrix b)
{	
  	int i, j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
	 		b[i][j] = a[j][i];
}
void Print(Matrix a, int n, int m)
{
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
     		printf("%d ", a[i][j]);
    	printf("\n");
  	}
}
