// comparing negation by means of two's complement, insofar as the sign-bit of a signed four byte integer is 2^31

#include "stdio.h"
#include "stdlib.h"

void main()
{
	int alpha = -15;
	
	unsigned int negative_0 = 2147483648;
	unsigned int negative_1 = 4294967295;
	
	printf("alpha: %d\n", alpha);
	printf("n_0: %d\n", negative_0 - (alpha ^ negative_0));
	printf("n_1: %d\n", negative_1 ^ (alpha - 1));
}