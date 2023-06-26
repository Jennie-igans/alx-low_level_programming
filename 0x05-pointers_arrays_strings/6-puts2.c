#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be modified
 *
 * Return: void
 */

void puts2(char *str)
{
	int f;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}
	for (f = 0; f < j; f += 2)
	{
		_putchar(str[f]);
	}
	_putchar('\n');
}
