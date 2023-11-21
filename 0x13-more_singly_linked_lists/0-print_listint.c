#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a listint_t list
 * @h: Pointer
 * Return: Numder of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
