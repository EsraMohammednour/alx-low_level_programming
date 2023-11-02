#include "main.h"

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: int number
 * @size: int number
 * Return: char pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *n;
	size_t i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	n = malloc(nmemb * size);
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		n[i] = 0;
	}
	return (n);
}
