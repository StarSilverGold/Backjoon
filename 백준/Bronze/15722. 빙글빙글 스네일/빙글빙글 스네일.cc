#include<stdio.h>

int main(void)
{
    int N, x, y,sign, i= 0;
    scanf("%d", &N);
    while (i*(i + 1) < N)
        i++;

    sign = (i % 2 == 0) ? -1 : 1;

    if (i * i < N) {
        x = (N - i * i)*sign + ((sign<0) ? (i / 2) : -(i / 2));
        y = (i % 2 == 0) ? -(i+1) / 2 : (i+1) / 2;
    }
    else
    {
        x = (i % 2 == 0) ? (i / 2) : -(i / 2);
        y = (N - i*(i - 1))*sign + ((i % 2 == 0) ? i / 2 : -i / 2);
    }
    printf("%d %d", x, y);
}