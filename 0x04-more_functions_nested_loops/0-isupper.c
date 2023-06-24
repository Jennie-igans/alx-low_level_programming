#include "main.h"

/**
 * _isupper - Checks if character is upper
 * @c: character to be checked
 * Return: 1 for upper case or 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
