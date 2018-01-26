#include<stdio.h>
#include<string.h>

int Cmp(char *A, char *B);
void Reverse(char *str, int len);
void Add(char *A, char *B, char *Result);
void Sub(char *A, char *B, char *Result);
void Mul(char *A, char *B, char *Result);
void Mul_(char *A, char *B, char *Result);


int main()
{
	char A[65] = {0};
	char B[65] = {0};
    while(scanf("%s %s", A, B)!=EOF)
    {
    	char R1[65] = {0};
    	char R2[65] = {0};
    	char R3[125] = {0};

    	Add(A, B, R1);
    	Sub(A, B, R2);
    	Mul(A, B, R3);

    	printf("%s + %s = %s\n", A, B, R1);
    	printf("%s - %s = %s\n", A, B, R2);
    	printf("%s * %s = %s\n", A, B, R3);

    }
    return 0;
}

void Reverse(char *str, int len)
{
	char *p, *q;
	p = str;
	q = p + len - 1;
	while(p<q)
	{
		char t = *p; *p = *q; *q = t;
		p++, q--;
	}
}

int Cmp(char *A, char *B)
{
	if(strlen(A)>strlen(B))
		return 1;
	if(strlen(A)<strlen(B))
		return -1;

	char *pA = A, *pB = B;
	while(*pA)
	{
		if(*pA>*pB)
			return 1;	
		else if(*pA<*pB)
			return -1;
		pA++, pB++;
	}
	return 0;		// A = B
}

void Add(char *A, char *B, char *Result)
{
	char *pA, *pB, *pR;
	pA = A, pB = B, pR = Result;
	if(strlen(A)<strlen(B))
		pA = B, pB = A;

	Reverse(A, strlen(A));
	Reverse(B, strlen(B));

	while(*pB)
	{
		*pR += *pA + *pB - '0';
		if(*pR>'9')
		{
			*pR -= 10;
			*(pR+1) = 1;
		}
		pA++, pB++, pR++;
	}
	while(*pA)
	{
		*pR += *pA;
		if(*pR>'9')
		{
			*pR -= 10;
			*(pR+1) = 1;
		}
		pA++, pR++;
	}
	
	if(*pR!='\0' && *pR<'0')
		*pR +='0';

	Reverse(A, strlen(A));
	Reverse(B, strlen(B));
	Reverse(Result, strlen(Result));
}

void Sub(char *A, char *B, char *Result)
{  // A - B
	char *pA, *pB, *pR;
	pA = A, pB = B, pR = Result;
	int sign = 0;
	if(Cmp(A, B)<0)
	{
		pA = B, pB = A;
		sign = 1;
		*pR++ = '-';
	}
	else if(Cmp(A, B)==0)
	{
		*pR = '0';
		return;
	}

	Reverse(A, strlen(A));
	Reverse(B, strlen(B));
	while(*pB)
	{
		*pR += *pA - *pB + '0';
		if(*pR<'0')
		{
			*pR += 10;
			*(pR+1) = -1;
		}
		pA++, pB++, pR++;
	}
	while(*pA)
	{
		*pR += *pA;
		if(*pR<'0')
		{
			*pR += 10;
			*(pR+1) = -1;
		}
		pA++, pR++;
	}

	while(--pR>Result && *pR=='0')
		*pR ='\0';

	Reverse(A, strlen(A));
	Reverse(B, strlen(B));
	Reverse(Result+sign, strlen(Result)-sign);
}

void Mul(char *A, char *B, char *Result)
{
	Reverse(A, strlen(A));
	Reverse(B, strlen(B));

	Mul_(A, B, Result);

	Reverse(Result, strlen(Result));
	Reverse(A, strlen(A));
	Reverse(B, strlen(B));
}

void Mul_(char *A, char *B, char *Result)
{
	if(*B=='\0')
		return;

	char *pA = A, *pR = Result;
	while(*pA)
	{
		if(*pR>='0')
			*pR -= '0';

		*pR += (*B-'0') * (*pA-'0');
		if(*pR>9)
		{
			if(*(pR+1)=='\0')
				*(pR+1) += '0';
			*(pR+1) += *pR/10;
			*pR %= 10;
		}
		*pR += '0';

		pA++, pR++;
	}
	Mul_(A, B+1, Result+1);
}
