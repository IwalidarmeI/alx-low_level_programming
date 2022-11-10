#include "main.h"

/**
* *malloc_checked - function to allocate the memory
*@b: an int
*Return: Returns a pointer
*/

void *malloc_checked(unsigned int b)
{
	int *p;
	
	p = (int*)malloc(b);
	return(*p);
}	
