#include "main.h"

/**
 * print_triangle - is function create squares
 *
 * @size: this the size of the triangle
 * Return: Returns nothing
 */
void print_triangle(int size)
{
	int dimens1;
	int dimens2;

	if (size > 0)
	{
		for (dimens2 = 0 ; dimens2 <= size - 1 ; dimens2++)
		{
			for (dimens1 = 1 ; dimens1 < (size - dimens2) ; dimens1++)
			{
				_putchar(' ');
			}
			for (dimens1 = (size - dimens2) ; dimens1 <= size ; dimens1++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
