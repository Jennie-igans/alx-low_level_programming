#include "main.h"

/**
 * _strncat - concatenates two strings
 * using n bytes of src
 * @dest: destination input value
 * @src: source input value
 * @n: input value
 * Return: Dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
