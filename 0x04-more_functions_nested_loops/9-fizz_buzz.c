#include <stdio.h>

/**
 * main - this is the start of the program
 *
 * Return: Returns 0
 */
int main(void)
{
	int number;

	for (number = 1 ; number <= 100 ; number++)
	{
		if (number % 5 == 0 && number % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (number % 5 == 0)
		{
			if (number == 100)
				printf("Buzz");
			else
				printf("Buzz ");
		}
		else if (number % 3 == 0)
		{
			printf("Fizz ");
		}
		else
			printf("%d ", number);
	}
	printf("\n");

	return (0);
}
