#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all possible combinations of two two-digit numbers
 * using the putchar function
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	/* Print all two-digit combinations */
	for (i = 0; i < 100; i++)
	{
		for (j = i; j < 100; j++)
		{
			/* Check for duplicate combinations */
			if (i <= j)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');

				if (i == 99 && j == 99)
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
	}

	return (0);
}
