#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>

int findChar(char* S, char A,int len)
{
    int number = 0;
    for (int i = 0; i < len; i++)
    {
        if (number == len / 5)
            break;
        if (S[i] == A)
            number++;
    }
    return number;
}
int findMin(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}

int main(void)
{
    int N,min;
    char S[100001];
    scanf("%d\n", &N);
    fgets(S,N+1,stdin);
    min=findChar(S, 'H', N);
    min=findMin(min, findChar(S, 'I', N));
    min=findMin(min, findChar(S, 'A', N));
    min=findMin(min, findChar(S, 'R', N));
    min=findMin(min, findChar(S, 'C', N));
    printf("%d", min);
        return 0;
}