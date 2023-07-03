#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: input
 * @accept: input
 * Return: Always 0 (on success)
 */

char *_strpbrk(char *s, char *accept)
{
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*s == accept[d])
				return (s);
		}
		s++;
	}
	return ("\0");
}
