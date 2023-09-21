#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: pointer
 * @n : arry number
 */

void reverse_array(int *a, int n)
{
	int x, y;

	n = n - 1;
	x = 0;
	while (x <= n)
	{
		y = a[x];
		a[x++] = a[n];
		a[n--] = y;
	}
}
