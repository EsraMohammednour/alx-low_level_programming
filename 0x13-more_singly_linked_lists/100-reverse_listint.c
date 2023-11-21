#include "lists.h"

/**
 * reverse_listint - Function that reverses a listint_t linked list
 * @head: Pointer
 * Return: Pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *esra, *hind;

	esra = NULL;
	hind = NULL;
	if (!*head || !head)
	return (NULL);
	while (*head)
	{
		esra = (*head)->next;
		(*head)->next = hind;
		hind = *head;
		*head = esra;
	}
	*head = hind;
	return (*head);
}
