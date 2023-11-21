#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns
 *	the nth node of a listint_t linked list.
 * @head: Pointer
 * @index: Show the numbers of nodes
 * Return: Pointer
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;
	listint_t *esra;

	if (head == NULL)
	return (NULL);
	temp = head;
	for (x = 0; x < index && esra; x++)
	esra = esra->next;
	return (x);
}
