#iclude "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list
 * @head: Pointer
 * Return: pointer
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h, *t;

	if (!head)
	return (NULL);
	h = t = head;
	while (t && h && h->next)
	{
		t = t->next;
		h = (h->next)->next;
		if (h == t)
		{
			t = head;
			while (t && h)
			{
				if (t == h)
				return (t);
				t = t->next;
				h = h->next;
			}
		}
	}

	return (NULL);
}
