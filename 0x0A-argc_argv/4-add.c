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
	int add = 1;

	for (i = 1 ; i < argc ; i++)
	{
		if (argv[i] < 58 && argv[i] > 47)
		{
			add = atoi(argv[i]) + add;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", add);
	return (0);
}
