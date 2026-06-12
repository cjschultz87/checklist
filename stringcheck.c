#include "stdio.h"
#include "stdlib.h"

#include "windows.h"

typedef char * str;

BYTE power(BYTE base, BYTE n)
{
	BYTE rVal = 1;
	
	for (int i = 0; i < n; i++)
	{
		rVal *= base;
	}
	
	return rVal;
}

BYTE maxI(str sierra)
{
	BYTE N = 0;
	
	for (int i = 0; 1 > 0; i++)
	{
		
		if (sierra[i] == NULL)
		{
			N = i;
			
			break;
		}
	}
	
	return N;
}

void strAssign(void* strIn, void* strOut, BYTE startIn, BYTE startOut, BYTE L)
{
	BYTE* input;
	BYTE* output;
	
	input = strIn + startIn;
	output = strOut + startOut;
	
	for (int i = 0; i < L; i++)
	{
		*output = *input;
		
		input++;
		output++;
	}
}

void main()
{
	str sierra0 = "2";
	
	BYTE N = maxI(sierra0);
	
	for (int i = 0; 1 > 0; i++)
	{
		if (sierra0[i] == NULL)
		{
			N = i;
			
			break;
		}
	}
	
	printf("%u\n",N);
	
	N = 0;
	
	for (int i = 0; i < maxI(sierra0); i++)
	{
		N += (sierra0[i] - '0')
		* power(10,(maxI(sierra0) - (i + 1)));
	}
	
	printf("%u strings\n",N);
	
	str sierra1 = "hello";
	str sierra2 = "world";
	
	str SIERRA = calloc(
		maxI(sierra0)
		+ maxI(sierra1)
		+ maxI(sierra2)
		+ 3,
		sizeof(char)
	);
	
	strAssign(
		sierra0,
		SIERRA,
		0,
		0,
		maxI(sierra0) + 1
	);
	
	strAssign(
		sierra1,
		SIERRA,
		0,
		maxI(sierra0) + 1
		+ 1,
		maxI(sierra1) + 1
	);
	
	strAssign(
		sierra2,
		SIERRA,
		0,
		maxI(sierra0) + 1
		+ maxI(sierra1) + 1
		+ 1,
		maxI(sierra2) + 1
	);
	
	printf(
		"superString_0 = %s\n",
		SIERRA
	);
	
	printf(
		"superString_1 = %s\n",
		SIERRA + maxI(sierra0) + 2
	);
}