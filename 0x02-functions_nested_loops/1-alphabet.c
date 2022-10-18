#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - this finction print alphabet in lowercase
 *
 * Return: this will not return any value
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return;
}
