#include<stdio.h>

int Bubble(int a[],int n)
{
  int i, j;
  for(i=0;i<n;i++)
    for(j=0;j<n-i;j++)
    {
        if(a[j]<a[j-1])
        {
          int t = a[j-1];
          a[j-1] = a[j];
          a[j] = t;
        }
    }
}

int main()
{
  int N, i, a[20];
  scanf("%d", &N);
  for(i=0;i<N;i++)
    scanf("%d", a+i);

  Bubble(a, N);

  for(i=0;i<N;i++)
    printf("%d ", a[i]);

  printf("\n");
  system("pause");
  return 0;
}
