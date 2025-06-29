#include "stdio.h"
#include "stdlib.h"

void main()
{
	typedef struct leaf{
		double data[16];
	}leaf;
	
	typedef struct branch{
		leaf *leaves[16];
	}branch;
	
	branch *bravo;
	
	leaf *delta;
	
	*delta = *(bravo->leaves)[(150>>4)&15];
	
	double *d;
	
	d = &delta;
	
	d += (150&15)*sizeof(double);
	
	*d = 5;
	
	printf("size of leaf = %d\nsize of branch = %d\nd = %d at %u\nsize of bravo = %d\n",sizeof(leaf),sizeof(branch),(int)*d,d,sizeof(bravo));
	
	typedef struct leaf_prime{
		double data[16];
	}leaf_prime;
	
	typedef struct branch_prime{
		leaf_prime leaves[16];
	}branch_prime;
	
	leaf_prime lima_1;
	
	branch_prime bravo_1;
	
	char d_prime = 5;
	
	int index = 150;
	
	int index_1 = 166;
	
	bravo_1.leaves[(index>>4)&15] = lima_1;
	
	bravo_1.leaves[(index>>4)&15].data[index&15] = d_prime;
	
	double *amp_b_1;

	amp_b_1 = &bravo_1.leaves[(index>>4)&15].data[index&15];
	
	bravo_1.leaves[(index_1>>4)&15] = lima_1;
	
	bravo_1.leaves[(index_1>>4)&15].data[index_1&15] = d_prime + 1;
	
	double *amp_b_2;
	
	amp_b_2 = &bravo_1.leaves[(index_1>>4)&15].data[index_1&15];
	
	
	printf("*****\nsize of leaf: %d\nsize of branch: %d\nsize of bravo_1: %d\ndata_0 = %d at %u\ndata_1 = %d at %u\n",sizeof(leaf_prime),sizeof(branch_prime),sizeof(bravo_1),(int)*amp_b_1,amp_b_1,(int)*amp_b_2,amp_b_2);
	
}

/*
size of leaf = 128
size of branch = 128
d = 5 at 1334833928
size of bravo = 8
*****
size of leaf: 128
size of branch: 2048
size of bravo_1: 2048
data_0 = 5 at 1334835088
data_1 = 6 at 1334835216
*/
