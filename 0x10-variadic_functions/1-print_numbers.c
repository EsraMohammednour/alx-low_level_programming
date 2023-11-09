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
	for (i = 0; i < n; i++)
	{
		x = va_arg(w, unsigned int);
		 printf("%d", x);
		if (i < (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(w);
}
