#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data (n)
 *	of a listint_t linked list
 * @head: Pointer
 * Return: Sum of all the data
 */
int sum_listint(listint_t *head)
{
	int x = 0;

	if (head == NULL)
	return (0);
	while (head != NULL)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
