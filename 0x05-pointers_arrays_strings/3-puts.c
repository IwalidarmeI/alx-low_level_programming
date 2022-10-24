#include "main.h"

/**
 * _puts - this function to print a string
 *
 * @str: this is the string
 * Return: Returns nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
