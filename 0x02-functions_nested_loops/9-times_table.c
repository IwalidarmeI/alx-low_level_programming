#include "main.h"
/**
 * print_sign - is finction print alphabet in lowercase
 *
 * @n: character input
 * Return: this will not return any value
 */

void times_table(void)
{
	int a;
	int b = 9;
	int c;
	int d = 0;
	int n;
	for (n = 0 ; n <= 9 ; n++)
	{
		printf("0");
		if (n == 9)
		{
			printf('\n');
			break;
		}
		printf(", ");
	}
	for (c = 1 ; c <= 9 ; c++)
	{
		d++;
		for (a = 0 ; a <= b * c ; a = a + d)
		{
			printf("%d", a);
			if (a == b * c)
			{
				printf('\n');
				break;
			}
			printf(", ");
		}
	}
}
