#include "main.h"

/**
 * puts2 - this function to print a string
 *
 * @str: this is the string
 * Return: Returns nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
