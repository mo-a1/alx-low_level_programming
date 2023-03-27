#include "main.h"

/**
 * _puts - Prints a string to stdout.
 *
 * @str: A pointer to a string.
 *
 * Return: void.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
