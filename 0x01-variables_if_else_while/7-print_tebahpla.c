#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the lowercase alphabet in reverse
 * using the putchar function
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	/* Print letters in reverse order */
	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
