#include <stdio.h>

/**
 * main - this is the start of the program
 *
 * Return: Returns 0
 */
int main(void)
{
	int f1 = 1;
	int f2 = 2;
	int i;

	for (i = 0 ; i <= 50 ; i++)
	{
		f1 = f1 + f2;
		printf("%d, ", f1);
	}
	return (0);
}	
