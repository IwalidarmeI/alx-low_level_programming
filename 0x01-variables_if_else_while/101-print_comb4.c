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
	int c;

	for (c = '0' ; c <= '9' ; c++)
	{
		for (n = '0' ; n <= '9' ; n++)
		{
			for (ch = '0' ; ch <= '9' ; ch++)
			{
				if (n >= ch || n <= c)
					continue;

				putchar(c);
				putchar(n);
				putchar(ch);

				if (c == '7' && n == '8' && ch == '9')
					continue;
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
}
