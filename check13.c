// memory copy incremented by one, from sierra to sierra_prime

#include "stdio.h"
#include "stdlib.h"

void foxtrot(char* sierra, char* sierra_prime)
{	
	int N = 0;

	while (*sierra != NULL)
	{
		printf("%d\t",sierra);
		
		printf("%c\n",*sierra);
		
		*sierra_prime = *sierra + 1;
		
		N++;
		sierra_prime++;
		sierra++;
	}
	
	sierra_prime -= N;
	sierra -= N;
}

void main()
{
	char* sierra = "123";
	
	int N = 0;
	
	while (*sierra != NULL)
	{
		N++;
		sierra++;
	}
	
	sierra -= N;
	
	char* sierra_prime = calloc(N,sizeof(char));
	
	foxtrot(sierra,sierra_prime);
	
	printf("#####\n");
	
	while (*sierra_prime != NULL)
	{
		printf("%d\t",sierra_prime);
		
		printf("%c\n",*sierra_prime);
		
		sierra_prime++;
	}
	
	printf("\n");
}