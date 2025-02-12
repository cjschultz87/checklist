// multidimensional pointer reference

#include "stdio.h"
#include "strings.h"

void main(int argc, str *argv)
{	
	for (int i = 0; i < strLength(argv[1]); i++)
	{	
		printf("%d\n",argv[1][i]);
	}
}