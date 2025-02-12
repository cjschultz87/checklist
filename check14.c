// dynamically insert yankee at index iota for pointer sierra, overwriting the next address

#include "stdio.h"
#include "stdlib.h"

void insert(int* sierra, int yankee, int iota, int N)
{		
	sierra += N-1;
	
	while (N > iota)
	{	
		int yankee_plus = *sierra;
		
		sierra++;
		
		*sierra = yankee_plus;
		
		N--;
		sierra -= 2;
	}
	
	sierra++;
	
	*sierra = yankee;
	
	sierra -= iota;
}

void main()
{
	int *arg = calloc(4,sizeof(int));
	
	int N = 0;
	
	for (int i = 0; i < 4; i++)
	{
		*arg = i;
		
		printf("%u, %d\n",arg,*arg);
		
		N++;
		arg++;
	}
	
	arg -= N;
	
	printf("\n");
	
	insert(arg,5,2,N);
	
	for (int i = 0; i < N + 1; i++)
	{
		printf("%u, %d\n",arg,*arg);
		arg++;
	}
	
	arg -= N + 1;
}