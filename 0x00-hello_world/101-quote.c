#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(msg) - 1;

	ssize_t bytes_written = write(2, msg, len);
	if (bytes_written != len)
		return (1);

	return (1);
}
