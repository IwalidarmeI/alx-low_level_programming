#include "main.h"
/**
 * print_sign - is finction print alphabet in lowercase
 *
 * @n: character input
 * Return: this will not return any value
 */
int print_sign(int n)
{
	if ( n > 0)
		return (1);
		printf("+\n");
	if ( n == 0)
		return (0);
		printf("0\n");
	if ( n < 0)
		return (-1);
		printf("-\n");
}
