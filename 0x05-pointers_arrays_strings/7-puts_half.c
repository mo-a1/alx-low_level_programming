#include "main.h"

/**
 * print_array - Prints n elements of an integer array to stdout.
 *
 * @a: A pointer to an integer array.
 * @n: The number of elements to print.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
