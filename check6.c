// defining a pointer as a static array

#include "stdio.h"
#include "stdlib.h"

void main()
{
	char alpha[3] = {'a','b','c'};
	
	char *alpha_prime = alpha;
	
	for (int i = 0; i < 3; i++)
	{
		printf("%c",alpha_prime[i]);
		
		if (i < 2) printf(", ");
	}
	
	printf("\n");
}