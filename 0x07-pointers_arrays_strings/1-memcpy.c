#include "main.h"

/**
 * _memcpy - copies a memory space
 * @dest: where copied memory is stored
 * @src: where memory is copied from
 * @n: number of byte
 * Return: copies of n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int j = n;

	for (; x > j; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
