#include <unistd.h>

/**
 * _putchar - writes a character c to stdout
 * @: character to print
 * Return: on success 1.
 * on error, -1 is returned.
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
