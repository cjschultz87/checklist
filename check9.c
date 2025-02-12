// defining a void pointer using addresses of a string as well as returning values from foxtrot using void pointers as parameters

#include "stdio.h"
#include "stdlib.h"


void* foxtrot(void* a, void* b, int N)
{
	N *= sizeof(int);

	for (int i = 0; i < N; i++)
	{
		b = a;
		
		b++;
		a++;
	}
	
	return b - N;
}

void main()
{
	char *alpha = "1234";
	
	void* a;
	
	a = alpha + 2;
	
	void* b = a;
	
	for (int i = 0; ((char*)b)[i] != NULL; i++)
	{
		printf("%c",((char*)b)[i]);
	}
	
	printf("\n");
	
	int bravo[5] = {1,2,3,4,5};
	
	a = foxtrot(&bravo,&a,5);
	
	printf("foxtrot(bravo,a,5)[4] = %d\n",((int*)foxtrot(bravo,a,5))[4]);
	printf("a[4] = %d\n",((int*)a)[4]);
}