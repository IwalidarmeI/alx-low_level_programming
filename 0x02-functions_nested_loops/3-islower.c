#include "main.h"
/**
 * print_alphabet_x10 - this finction print alphabet in lowercase
 *
 * Return: this will not return any value
 */
int _islower(int c)
{
	char n;

	for ( n = 'a' ; n <= 'z' ; n++)
	{
		if (c == n)
		{
			return (1);	
			break;
		}
		else
			continue;
	}
	if (n == 'z')
		return 0;
}
