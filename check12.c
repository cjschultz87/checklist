// converting string characters to upper case, referring to the zeroth characters of the alphabet as the minimum encoding values

#include "stdio.h"
#include "stdlib.h"

typedef char *str;

void strPrint(str sierra)
{
	while (*sierra != NULL)
	{	
		printf("%c",*sierra);
		
		sierra++;
	}
	
	printf("\n");
}

str sierraUp(str sierra)
{
	int november = 0;
	
	for (; sierra[november] != NULL; november++)
	{}

	char *sierra_prime = calloc(november,sizeof(char));

	for (int i = 0; i < november; i++)
	{
		if (('A' < 'a' && sierra[i] >= 'a') || ('A' > 'a' && sierra[i] < 'A'))
		{
			sierra_prime[i] = sierra[i] + ('A' - 'a');
		}
		else
		{
			sierra_prime[i] = sierra[i];
		}
	}
	
	return sierra_prime;
}

void main()
{
	str s = "uPper";

	strPrint(s);
	
	strPrint(sierraUp(s));
}