#include "main.h"

/**
 * puts_half - Prints the second half of a string to stdout.
 *
 * @str: A pointer to a string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}

	for (int i = start; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
