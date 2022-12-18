#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int cal(int a, int b)
{
    while (b % 3)
    {
        if (a <= 0) {
            return -1;
        }
        a--;
        b += 5;
    }
    return a + b / 3;
}

int main(void)
{
    int n,a,b;
    scanf("%d", &n);
    printf("%d",cal(n/5,n%5));
    return 0;
}