// inserting yankee at index iota for pointer sierra, redefining the addresses of the pointer to avoid an overwrite

#include "stdio.h"
#include "stdlib.h"

int* insert(int*,int,int,int);

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
	
	arg = insert(arg,5,2,N);
	
	for (int i = 0; i < N + 1; i++)
	{
		printf("%u, %d\n", arg, *arg);
		arg++;
	}
	
	arg -= N + 1;
}

int* insert(int* sierra, int yankee, int iota, int N)
{
	int *sierra_prime = calloc(N+1,sizeof(int));
	
	for (int i = 0; i < iota; i++)
	{
		*sierra_prime = *sierra;
		
		sierra_prime++;
		sierra++;
	}
	
	*sierra_prime = yankee;
	sierra_prime++;
	
	for (int i = iota; i < N; i++)
	{
		*sierra_prime = *sierra;
		
		sierra_prime++;
		sierra++;
	}
	
	sierra -= N;
	sierra_prime -= N+1;
	
	return sierra_prime;
}