#include "main.h"
/**
 * print_alphabet - this finction print alphabet in lowercase
 *
 * Return: this will not return any value
 */
void print_alphabet_x10(void)
{
	char n;
	int i;

	for (i = 1 ; i <=10 ; i++)
	{
		for (n = 'a' ; n <= 'z' ; n++)
		{
			_putchar(n);
		}
	_putchar('\n');
	}
}
