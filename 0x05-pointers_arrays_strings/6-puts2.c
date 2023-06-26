#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @strr: string to be modified
 *
 * Return: void
 */

void puts2(char *str)
{
	int f;
	int j;

	while (str[j] != '\0')
	{
		j++;
	}
	for (f = 0; f < j; f += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
