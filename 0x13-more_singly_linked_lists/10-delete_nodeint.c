#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes
 *	the node at index index of a listint_t linked list
 * @head: Pointer
 * @index: int value
 * Return: int value
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *esra, *hind;

	if (*head == NULL || head == NULL)
	return (-1);
	esra = *head;
	if (index == 0)
	{
		*head = esra->next;
		free(esra);
		return (1);
	}
	for (x = 0; x < index - 1; x++)
	{
		if (!esra || !esra->next)
		return (-1);
		esra = esra->next;
	}
	hind = esra->next;
	esra->next = hind->next;
	free(hind);
	return (1);
}
