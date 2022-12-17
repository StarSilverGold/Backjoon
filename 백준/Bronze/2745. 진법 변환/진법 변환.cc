#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

int main(void)
{
    char N[1000000];
    int B,deci=0;
    scanf("%s %d", N, &B);
    int len = strlen(N);
    for(int i=0;i<len;i++)
    {
        deci *= B;
        if (N[i]<'A')
            deci += (N[i]-'0');
        else
            deci += (N[i] - 'A' + 10);
    }
    printf("%d", deci);

        return 0;
}