#include "main.h"

/**
 * _isupper - this fonction checks for digit from 0 through 9
 *
 * Return : no returns for this function
 */
void print_numbers(void)
{
	int number;

	for (number = '0' ; number <= '9' ; number++)
		_putchar(number);

	_putchar('\n');
}
