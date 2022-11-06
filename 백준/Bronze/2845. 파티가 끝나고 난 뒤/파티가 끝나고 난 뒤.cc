#include <stdio.h>
int main(void)
{
	int L,P,N;
	scanf("%d %d", &L,&P);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &N);
		printf("%d ", N - L * P);
	}
	return 0;
}