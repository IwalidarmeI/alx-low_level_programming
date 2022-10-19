#include "main.h"
/**
 * print_sign - is finction print alphabet in lowercase
 *
 * @n: character input
 * Return: this will not return any value
 */

void times_table(void)
{
	for (a = '0' ; a <= '9' ; a++)
	{
		_putchar('0');
		if (a == '9')
		{
			_putchar('\n');
			break;
		}
		_putchar(',');
		_putchar(32);
	}
	for (b = '0' ; b <= '9' ; b++)
	{
		_putchar(b);
		if (b == '9')
		{
			_putchar('\n');
			break;
		}
		_putchar(',');
		_putchar(32);
	}
	for (c = '0' ; c <= '18' ; c = c + 2)
	{
		_putchar(c);
		if (c == '18')
		{
			_putchar('\n');
			break;
		}
		_putchar(',');
		_putchar(32);
	}
	for (b = '0' ; b <= '9' ; b++)
	{
		_putchar(b);
		if (b == '9')
		{
			_putchar('\n');
			break;
		}
		_putchar(',');
		_putchar(32);
	}
	for (b = '0' ; b <= '9' ; b++)
	{
		_putchar(b);
		if (b == '9')
		{
			_putchar('\n');
			break;
		}
		_putchar(',');
		_putchar(32);
	}
	for (b = '0' ; b <= '9' ; b++)
	{
		_putchar(b);
		if (b == '9')
		{
			_putchar('\n');
			break;
		}
		_putchar(',');
		_putchar(32);
	}

