#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function print two diagonals of a square matrix of integers
 *
 * @a: variable
 * @size: Size of array
 */

void print_diagsums(int *a, int size)
{
	int i, x = 0, y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		y += a[size - i - 1];
		a += size;
	}
	printf("%d", x);
	printf("%d\n", y);
}
