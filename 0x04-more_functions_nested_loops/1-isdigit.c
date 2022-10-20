#include "main.h"

/**
 * _isdigit - this fonction checks for digit from 0 through 9
 *
 * @c: the input of the function
 * Return: Returns 1 or 0
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
