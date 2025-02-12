// right shifting with arithmetic using static values

#include "stdio.h"
#include "stdlib.h"

unsigned int p(unsigned int, unsigned int);

void main()
{
	unsigned int alpha = 0xffffffff;
	
	printf("alpha = %u\n",alpha);
	
	printf("alpha right shift 3 = %u\n",alpha >> 3);
	
	printf("alpha - (2^31 + 2^30 + 2^29) = %u\n",alpha - (p(2,31)+p(2,30)+p(2,29)));
}

unsigned int p(unsigned int base, unsigned int exp)
{
	unsigned int power = 1;
	
	for (int i = 0; i < exp; i++)
	{
		power *= base;
	}
	
	return power;
}