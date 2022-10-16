#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/*
 * main - using the funcyion main to begin program
 */
/* betty style doc for function main goes there */
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
