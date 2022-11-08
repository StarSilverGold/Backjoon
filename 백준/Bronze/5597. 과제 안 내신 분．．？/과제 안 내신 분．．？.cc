#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void)
{
    char number[100] = {0, };
    int input;

    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &input);
        number[input - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
        if (!number[i])
            printf("%d\n", i + 1);

    return 0;
}