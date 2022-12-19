#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void)
{
    int T,n;
    scanf("%d", &T);
    int fib[50];

    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < 41; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    while (T--)
    {
        scanf("%d", &n);
        n? printf("%d %d\n", fib[n - 1], fib[n]) :printf("1 0\n");
    }
    return 0;
}