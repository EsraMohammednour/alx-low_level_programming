#include "main.h"

/**
 * print_rev - Print  reverse string
 *
 * @str: String value to print
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
	i++;
	s++;
	}
	while (i > 0)
	{
		s--;
		_putchar(*s);
		i--;
	}
	_putchar('\n');
}
