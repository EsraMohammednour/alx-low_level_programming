#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node
 *	at the end of a listint_t list
 * @head: Pointer
 * @n: Int value
 * Return: Pointer
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *esra, *x;

	esra = malloc(sizeof(listint_t));
	if (esra == NULL)
	return (NULL);
	esra->n = n;
	esra->next = NULL;
	if (*head == NULL)
	{
		*head = esra;
		return (esra);
	}
	x = *head;
	while (x->next != NULL)
	x = x->next;
	x->next = esra;
	return (esra);
}
