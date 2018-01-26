#include <stdio.h>

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

int main()
{
	int m;
	scanf("%d", &m);
	while(m--)
	{
		int a, b;
		scanf("%d %d", &a, &b);

		printf("%d\n", fun(a, b));
	}
	
	system("pause");	                                                                                                                                                                                                                                                                                                             
    return 0;
}
