#include <stdio.h>

/**
 * main - this is main function
 * description - this program display alphabet in a lowercase
 * Return: returns value 0
 */
int main(void)
{
	int ch;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
		if (ch == '9')
		continue;
		putchar(44);
		putchar(32);
	}
	putchar('\n');

	return (0);
}
