#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all possible different combinations of two digits
 * using the putchar function
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	/* Print all two-digit combinations */
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i == 8 && j == 9)
			{
				/* Last combination - don't print comma */
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
