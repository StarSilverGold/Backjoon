#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
long long cal(long long a,long long b)
{
    return (a+b)*(a-b);
}
int main(void)
{
	long long a,b;
	scanf("%lld %lld", &a,&b);
    printf("%lld",cal(a,b));

	return 0;
}