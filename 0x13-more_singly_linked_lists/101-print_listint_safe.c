#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t linked list
 * @head: Pointer
 * Return: unsigned int value
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *esra, *hind;
	size_t x;

	esra = head;
	if (esra == 0)
	return (0);
	for (x = 0; esra != 0; x++)
	{
		hind = esra;
		esra = esra->next;
		printf("[%p] %d\n", (void *)hind, hind->n);
		if (hind <= esra)
		{
			printf("-> [%p] %d\n", (void *)esra, esra->n);
			break;
		}
	}
	return (x);
}
