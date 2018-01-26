#include <stdio.h>
#include <stdlib.h>

int fun(char *s)
{
	char *p = s;
	char *q = s + strlen(s) - 1;
	int ans = 0;
	while(p<q)
	{
		if(*p==*q)
			ans += *p-'0' + *q-'0';
		else
		{
			ans = -1;
			break;
		}
		p++, q--;
	}
	if(p==q)
		ans += *p-'0';
	return ans;
}
int main()
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
		char s[20];
		scanf("%s", s);
		int ans = fun(s);
		if(ans!=-1)
			printf("%d\n", ans);
		else
			printf("no\n");
	}
	                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
    return 0;
}
