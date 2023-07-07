#include "main.h"

/**
 * _strcmp - compares string values
 * @s1: first string value
 * @s2: second string value to be compared
 * Return: s1[i] -  s2[i]
*/

int _strcmp(char *s1, char *s2)
{
int equal = 0;

while (*s1)
{
if (*s1 != *s2)
{
equal = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (equal);
}
