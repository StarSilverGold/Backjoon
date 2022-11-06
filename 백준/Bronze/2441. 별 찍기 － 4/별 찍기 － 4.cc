#include <stdio.h>

int main(void)

{

	int star;	scanf("%d",&star);

	for(int i=0;i<star;i++)

	{

		int j=0;

		while(j<i)

		{

			printf(" ");

			j++;

		}

		while(j>=i&&j<star)

		{

			printf("*");

			j++;

		}

		printf("\n");

	}

	return 0;

}