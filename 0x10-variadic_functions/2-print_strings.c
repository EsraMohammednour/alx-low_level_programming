#include "variadic_functions.h"

/**
 * print_strings - Function that prints numbers, followed by a new line
 * @separator: pointer
 * @n: variable
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list w;

	va_start(w, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(w, char *);
		if (x == NULL)
		x = "(nil)";
		printf("%s", x);
		if (i < (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(w);
}
