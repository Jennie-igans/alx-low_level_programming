
#include "main.h"

/**
 * reverse_array -reverses arrays of integers
 * @a: array of integer
 * @n: number of elements of array
 * Return: void
*/

void reverse_array(int *a, int n)
{
int j;
int k;

for (j = 0; j < n--; j++)
{
k = a[j];
a[k] = a[n];
a[n] = k;
}
}
