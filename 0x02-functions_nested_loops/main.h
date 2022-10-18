#include <stdio.h>
#ifndef MAIN_H
#define MAIN_H


void print_alphabet(void)
{
	int n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar(n);
	}
	putchar('\n');
}

#endif
