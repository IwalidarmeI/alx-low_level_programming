#include "main.h"

/**
 * _strlen - this function gives the lenght of string
 *
 * @s: the string
 * Return: return the size of string.
 */
int _strlen(char *s)
{
	int size = 0;

	while (*(s + size) != '\0')
		size++
	return (size);
}
