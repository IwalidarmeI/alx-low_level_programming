#include <stdio.h>
#include <stdlib.h>

/**
 * main - this the begin of the program
 * @argc: this the counter of the arguments
 * @argv: this the array
 * Return: Reurns 0
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc > 1)
	{
		for (i = 1 ; i < argc ; i++)
		{
			mul = atoi(argv[i]) * mul;
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
