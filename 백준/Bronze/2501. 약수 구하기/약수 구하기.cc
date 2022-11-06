#include <stdio.h>

int main(void)
{
	int N,K,j=0;
    int M[10000]={0};

    scanf("%d %d",&N,&K);
	for(int i=0;i<N;i++)
	{
		if(N%(i+1)==0)
		{
			M[j++]=i+1;
		}
	}
	printf("%d",M[K-1]);
    
	return 0;
}