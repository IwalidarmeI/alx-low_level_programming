#include "main.h"

/**
 * print_to_98 - this function print to 98
 *
 * @n: the number from the input
 * Return: Returns nothing
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
				printf("%d, ", i);
		}
	}
	else
	{
		for (i = n ; i <= 98 ; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			}
			else
				printf("%d, ", i);
		}
	}
	
}
