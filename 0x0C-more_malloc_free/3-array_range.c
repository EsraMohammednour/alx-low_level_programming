#include "main.h"

/**
 * array_range -  function that creates an array of integers
 * @min: minimum int number
 * @max: maximum int number
 * Return: int pointer
 */

int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
	return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	p[i] = min + i;
	return (p);
}
