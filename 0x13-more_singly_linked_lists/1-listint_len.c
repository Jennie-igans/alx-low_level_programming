#include "lists.h"

/**
 * listint_len - returns the length of number of elements
 * @h: linked list of type listint_t to transverse
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
