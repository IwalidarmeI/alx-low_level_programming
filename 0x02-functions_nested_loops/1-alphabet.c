#include "main.h"
/**
 * print_alphabet - this finction print alphabet in lowercase
 *
 * Return: this will not return any value
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
