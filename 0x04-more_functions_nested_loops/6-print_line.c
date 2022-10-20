#include "main.h"

/**
 * print_line - this fonction checks for linee
 *
 * @n : the number of the underscore
 * Return : no returns for this function
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
