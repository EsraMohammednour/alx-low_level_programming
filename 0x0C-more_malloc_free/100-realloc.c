#include "main.h"

/**
 * _realloc - function that reallocates a memory
 *	block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: int value for the old size
 * @new_size: int value for the new size
 * Return: char pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *pt = ptr;
	size_t i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	return (ptr);
	p = malloc(new_size);
	if (p == NULL)
	return (NULL);
	if (new_size > old_size)
	new_size = old_size;
	for (i = 0; i < new_size; i++)
	{
		p[i] = pt[i];
	}
	free(ptr);
	return (p);
}
