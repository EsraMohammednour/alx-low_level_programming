#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 * @head: Pointer
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *esra;

	if (*head)
	{
		while (*head != NULL)
		{
			esra = *head;
			*head = esra->next;
			free(esra);
		}
	}
}
