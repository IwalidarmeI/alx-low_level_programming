#include <stdio.h>

/**
 * main - this the begin of the program
 * @argc: this the counter of the arguments
 * @argv: this the array
 * Return: Reurns 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	argc--;
	printf("%d\n", argc);
	return (0);
}
