#include "main.h"

/**
 * print_diagonal - Draws a diagonal line according to parameter
 * @n: number of times to print the diagonal line
 * Return: empty
 */

void print_diagonal(int n)

{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < n; y++)
			{
				if (x == y)
				{
					_putchar('\\');
					else if (y < x)
						_putchar(' ');
				}
			_putchar('\n');
		}
		}
	}
}
