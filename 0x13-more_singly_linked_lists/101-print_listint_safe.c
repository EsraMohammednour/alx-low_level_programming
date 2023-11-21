#include "lists.h"

/**
 * print_listint_safe - Function that prints a listint_t linked list
 * @head: Pointer
 * Return: unsigned int value
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *t, *t2;
	unsigned int x = 0;

	t = head;
	if (t == 0)
	return (0);
	while (t != 0)
	{
		t2 = t;
		t = t->next;
		printf("[%p] %d\n", (void *)t2, t2->n);
		x++;
		if (t2 <= t)
		{
			printf("-> [%p] %d\n", (void *)t, t->n);
			break;
		{
		else
		exit(98);
	}
	return (x);
}
