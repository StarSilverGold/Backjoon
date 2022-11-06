#include <stdio.h>

int main(void)

{

	int star;	scanf("%d",&star);

	for(int i=0;i<star;i++)

	{

		int j=0;

		while(j<star-i-1)

		{

			printf(" ");

			j++;

		}

		while(j>=(star-i-1)&&j<star)

		{

			printf("*");

			j++;

		}

		printf("\n");

	}

	return 0;

}