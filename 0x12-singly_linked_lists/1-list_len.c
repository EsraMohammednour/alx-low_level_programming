#include "lists.h"

/**
 * list_len - Function that returns the number of elements
 * @h: Pointer
 * Return: size_t value
 */

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
