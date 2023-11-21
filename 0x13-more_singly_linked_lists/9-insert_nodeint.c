#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node
 *	at a given position
 * @head: Pointer
 * @idx: Index of the list where the new node should be added
 * @n: Integer data
 * Return: pointer
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *esra, *hind;
	unsigned int x;

	if (head == NULL)
	return (NULL);
	esra = malloc(sizeof(listint_t));
	if (esra == NULL)
	return (NULL);
	esra->n = n;
	esra->next = NULL;
	if (idx == 0)
	{
		esra->next = *head;
		*head = esra;
		return (esra);
	}
	hind = *head;
	for (x = 0; esra && x < idx; x++)
	{
		if (x == idx - 1)
		{
			esra->next = hind->next;
			hind->next = esra;
			return (esra);
		}
		hind = hind->next;
	}
	return (NULL);
}



