#include <stdio.h>

int main(void)

{

	int T,N,C;	double G;

	scanf("%d\n",&T);

	for(int i=0;i<T;i++)

	{

		int Cre=0;

		double GPA=0;

		scanf("%d\n",&N);

		for(int j=0;j<N;j++)

		{

			scanf("%d %lf\n",&C,&G);

			Cre += C;

			GPA += (C*G);

		}

		printf("%d %.1f\n",Cre,GPA/Cre);

	}

	return 0;

}