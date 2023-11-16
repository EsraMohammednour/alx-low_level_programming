#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end
 * @head: Pointer
 * @str: string
 * Return: struct
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *x, *p;

	if (str == NULL)
	return (NULL);
	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);
	x->str = strdup(str);
	if (x->str == NULL)
	{
		free(x);
		return (NULL);
	}
	x->len = strlen(x->str);
	x->next = NULL;
	if (*head == NULL)
	{
		*head = x;
		return (x);
	}
	p = *head;
	while (p->next)
	p = p->next;
	p->next = x;
	return (x);
}
