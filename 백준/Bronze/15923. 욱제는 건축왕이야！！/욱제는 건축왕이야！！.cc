#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

int main(void)
{
    int N,xmin,xmax,ymin,ymax,x,y;
    scanf("%d", &N);
    scanf("%d %d", &xmin, &ymin);
    xmax = xmin;
    ymax = ymin;
    N -= 1;
    while (N--)
    {
        scanf("%d %d", &x, &y);
        if (xmin > x)
            xmin = x;
        if (xmax < x)
            xmax = x;
        if (ymin > y)
            ymin = y;
        if (ymax < y)
            ymax = y;
    }
    N = (xmax - xmin + ymax - ymin) * 2;
        printf("%d", N);
        return 0;
}