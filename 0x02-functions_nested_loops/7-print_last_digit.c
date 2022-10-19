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
		char n = lastDigit + '0';
		_putchar(n);
	}
	else
	{
		lastDigit = num % 10;
		char n = lastDigit + '0';
		_putchar(n);
	}
	return (lastDigit);
}
