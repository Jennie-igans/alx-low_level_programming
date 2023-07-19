#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - prints each array elem on a new line
 * @array: new array
 * @size: how many elem to print
 * @action: pointer to print in regular or not
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
