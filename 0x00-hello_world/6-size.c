#include <stdio.h>

/**
 * main - this main function
 * description - this program calculate size of data types
 * Return: returns 0
 */
int main(void)
{
	int integer;
	long int longInt;
	long long int longlongInt;
	char character;
	float floatT;

	printf("Size of a char:%2ld byte(s)\n", sizeof(character));
	printf("Size of an int:%2ld byte(s)\n", sizeof(integer));
	printf("Size of a long int:%2ld byte(s)\n", sizeof(longInt));
	printf("Size of a long long int:%2ld byte(s)\n", sizeof(longlongInt));
	printf("Size of a float:%2ld byte(s)\n", sizeof(floatT));
	return (0);
}
