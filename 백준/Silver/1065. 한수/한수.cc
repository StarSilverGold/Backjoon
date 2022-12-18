#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void)
{
    int n,out=0;
    scanf("%d", &n);
    while (n>=100)
    {
        if (n == 1000);
        else if ((n / 100 - (n / 10) % 10) == ((n / 10) % 10 - n % 10))
            out++;
        n--;
    }
    printf("%d", n+out);
    return 0;
}