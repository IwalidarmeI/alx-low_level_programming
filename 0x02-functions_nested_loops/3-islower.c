#include "main.h"
/**
 * _islower - this finction print alphabet in lowercase
 *
 * @c: character input
 * Return: this will not return any value
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
