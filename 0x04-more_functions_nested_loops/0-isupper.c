#include "main.h"

/**
 * _isupper - this fonction checks for uppercase characters
 * @c: the input of the function
 * Return : returns 1 or 0
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	else
		return (0);
}
