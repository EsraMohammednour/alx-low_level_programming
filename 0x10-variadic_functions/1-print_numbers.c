#include "variadic_functions.h"

/**
 * print_numbers - Function that prints numbers, followed by a new line
 * @separator: pointer
 * @n: variable
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list w;

	va_start(w, n);
	if (separator == NULL)
	return;
	for (i = 0; i < n; i++)
	{
		x = va_arg(w, unsigned int);
		if (i < n - 1)
		printf("%s", separator);
		printf("%d", x);
	}
	printf("\n");
	va_end(w);
}
