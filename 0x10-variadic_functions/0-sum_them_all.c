#include "variadic_functions.h"

/**
 * sum_them_all - Function that some the numders
 * @n: variable
 * Return: int value
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, s = 0;
	va_list w;

	va_start(w, n);
	if (n == 0)
	return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(w, unsigned int);
		s += x;
	}
	va_end(w);
	return (s);
}
