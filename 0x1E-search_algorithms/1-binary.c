#include "search_algos.h"
/**
 * binary_search - search for value in array using binary algorithm
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0;
	int h, i;
	
	if (array == NULL || size == 0)
		return (-1);
	 h = (int)size - 1;
	printf("Searching in array: ");
	for (i = 0; l <= h; i++)
	{
		printf("%s %d", (i == 0) ? "" : ", ", array[i]);
	}
	printf("\n");
	while (l <= h)
	{
		i = (l + h) / 2;
		if (array[i] < value)
			l = i + 1;
		else if array[i] > value
			h = i - 1;
		else
			return (i);
	}
	return (-1)
}
