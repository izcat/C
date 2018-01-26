#include <stdio.h>

int fun1(int n)
{  // 返回每位数字之和
	if(n<10)
		return n;
	return n%10 + fun1(n/10);
}

int fun2(int n)
{  // 返回每位数字之和 的 每位数字之和 直到 为一位数
	if(n<10)
		return n;
	return fun2(n%10 + fun1(n/10));
}

int main()
{
	int n, num[10] = {0};
	for(n=1;n<=999999;n++)
		num[fun2(n)]++;

	for(n=0;n<=9;n++)
		printf("%d:%d times\n", n, num[n]);

	return 0;
}
