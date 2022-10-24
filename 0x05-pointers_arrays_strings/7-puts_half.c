#include "main.h"

/**
 * puts_half - this function to print a string
 *
 * @str: this is the string
 * Return: Returns nothing
 */
void puts_half(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
		i = i / 2;
	else
		i = (i / 2) + 1;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
