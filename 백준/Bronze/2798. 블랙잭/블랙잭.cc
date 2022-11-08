#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int N, M, answar = 0;
    int array[200] = { 0, };
    scanf("%d %d", &N, &M);
    for (int i = 0; i < N; i++)
        scanf("%d", &array[i]);
    for (int i = 0; i < N - 2; i++)
        for (int j = i + 1; j < N - 1; j++)
            for (int k = j + 1; k < N; k++)
                if ((array[i] + array[j] + array[k] > answar) && (array[i] + array[j] + array[k] <= M))
                {
                    answar = array[i] + array[j] + array[k];
                }
    printf("%d", answar);
    return 0;
}