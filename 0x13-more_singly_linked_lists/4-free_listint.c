#include "lists.h"

/**
 * free_listint - Function that frees a listint_t list
 * @head: Pointer
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *esra;

	while (head != NULL)
	{
		esra = head->next;
		free(head);
		head = esra;
	}
}
