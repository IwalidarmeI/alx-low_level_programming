#include "main.h"

/**
 * more_numbers - this fonction checks for digit
 *
 * Return: no returns for this function
 */
void more_numbers(void)
{
	int number;
	int num1;
	int num2;
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (number = 0 ; number <= 14 ; number++)
		{
			if (number < 9)
			{
				num1 = number;
			}
			else
			{
				num1 = number / 10;
				num2 = number % 10;
			}
			_putchar(num1 + '0');
			if (number > 9)
			{
				_putchar(num2 + '0');
			}
		}
		_putchar('\n');
	}
}
