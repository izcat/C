#include<stdio.h>
#include<string.h>

void diverse(char a[], int len)
{
  int i;
  for(i=0;i<len/2;i++)
  {
    char t = a[i];
    a[i] = a[len-1-i];
    a[len-1-i] = t;
  }
}

int main()
{
  char a[100];
  gets(a);

  int len = strlen(a);
  diverse(a, len);
  puts(a);

  system("pause");
  return 0;
}
