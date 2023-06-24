#include "main.h"

/**
 * print_line - draws a straight line according to parameter
 * @n: the number of lines to draw
 * Return: empty
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
