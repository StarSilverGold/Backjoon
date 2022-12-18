#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main(void)
{
    int n,a=1,out=0;
    scanf("%d", &n);
    while (a <= n)
    {
        if (a < 100 || (a / 100 - (a / 10) % 10) == ((a / 10) % 10 - a % 10))
        {
            out++;
        }
        else if (a == 1000);
        a++;
    }
    printf("%d", out);
    return 0;
}