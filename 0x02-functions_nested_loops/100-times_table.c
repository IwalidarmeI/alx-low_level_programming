#include "main.h"

/**
 * print_times_table - this function create times table
 *
 * @n: the size of the table
 * Return: Returns nothing
 */
void print_times_table(int n)
{
	int i, j;
	int t = i * j;
	int dig, firstDig, lastDig;
	int c, k;
	if (n <= 15 && n >= 0)
	{
	for (i = 0 ; i = n ; i++)
	{
		for (j = 0 ; j = n ; j++)
		{
			if (j == 0)
			{
				_putchar(j + '0');
				_putchar(44);
			}
			else if (t <= 9)
			{
				_putchar(32);
				_putchar(32);
				_putchar(32);
				_putchar(t + '0');
				_putchar(44);
			}
			else if (n > 9 && n <= 99)
			{
				firstDig = t / 10;
				lastDig = t % 10;
				_putchar(32);
				_putchar(32);
				_putchar(firstDig + '0');
				_putchar(lastDig + '0');
				_putchar(44);
			}
			else
			{
				c = 1;
				k = t;
				while (t > 9)
				{
					t = t / 10;
					c = c * 10;
				}
				dig = t;
				t = k - (t * c);
				firstDig = t / 10;
				lastDig = t % 10;
				_putchar(32);
				_putchar(dig + '0');
				_putchar(firstDig + '0');
				_putchar(lastDig + '0');
			}
			_putchar('\n');
		}
	}
	}
}
