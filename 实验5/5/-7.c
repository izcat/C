#include<stdio.h>
#include<string.h>

void reverse(char *str, int len);
void Mul(char *A, char *B, char *Ans);

int main()
{
	char a[20] = {0};
	char b[20] = {0};
    while(scanf("%s %s", a, b)!=EOF)
    {
    	char c[20] = {0};
    	int na = strlen(a), nb = strlen(b);
    	reverse(a, na);
    	reverse(b, nb);

    	Mul(a, b, c);

    	int n = strlen(c);
    	reverse(a, na);
    	reverse(b, nb);
    	reverse(c, n);
    	printf("%s*%s=%s\n",a, b, c);
    }
    return 0;
}

void reverse(char *str, int len)
{
	char *p, *q;
	p = q = str;
	q += len - 1;
	while(p<q)
	{
		char t = *p; *p = *q; *q = t;
		p++; 
		q--;
	}
//	printf("%s\n", str);
}

void Mul(char *A, char *B, char *Ans)
{
	if(*B=='\0')
		return;
	char *p = A, *q = Ans;
	int ac = 0;
	while(*p)
	{
		if(*q>='0')
			*q -= '0';

		*q += (*B-'0') * (*p-'0') + ac;
		if(*q>9)
		{
			ac = *q / 10;
			*q = *q % 10;
		}
		else
			ac = 0;
		*q += '0';
		p++, q++;
	}
	if(ac>0)
		*q = ac + '0';

	Mul(A, B+1, Ans+1);
}
