// comparing addresses of the parameter with variables defined within the scope of foxtrot

#include "stdio.h"
#include "stdlib.h"

void foxtrot(int* par)
{
	int* iota = (int *)par;
	printf("iota, %u\n", &iota);
	printf("par, %u\n", &par);
	*par = 5;
}

void main()
{
	int arg;
	
	foxtrot(&arg);
	
	printf("par, %u\n", &arg);
}