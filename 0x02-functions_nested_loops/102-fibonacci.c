#include <stdio.h>

/**
 * main - this is the start of the program
 *
 * Return: Returns 0
 */
int main(void)
{
	long int f1 = 1;
	long int f2 = 1;
	int i;

	printf("1, ");
	for (i = 2 ; i <= 50 ; i++)
	{
		f1 = f1 + f2;
		f2 = f1 - f2;
		if (i == 50)
		{
			printf("%ld\n", f1);
		}
		printf("%ld, ", f1);
	}
	return (0);
}
