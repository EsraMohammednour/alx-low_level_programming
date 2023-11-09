#include "variadic_functions.h"

/**
 * print_all -  Function that prints anything
 * @format: const variable
 * Return: Void
 */

void print_all(const char * const format, ...)
{
	va_list A;
	unsigned int i = 0;
	char *b;

	va_start(A, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(A, int));
				break;
			case 'i':
				printf("%d", va_arg(A, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(A, double));
				break;
			case 's':
				b = va_arg(A, char *);
				if (b == NULL)
					b = "(nil)";
				printf("%s", b);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(A);
}

