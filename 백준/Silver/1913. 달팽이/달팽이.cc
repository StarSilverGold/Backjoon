#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int N, find, num, x = 0, y = 0,sign=1;
	int a,b,i,j;
	int** arr;

	scanf("%d", &N);
	scanf("%d", &find);

	arr = (int**)malloc(sizeof(int*) * N);
	for (i = 0; i < N; i++)
	{
		arr[i] = (int*)malloc(sizeof(int) * N);
	}

	num = N * N;

	for (i = 0; i < N; i++)
	{
		if (num == find)
		{
			a = x;
			b = y;
		}
		arr[x][y] = num--;
		x += sign;
	}
	x-=1;
	for (i = N-1;i>0;--i)
	{
		for (j= 0; j < i; ++j)
		{
			y += sign;
			if (num == find)
			{
				a = x;
				b = y;
			}

			arr[x][y] = num--;
		}
		sign *= -1;
		for (j = 0; j < i; ++j)
		{
			x += sign;
			if (num == find)
			{
				a = x;
				b = y;
			}
			arr[x][y] = num--;
		}
	}
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("%d %d", a+1, b+1);

	for (i = 0; i < N; i++)
		free(arr[i]);
	free(arr);
	return 0;
}