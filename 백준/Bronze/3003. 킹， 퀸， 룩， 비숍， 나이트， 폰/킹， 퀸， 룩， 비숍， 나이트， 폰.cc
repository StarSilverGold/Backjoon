#include <stdio.h>

int main(void)
    {
    int K,Q,L,B,Kn,P;
   scanf("%d %d %d %d %d %d", &K,&Q,&L,&B,&Kn,&P);
   printf("%d %d %d %d %d %d", 1-K,1-Q,2-L,2-B,2-Kn,8-P);
   return 0;
}