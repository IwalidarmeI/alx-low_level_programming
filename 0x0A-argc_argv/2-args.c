#include <stdio.h>

/**
 * main - this the begin of the program
 * @argc: this the counter of the arguments
 * @argv: this the array
 * Return: Reurns 0
 */
int main(int argc, char *argv[])
{
	int i;
	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
