#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(char* a, char* b,int i)
{
    if (i < 0)
    {
        return 'D';
    }
    if (a[i] == b[i])
    {
        return compare(a, b,i-1);
    }
    return a[i] > b[i] ? 'A' : 'B';
}


int main(void)
{
    int n,ain,bin,num;
    char a[4]={0,};
    char b[4]={0,};
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &ain);
        while (ain--)
        {
            scanf("%d", &num);
            a[num-1]++;
        }
        scanf("%d", &bin);
        while (bin--)
        {
            scanf("%d", &num);
            b[num-1]++;
        }
        printf("%C\n", compare(a, b,3));
        memset(a, 0, 4*sizeof(a[0]));
        memset(b, 0, 4*sizeof(b[0]));

    }
    return 0;
}