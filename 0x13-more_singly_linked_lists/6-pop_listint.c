#include "lists.h"

/**
 *  pop_listint - Function that deletes the head node of a listint_t
 *	linked list, and returns the head node’s data (n).
 * @head: Pointer
 * Return: Number of nodes that deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *esra;
	int x;

	if (*head == NULL)
	return (NULL);
	esra = *head;
	*head = esra->next;
	x = esra->n;
	free(esra);
	return (x);
}
