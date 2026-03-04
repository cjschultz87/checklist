#include "windows.h"
#include "stdio.h"
#include "stdlib.h"

void assignData(BYTE a, int index, void* delta)
{	
	printf("address delta = %u\n",delta);

	BYTE* alpha_prime = calloc(4,sizeof(BYTE));
	
	alpha_prime = delta;
	
	alpha_prime += index;
	
	*alpha_prime = a;
}

void main()
{
	int alphaL = 4;
	
	LPBYTE alpha = calloc(alphaL,sizeof(BYTE));
	
	printf("alpha:\n");
	
	BYTE byteCount = 0;
	
	for (; byteCount < alphaL; byteCount++)
	{
		*alpha = (BYTE)byteCount;
		
		printf("val = %u, index = %d\n",*alpha, byteCount);
		
		alpha++;
	}
	
	alpha -= byteCount;
	
	printf("\nassignData(1,3,alpha):\n");
	
	printf("address &alpha = %u\n",alpha);
	
	assignData((BYTE)1,3,alpha);
	
	for (int i = 0; i < alphaL; i++)
	{
		printf("val = %u, index = %d\n", *alpha, i);
		
		alpha++;
	}
	
	alpha -= byteCount;
}