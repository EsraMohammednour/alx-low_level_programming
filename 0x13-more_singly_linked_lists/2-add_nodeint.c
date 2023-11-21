#include "lists.h"

/**
 * add_nodeint - Function that adds
 *	a new node at the beginning of a listint_t list.
 * @head: Pointer
 * @n: int value
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *esra;

	esra = malloc(sizeof(listint_t));
	if (esra == NULL)
	return (NULL);
	esra->n = n;
	esra->next = *head;
	*head = esra;
	return (esra);
}
