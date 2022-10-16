#include <stdio.h>

/**
 * main - this is main function
 * description - this program display alphabet in a lowercase
 * Return: returns value 0
 */
int main(void)
{
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		putchar(n);
	}

	putchar('\n');
	return (0);
}
