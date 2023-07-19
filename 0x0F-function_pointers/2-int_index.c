#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - a function that searches an integer
 * @size: number of elements in the array
 * @array: array
 * @cmp: pointer to function used
 * Return: 0
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
