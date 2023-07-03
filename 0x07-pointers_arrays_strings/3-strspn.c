#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: input value
 * @accept: input value
 * Return: Always 0 (on success)
 */

unsigned int _strspn(char *s, char *accept)
{
	int h;
	unsigned int n = 0;

	while (*s)
	{
		for (h = 0; accept[h]; h++)
		{
			if (*s == accept[h])
			{
				n++;
				break;
			}
			else if (accept[h - 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
