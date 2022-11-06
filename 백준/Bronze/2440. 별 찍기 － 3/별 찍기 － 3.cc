#include <stdio.h>

int main(void)

{

	int star;	scanf("%d",&star);

	for(int i=0;i<star;i++)

	{

		for(int j=0;j<star-i;j++)

		{

			printf("*");

		}

		printf("\n");

	}

	return 0;

}