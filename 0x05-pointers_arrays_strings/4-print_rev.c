#include "main.h"

/**
 * print_rev - this function to print a string
 *
 * @s: this is the string
 * Return: Returns nothing
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
