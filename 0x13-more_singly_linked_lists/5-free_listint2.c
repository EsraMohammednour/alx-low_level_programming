#include "lists.h"

/**
 * free_listint2 - Function that frees a listint_t list
 * @head: Pointer
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *esra;

	while (*head != NULL)
	{
		if (*head == NULL)
		*head == "(nil)";
		esra = (*head)->next;
		free(*head);
		*head = esra;
	}
