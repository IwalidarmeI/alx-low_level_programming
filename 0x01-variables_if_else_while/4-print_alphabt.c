#include <stdio.h>

/**
 * main - this is main function
 * description - this program display alphabet in a lowercase
 * Return: returns value 0
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		while (ch != 'q' || ch != 'e')
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
