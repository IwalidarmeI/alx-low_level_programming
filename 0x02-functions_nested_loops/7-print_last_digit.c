#include "main.h"
/**
 * print_last_digit - this finction print alphabet in lowercase
 *
 * @num: character input
 * Return: this will not return any value
 */
int print_last_digit(int num)
{
	int lastDigit = num % 10;
	_putchar(lastDigit);
	return (lastDigit);
}
