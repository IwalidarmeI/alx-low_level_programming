#include <stdio.h>

/**
 * main - this is the start of the program
 *
 * Return: Returns 0
 */
int main(void)
{
	int f1 = 1;
	int f2 = 1;
	int i;

	printf("1, ");
	for (i = 2 ; i <= 50 ; i++)
	{
		f1 = f1 + f2;
		f2 = f1 - f2;
		if (i == 50)
		{
			printf("%d\n", f1);
		}
		printf("%d, ", f1);
	}
	return (0);
}