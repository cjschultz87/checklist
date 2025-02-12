// right shifting with arithmetic in the scope of a function using dynamic values

#include "stdio.h"
#include "stdlib.h"

unsigned int rshift(unsigned int, unsigned int);

void main()
{
	unsigned int alpha = 0xfffffff7;
	
	while (1>0)
	{
		printf("alpha = %x\n", alpha);
		printf("alpha >> 3 = %x\n",alpha>>3);
		printf("rshift(alpha,3) = %x\n",rshift(alpha,3));
		
		alpha++;
		
		if (alpha == 0xffffffff)
		{
			break;
		}
		
		printf("\n");
	}
}

unsigned int rshift(unsigned int val, unsigned int N)
{
	for (int i = 0; i < N; i++)
	{
		if (val % 2 == 0)
		{
			val -= val/2;
		}
		else
		{
			val -= (val/2)+1;
		}
	}
	
	return val;
}