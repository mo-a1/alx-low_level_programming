#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued
 * terms in the Fibonacci sequence whose values do not 
 * exceed 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 1, b = 2, c, sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
			sum += a;

		c = a + b;
		a = b;
		b = c;
	}

	printf("%ld\n", sum);

	return (0);
}

