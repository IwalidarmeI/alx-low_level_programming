#include "main.h"
/**
 * print_last_digit - this finction print alphabet in lowercase
 *
 * @num: character input
 * Return: this will not return any value
 */
int print_last_digit(int num)
{
	int lastDigit;

	if (num < 0)
	{
		lastDigit = -1 * (num % 10);
		_putchar(lastDigit + '0');
	}
	else
	{
		lastDigit = num % 10;
		_putchar(lastDigit + '0');
	}
	return (lastDigit);
}
