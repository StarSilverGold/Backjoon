#include <stdio.h>

int main()

{

	char H[100];	const int Number = 9;

	//사람의 수

	

	int a,b,temp,now,sum=0;

	

	for(int i=0;i<Number;i++)

	{

		now = i;

		scanf("%d",&H[i]);

		sum+=H[i];

		

		//삽입정렬

		for(int front=i-1;front>=0;front--)

		{

			while(H[now]<H[front] && front!= -1)

			{

				temp=H[now];

				H[now]=H[front];

				H[front]=temp;

				now--;

			}

		}

	}

	

	sum-=100;

	for(int i=0;i<(Number-1);i++)

	{

		for(int j=(i+1);j<Number;j++)

		{

			if(H[i]+H[j]==sum)

			{

				a=i;

				b=j;

				

				//찾으면 루프 끝

				i=Number-1;

			}

		}

	}

	

	for(int i=0;i<Number;i++)

	{

		if(i!=a && i!=b)

		printf("%d\n",H[i]);

	}

	

	return 0;

}