// arithemtic using inline assembly with input and output to var

#include "stdio.h"

void main()
{
	int var = 2;
	
	_asm(
	"mov $3,%%eax\n"
	"add %%ebx,%%eax\n"
	:"=a"(var)
	:"b"(var)
	);
	
	printf("%d\n",var);
}