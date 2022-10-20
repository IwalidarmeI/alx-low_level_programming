#include "main.h"

/**
 * _isupper - this fonction checks for digit from 0 through 9 without 2 and 4
 *
 * Return : no returns for this function
 */
void print_numbers(void)
{
	int number;

	for (number = '0' ; number <= '9' ; number++)
	{
		if (number == '2' || number == '4')
			continue;
		_putchar(number);
	}

	_putchar('\n');
}
