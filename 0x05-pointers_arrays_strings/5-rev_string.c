#include "main.h"

/**
 * puts2 - Prints every other character of a string to stdout.
 *
 * @str: A pointer to a string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (int i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
