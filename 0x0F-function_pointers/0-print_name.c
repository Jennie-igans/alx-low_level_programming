#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that points to a name
 * @name: name to be called
 * @f: pointer to function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
