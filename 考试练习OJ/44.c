#include <stdio.h>

// int fun1(long long n)
// {
// 	if(n<10)
// 		return n;
// 	return n%10 + fun1(n/10);
// }

// int fun2(long long n)
// {
// 	if(n<10)
// 		return n;
// 	return fun2(fun1(n));
// }

int main()
{
	long long n;
	while(scanf("%lld", &n) && n!=0)
	{
		// printf("%d\n", fun2(n));
		int ans = n % 9;
		if(ans==0) ans += 9;
		printf("%d\n", ans);
	}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
    return 0;
}
