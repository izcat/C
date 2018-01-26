#include<stdio.h>

int main()
{
  char a[100];
  gets(a);

  int i, flag = 0;
  for(i=0;a[i+3]!='\0';i++)
  {
  	if((a[i]=='b')&&(a[i+1]=='a')
  		&&(a[i+2]=='b')&&(a[i+3]=='y'))
  	{
  		printf("Yes\n");
  		flag = 1;
  	}
  }
  if(!flag)
  	printf("No\n");
  
  system("pause");
  return 0;
}
