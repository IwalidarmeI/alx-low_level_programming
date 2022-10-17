#include <stdio.h>

/**
 * main - this is main function
 * description - this program display alphabet in a lowercase
 * Return: returns value 0
 */
int main(void)
{
	int ch;
	int n;

	for (n = '0' ; n <= '9' ; n++)
	{
		for (ch = '0' ; ch <= '9' ; ch++)
		{
			if (n >= ch)
				continue;

			putchar(n);
			putchar(ch);

			if (n == '8' && ch == '9')
				continue;

			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
