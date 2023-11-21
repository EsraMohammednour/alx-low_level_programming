#include "lists.h"


size_t free_listint_safe(listint_t **h)
{
	listint_t *t = *h, *t2;
	size_t x = 0;

	if (t == 0 || h == 0)
	return (0);
	while (t != 0)
	{
		t2 = t;
		t = t->next;
		x++;
		free(t2);

		if (t2 <= t)
			break;
	}

	*h = 0;
	return (X);
}
