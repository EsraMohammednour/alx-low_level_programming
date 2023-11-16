#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning
 * @head: Pointer
 * @str: string value
 * Return: struct
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *x;

	x = malloc(sizeof(list_t));
	if (head == NULL || x == NULL)
		return (NULL);
	if (str)
	{
		x->str = strdup(str);
		if (x == NULL)
		{
			free(x);
			return (NULL);
		}
	}
	x->len = strlen(str);
	x->next = *head;
	*head = x;
	return (x);
}
