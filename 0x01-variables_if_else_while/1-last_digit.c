#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this function to start our program
 * description - this program gives a random value to n
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	printf("Last digit of %d and is greater than 5\n", n);
	if (n == 0)
	printf("Last digit of %d and is zero\n", n);
	if (n < 6 && n != 0)
	printf("Last digit of %d and is less than 6 and not 0\n", n);
	/* your code goes there */
	return (0);
}
