#include "main.h"

/**
 * print_array- this function to print a string
 *
 * @a: this the array nam
 * @n: number of elements
 * Return: Returns nothing
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			if (i == n - 1)
				printf("%d\n", a[i]);
			else
				printf("%d, ", a[i]);
		}
	}
	else
		printf("\n");
}
