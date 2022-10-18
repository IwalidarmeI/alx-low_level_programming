#include "main.h"
/**
 * print_sign - is finction print alphabet in lowercase
 *
 * @n: character input
 * Return: this will not return any value
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
