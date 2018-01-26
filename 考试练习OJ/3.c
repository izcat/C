#include <stdio.h>

int main()
{
	int alpha[26] = {0};
	char s[30] = {0};
	char c[300] = {0};
	char *p = s, *q = c;

	gets(s);
	gets(c);

	while(*q)
	{
		if(*q!=' ')
			alpha[*q-'a'] = 1;
		q++;
	}

	while(*p)
	{
		if(alpha[*p-'a'])
			alpha[*p-'a'] = 2;
		p++;
	}
    
    int i, flag = 0;
    for(i=0;i<26;i++)
    	if(alpha[i]==2)
    		printf("%c ", i+'a'), flag = 1;
	if(!flag)
        printf("No\n");
		                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    return 0;
}
