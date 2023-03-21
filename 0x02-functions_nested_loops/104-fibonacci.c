#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int i;
    unsigned int a = 1, b = 2, c;

    printf("%u, %u", a, b);

    for (i = 3; i <= 98; i++)
    {
        c = a + b;
        printf(", %u", c);
        a = b;
        b = c;
    }

    printf("\n");

    return (0);
}
