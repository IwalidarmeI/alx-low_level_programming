#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - using the function main to begin program
 * description - this program use to generate a random a n number
 * Return: returns value 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/*
 * if - using if statments for condition
 */
	if (n > 0)
	printf("%d is positive\n", n);
	if (n < 0)
	printf("%d is negative\n", n);
	if (n == 0)
	printf("%d is zero\n", n);
	/* your code goes there */

	return (0);
}
