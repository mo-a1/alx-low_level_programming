#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all the numbers of base 16 in lowercase
 * using the putchar function
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	/* Print numbers in hexadecimal */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
