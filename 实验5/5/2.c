#include<stdio.h>

int main()
{
  int len, a[1000];
  scanf("%d", &len);
  // input the array
  int i;
  for(i=0;i<len;i++)
    scanf("%d", a+i);
  // input the x
  printf("Please input the number to find:");
  int x;
  scanf("%d", &x);
  // find the x
  for(i=0;i<len;i++)
    if(x==a[i])
    {
      printf("%d", i);
      break;
    }
  if(i==len)
    printf("not found\n");

  system("pause");
  return 0;
}
