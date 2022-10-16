#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this function to start our program
 * description - this program gives a random value to n
 * Return: returns value 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n,d);
	if (d == 0)
	printf("Last digit of %d is %d and is zero\n", n,d);
	if (d < 6 && d != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n,d);
	/* your code goes there */
	return (0);
}
