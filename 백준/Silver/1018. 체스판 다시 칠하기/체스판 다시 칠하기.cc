#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int compare(char* input, char* chess)
{
    int num = 0;
    for (int i = 0; i < 8; i++)
    {
        if (*(input + i) != *(chess + i))
            num++;
    }

    return num;
}

int main(void)
{
    char chess[50][50] = { 0, };
    char B[10] = "BWBWBWBW";
    char W[10] = "WBWBWBWB";
    int N, M, count=0,answar=64;
    //체스판 스캔
    scanf("%d%d", &N, &M);
    for (int i = 0; i < N; i++)
        scanf("%s", chess[i]);

    for (int i = 0; i < N - 7; i++)
        for (int j = 0; j < M - 7; j++)
        {
            for (int k = 0; k < 8; k +=2)
            {
                count+= compare((*(chess + i + k)+j), B);
//                printf("%d count %d ",k, count);
                count+= compare((*(chess + i + k + 1)+j), W);
//                printf("count2 %d\n", count);
            }
            if (count > 32)
                count = 64 - count;
            if (answar > count)
            {
                answar = count;
 //               printf("change %d\n ", answar);
            }
            count = 0;
        }
    printf("%d", answar);

    return 0;
}

