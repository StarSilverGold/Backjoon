#include <stdio.h>

int main(void)

{
	int C[1000];	//고음 한도 차트

	int N, X, drink = 0;

	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &C[i]);
	}

	for (int i = 0;; i++)
	{
		if (C[i % N] < X) 
		{
			printf("%d", i%N +1);
			break;
		}
		else
			X++;
	}

	return 0;

}