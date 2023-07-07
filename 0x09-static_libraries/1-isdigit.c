#include "main.h"

/**
 * _isdigit - Checks if a character is a digit
 * @c: the number to be checked
 * Return: 0 is the character is adigit or 0 if anything else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
