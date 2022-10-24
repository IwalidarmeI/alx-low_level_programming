#include "main.h"

/**
 * _strlen - this function gives the lenght of string
 *
 * @s: the string
 * Return: return the size of string.
 */
int _strlen(char *s)
{
	int size;

	size = sizeof(*s) / sizeof(*s[0]);
	return (size);
}
