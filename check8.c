// selection sort

#include "stdio.h"
#include "stdlib.h"


void main ()
{
	const int N = 5;
	
	int alpha[N] = {5,1,3,2,4};
	
	int index;
	int iota;
	
	for (int i = 0; i < N-1; i++)
	{	
		index = i;

		for (int i_1 = i+1; i_1 < N; i_1++)
		{
			if (alpha[i] < alpha[i_1] && alpha[i_1] > alpha[index])
			{
				index = i_1;
			}
		}
		
		iota = alpha[i];
		
		alpha[i] = alpha[index];
		
		alpha[index] = iota;
	}
	
	printf("alpha: ");
	
	for (int i = 0; i < N; i++)
	{
		printf("%d",alpha[i]);
		
		if (i < (N-1)){printf(", ");}
	}
	
	printf("\n");
}