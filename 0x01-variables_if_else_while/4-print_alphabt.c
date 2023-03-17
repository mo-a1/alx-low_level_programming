#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the alphabet in lowercase except for q and e
 * using the putchar function
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}

	putchar('\n');

	return (0);
}
