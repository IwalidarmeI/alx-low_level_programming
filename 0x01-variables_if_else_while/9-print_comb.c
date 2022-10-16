#include <stdio.h>

/**
 * main - this is main function
 * description - this program display alphabet in a lowercase
 * Return: returns value 0
 */
int main(void)
{
	int ch;
	for (ch = '0' ; ch <= '8' ; ch++)
	{
		putchar(ch);
		putchar(44);
		putchar(32);
	}
	putchar(57);

	return (0);
}
