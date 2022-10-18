#include "main.h"
/**
 * _isalpha - this finction print alphabet in lowercase
 *
 * @c: character input
 * Return: this will not return any value
 */
int _isalpha(int c);
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
