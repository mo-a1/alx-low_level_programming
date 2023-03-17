#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all possible different combinations of three digits
 * using the putchar function
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j, k;

	/* Print all three-digit combinations */
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				/* Check for duplicate combinations */
				if (i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');

					if (i == 7 && j == 8 && k == 9)
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
	}

	return (0);
}
