#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - a function that concatenates two string
 * @s1: string to append
 * @s2: string to concatenate from
 * @n: number of bytes of s1 to concatenate to s@
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int a = 0, b = 0, len1 = 0, len2 = 0;

while (s1 && s1[len1])
len1++;
while (s2 && s2[len2])
len2++;

if (n < len2)
s = malloc(sizeof(char) * (len1 + n + 1));
else
s = malloc(sizeof(char) * (len2 + len1 + 1));

if (!s)
return (NULL);

while (a < len1)
{
s[a] = s1[a];
a++;
}
while (n < len2 && a < (len2 + n))
s[a++] = s1[b++];

while (n <= len2 && a < (len2 + len1))
s[a++] = s1[b++];
s[a] = '\0';
return (s);
}
