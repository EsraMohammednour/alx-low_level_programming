#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data (n)
 *	of a listint_t linked list
 * @head: Pointer
 * Return: Sum of all the data
 */
int sum_listint(listint_t *head)
{
	int x;
	listint_t *esra;

	esra = head;
	if (head == NULL)
	return (0);
	while (esra != NULL)
	{
		x += esra->n;
		esra = esra->next;
	}
	return (x);
}
