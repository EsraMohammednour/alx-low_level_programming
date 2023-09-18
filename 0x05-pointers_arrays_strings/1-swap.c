#include "main.h"

/**
 * swap_int - Swap between two numbers
 *
 * @a: Integer pointer
 *
 * @b: Integer pointer
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
