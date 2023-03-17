#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the alphabet in lowercase and uppercase
 * using the putchar function
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	/* Print lowercase alphabet */
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	/* Print uppercase alphabet */
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
