#include "function_pointers.h"

/**
 * int_index -  Function that searches for an integer
 * @array: Array of integer
 * @size: size of array
 * @cmp: pionter
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	size_t i;

	if (array == NULL || cmp == NULL || size <= 0)
	return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
		
			return (i);
		}
	}
	return (-1);
}
