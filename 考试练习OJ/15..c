#include <stdio.h>

int nums[10] = {0}, c = 0;

long myPow(int x, int y);
void Find(void);
int fun(int a, int b);

int main()
{

	Find();

	int m;
	scanf("%d", &m);
	while(m--)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		printf("%d\n", fun(a, b));
	}                                                                                                                                                                                                                                                                                                     
    return 0;
}

long myPow(int x, int y)
{
	if(y==1)
		return x;
	return x * myPow(x, y-1);
}

void Find(void)
{
	//int nums[20] = {0, 153, 370, 371, 407, 1634, 8208, 9474, 54748, 92727, 93084, 548834, 1741725};
    long i;
	for(i=100;i<100000;i++)
	{
		long n = i;
		int num[10] = {0}, k = 0;

		while(n>0)
		{
			num[k++] = n % 10;
			n /= 10;
		}

		long ans = 0,  j = k - 1;
		while(j>=0)
		{
			ans += myPow(num[j], k);
			j--;
		}
		if(ans == i)
			num[c++] = ans;
	}
}

int fun(int a, int b)
{
	if(a>b)
	{
		int t = a; a = b; b = t;
	}
	int ans = 0;
	
	int nums[20] = {0, 153, 370, 371, 407, 1634, 8208, 9474, 54748, 92727, 93084, 548834, 1741725};

	int i = 0;	
	while(nums[i]<a)
		i++;
	int j = i;
	while(nums[j]<=b)
		j++;
	return j-i;
}
