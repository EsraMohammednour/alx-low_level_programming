#include "main.h"

/**
 * _puts - Print string
 *
 * @str: String value to print
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
