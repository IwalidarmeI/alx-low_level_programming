#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - this the begin of the program
 * @argc: this the counter of the arguments
 * @argv: this the array
 * Return: Reurns 0
 */
int main(int argc, char *argv[])
{
	int i, j;
	int add = 0;
	if (argc != 1)
	{
	for (i = 1 ; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1 ; i < argc ; i++)
	{
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	}
	else
	{
		puts("0");
	}
	return (0);
}
