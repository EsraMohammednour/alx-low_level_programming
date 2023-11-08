#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given
 *	as a parameter on each element of an array.
 * @array: array of integer
 * @size: int variable
 * @action: pointer
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
	
		action(array[i]);
	}
}
