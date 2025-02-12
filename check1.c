//synchronised handles in windows

#include "stdio.h"
#include "windows.h"
#include "process.h"

int x_0 = 0;
int x_1 = 0;
int x_2 = 0;

int wait_0 = 0;
int wait_1 = 0;
int wait_2 = 0;
	

/*
void thread_0(void *);
void thread_1(void *);
void thread_2(void *);
*/

void thread_0(void * blank)
{
	while (x_0 < 25)
	{
		x_0++;
	
		printf("0:\t%d\n",x_0);
	}
	
	wait_0 = 1;
	
	_endthread();
}

void thread_1(void * blank)
{
	while (x_1 < 25)
	{
		x_1++;
		
		printf("1:\t%d\n",x_1);
	}
	
	wait_1 = 1;
	
	_endthread();
}

void thread_2(void * blank)
{
	while (x_2 < 25)
	{
		x_2++;
		
		printf("2:\t%d\n",x_2);
	}
	
	wait_2 = 1;
	
	_endthread();
}


void main(int argc, char **argv)
{
	printf("#####\n");
	
	HANDLE hotel_0 = (HANDLE)_beginthread(thread_0,0,NULL);
	HANDLE hotel_1 = (HANDLE)_beginthread(thread_1,0,NULL);
	HANDLE hotel_2 = (HANDLE)_beginthread(thread_2,0,NULL);
	
	
	WaitForSingleObject(hotel_0,INFINITE);
	WaitForSingleObject(hotel_1,INFINITE);
	WaitForSingleObject(hotel_2,INFINITE);
	
	
	if (x_0 >= 24)
	{
		printf("check ZERO\n");
	}
	
	if (x_1 >= 24)
	{
		printf("check ONE\n");
	}
	
	if (x_2 >= 24)
	{
		printf("check TWO\n");
	}
}