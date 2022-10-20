#include "main.h"

/**
 * print_diagonal - this fonction checks for linee
 *
 * @n : the number of the underscore
 * Return : no returns for this function
 */
void print_diagonal(int n)
{
	int i;
	int sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1 ; i <= n ; i++)
		{
			for (sp = 0 ; sp <= i - 1 ; sp++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
