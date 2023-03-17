#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function generates a random integer using the rand() function
 * and determines it is value and print aprober message to the console indicating the result.
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_int = n % 10;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n,  last_int );
	else if (n == 0)
		printf("Last digit of %d is %d and is zero\n", n, last_int);

	else 
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_int);
	return (0);
}
