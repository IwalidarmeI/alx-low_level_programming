#include "main.h"

/**
 * _strcpy - copy to the buffer
 *
 * @dest: the destination
 * @src: the source
 * Return: Returns the value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
