#include "main.h"
/**
 * print_sign - is finction print alphabet in lowercase
 *
 * @n: character input
 * Return: this will not return any value
 */

void times_table(void)
{
	int a;
	int b = 9;
	int c;

	for (c = 1 ; c <= 9 ; c++)
	{
		for (a = '0' ; a <= b * c ; a++)
		{
			/*if (a ==*/
			_putchar('0');
			if (a == '9')
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(32);
		}
	}
}
