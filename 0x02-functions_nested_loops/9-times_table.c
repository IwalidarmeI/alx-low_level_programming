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
	int d;

	for (c = 1 ; c <= 9 ; c++)
	{
		d++;
		for (a = '0' ; a <= b * c ; a = a + d)
		{
			_putchar(a);
			if (a == b * c)
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(32);
		}
	}
}
