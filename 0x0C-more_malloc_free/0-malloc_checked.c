#include "main.h"

/**
 * malloc_checked - Function that allocates memory using malloc
 * @b: int value
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
	exit(98);
	return (s);
}
