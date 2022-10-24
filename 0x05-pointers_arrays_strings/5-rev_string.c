#include "main.h"

/**
 * rev_string - this function to print a reverse string
 *
 * @s: this is the string
 * Return: Returns nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	char rs[i];

	while (s[i] != '\0')
	{
		rs[c] = s[i];
		i--;
		c++;
	}
}
