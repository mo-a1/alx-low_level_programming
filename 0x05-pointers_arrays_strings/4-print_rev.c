#include "main.h"

/**
 * rev_string - Reverses a string.
 *
 * @s: A pointer to a string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char temp;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
