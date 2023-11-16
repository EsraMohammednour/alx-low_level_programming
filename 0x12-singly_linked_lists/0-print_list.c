#include "lists.h"

/**
 * print_list - Function that print list
 * @h: Pointer
 * Return: value
 */

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		x++;
	}
	return (x);
}
