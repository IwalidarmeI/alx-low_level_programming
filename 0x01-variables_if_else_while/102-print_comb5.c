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
	int b;

	for (b = '0' ; b <= '9' ; b++)
	{
		for (c = '0' ; c <= '9' ; c++)
		{
			for (n = '0' ; n <= '9' ; n++)
			{
				for (ch = '0' ; ch <= '9' ; ch++)
				{
					if (ch <= c || n < b)
						continue;

					putchar(b);
					putchar(c);
					putchar(32);
					putchar(n);
					putchar(ch);

					if (b == '8' && c == '8' && n == '9' && ch == '9')
						continue;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
