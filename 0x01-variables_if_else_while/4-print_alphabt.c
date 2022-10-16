#include <stdio.h>

/**
 * main - this is main function
 * description - this program display alphabet in a lowercase
 * Return: returns value 0
 */
int main(void)
{
	char ch = 'a';

	while ((ch != 'q' || ch != 'e')&& ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
