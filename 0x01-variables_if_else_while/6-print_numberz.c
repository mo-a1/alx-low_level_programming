#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all single digit numbers of base 10 starting from 0
 * using the putchar function without using any char variables
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
