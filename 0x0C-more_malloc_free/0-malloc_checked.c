#include "main.h"

/**
* *malloc_checked - function to allocate the memory
*@b: an int
*Return: Returns a pointer
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = (int *)malloc(b);
	if (p == NULL)
		exit(98);

	return (*p);
}
