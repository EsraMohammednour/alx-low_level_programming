#include "main.h"

/**
 * create_array - create array
 * @size: Size of array
 * @c: char input
 * Return: char value
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = (char *)malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
