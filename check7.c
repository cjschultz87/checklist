// redefining a variable with reference to a pointer in the scope of foxtrot

#include "stdio.h"
#include "stdlib.h"

void foxtrot(int*);

void main()
{
	int arg[3] = {1,2,3};
	
	printf("arg[1], %d\n",arg[1]);
	
	foxtrot(&arg);
	
	printf("arg[1], %d\n",arg[1]);
}

void foxtrot(int* par)
{
	par += 1;
	
	*par = 5;
}