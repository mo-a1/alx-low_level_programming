#include "main.h"

/**
 * _strcpy - Copies a string from src to dest.
 *
 * @dest: A pointer to a buffer to copy the string to.
 * @src: A pointer to the string to copy.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = src[i];

	return dest;
}
