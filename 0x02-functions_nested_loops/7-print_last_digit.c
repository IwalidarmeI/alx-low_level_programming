#include "main.h"
/**
 * print_last_digit - this finction print alphabet in lowercase
 *
 * @num: character input
 * Return: this will not return any value
 */
int print_last_digit(int num)
{
	unsigned int lastDigit = num % 10;
	char n = lastDigit + '0';

	_putchar(n);
	return (lastDigit);
}
