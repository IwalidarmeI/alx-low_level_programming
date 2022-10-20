#include "main.h"

/**
 * print_square - This function create squares
 *
 * Return: Returns nothing
 */
void print_square(int size)
{
	int dimens1;
	int dimens2;

	if (size > 0)
	{
		for (dimens2 = 1 ; dimens2 <= size ; dimens2++)
		{
			for (dimens1 = 1 ; dimens1 <= size ; dimens1++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
