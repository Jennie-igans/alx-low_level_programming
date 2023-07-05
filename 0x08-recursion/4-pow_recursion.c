#include "main.h"

/**
 * _pow_recursion - returns a value of a number raised to a power
 * @x: value to raise
 * @y: power raised
 * Return: the value raised
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
