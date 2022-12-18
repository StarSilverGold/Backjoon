#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int change(char A[], char a, char b)
{
    for (int i = 0; A[i]; i++)
    {
        if (A[i] == a)
            A[i] = b;
    }
    return 0;
}

int main(void)
{
    char A[8];
    char B[8];
    int a, b;

    scanf("%s %s", A, B);
    change(A, '6', '5');
    change(B, '6', '5');
    a = atoi(A);
    b = atoi(B);
    printf("%d ", a+b);
    change(A, '5', '6');
    change(B, '5', '6');
    a = atoi(A);
    b = atoi(B);
    printf("%d", a + b);
    return 0;
}