#include "main.h"

/**
 * swap_int - this funwction swap between two integers
 *
 * @a: this is first number
 * @b: this is the second number
 * Return: Returns nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
