#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include <string.h>

int main(void)
{
	char out[50];
	char in[50];
	int N,length;

	scanf("%d",&N);
	scanf("%s", out);
	length = (int)strlen(out);
	N--;

	while (N--)
	{
		scanf("%s", in);
		for (int i = 0; i < length; i++)
		{
			if (in[i] != out[i])
				out[i] = '?';
		}
	}
	printf("%s", out);
	return 0;
}