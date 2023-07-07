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
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
