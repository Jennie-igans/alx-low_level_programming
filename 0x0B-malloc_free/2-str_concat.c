#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - gets the end of input and adds together for size
 * @s1: input one for concat
 * @s2: input two to concat
 * Return: result of both input
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int k, ck;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	k = ck = 0;
	while (s1[k] != '\0')
		k++;
	while (s2[ck] != '\0')
		ck++;
	conct = malloc(sizeof(char) * (k + ck + 1));

	if (conct == NULL)
		return (NULL);
	k = ck = 0;
	while (s1[k] != '\0')
	{
		conct[k] = s1[k];
		k++;
	}

	while (s2[ck] != '\0')
	{
		conct[k] = s2[ck];
		k++, ck++;
	}
	conct[k] = '\0';
	return (conct);
}
